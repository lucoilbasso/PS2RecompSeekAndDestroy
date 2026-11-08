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

// Function: entry_00181b3c
// Address: 0x181b3c - 0x181b74
void entry_00181b3c_0x181b3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181b3c_0x181b3c");
#endif

    ctx->pc = 0x181b3cu;

    // 0x181b3c: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x181B3Cu;
    {
        const bool branch_taken_0x181b3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x181B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181B3Cu;
        // 0x181b40: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181b3c) {
            ctx->pc = 0x181B74u;
            return;
        }
    }
    ctx->pc = 0x181B44u;
    // 0x181b44: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x181b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181b48: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x181b48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181b4c: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x181B4Cu;
    {
        const bool branch_taken_0x181b4c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x181B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181B4Cu;
        // 0x181b50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181b4c) {
            ctx->pc = 0x181B74u;
            return;
        }
    }
    ctx->pc = 0x181B54u;
    // 0x181b54: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x181b54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181b58: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x181B58u;
    {
        const bool branch_taken_0x181b58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x181b58) {
            ctx->pc = 0x181B74u;
            return;
        }
    }
    ctx->pc = 0x181B60u;
    // 0x181b60: 0xc5a00008  lwc1        $f0, 0x8($t5)
    ctx->pc = 0x181b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181b64: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x181b64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181b68: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x181B68u;
    {
        const bool branch_taken_0x181b68 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x181B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181B68u;
        // 0x181b6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181b68) {
            ctx->pc = 0x181B74u;
            return;
        }
    }
    ctx->pc = 0x181B70u;
    // 0x181b70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x181b74u;
}
