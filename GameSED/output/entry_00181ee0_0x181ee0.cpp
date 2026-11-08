#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_00181ee0
// Address: 0x181ee0 - 0x181f18
void entry_00181ee0_0x181ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181ee0_0x181ee0");
#endif

    ctx->pc = 0x181ee0u;

    // 0x181ee0: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x181EE0u;
    {
        const bool branch_taken_0x181ee0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x181EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181EE0u;
        // 0x181ee4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181ee0) {
            ctx->pc = 0x181F18u;
            return;
        }
    }
    ctx->pc = 0x181EE8u;
    // 0x181ee8: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x181ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181eec: 0x46070034  c.lt.s      $f0, $f7
    ctx->pc = 0x181eecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181ef0: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x181EF0u;
    {
        const bool branch_taken_0x181ef0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x181EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181EF0u;
        // 0x181ef4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181ef0) {
            ctx->pc = 0x181F18u;
            return;
        }
    }
    ctx->pc = 0x181EF8u;
    // 0x181ef8: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x181ef8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181efc: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x181EFCu;
    {
        const bool branch_taken_0x181efc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x181F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181EFCu;
        // 0x181f00: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181efc) {
            ctx->pc = 0x181F1Cu;
            return;
        }
    }
    ctx->pc = 0x181F04u;
    // 0x181f04: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x181f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181f08: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x181f08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181f0c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x181F0Cu;
    {
        const bool branch_taken_0x181f0c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x181F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181F0Cu;
        // 0x181f10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181f0c) {
            ctx->pc = 0x181F18u;
            return;
        }
    }
    ctx->pc = 0x181F14u;
    // 0x181f14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x181f18u;
}
