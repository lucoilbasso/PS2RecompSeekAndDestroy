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

// Function: entry_00161ef8
// Address: 0x161ef8 - 0x161f2c
void entry_00161ef8_0x161ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161ef8_0x161ef8");
#endif

    ctx->pc = 0x161ef8u;

    // 0x161ef8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x161ef8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x161efc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x161efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x161f00: 0x46012832  c.eq.s      $f5, $f1
    ctx->pc = 0x161f00u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161f04: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x161f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x161f08: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x161F08u;
    {
        const bool branch_taken_0x161f08 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x161F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161F08u;
        // 0x161f0c: 0x24430030  addiu       $v1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161f08) {
            ctx->pc = 0x161F48u;
            return;
        }
    }
    ctx->pc = 0x161F10u;
    // 0x161f10: 0x46050834  c.lt.s      $f1, $f5
    ctx->pc = 0x161f10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161f14: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x161F14u;
    {
        const bool branch_taken_0x161f14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x161f14) {
            ctx->pc = 0x161F2Cu;
            return;
        }
    }
    ctx->pc = 0x161F1Cu;
    // 0x161f1c: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x161f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161f20: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x161f20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161f24: 0x4503001d  bc1tl       . + 4 + (0x1D << 2)
    ctx->pc = 0x161F24u;
    {
        const bool branch_taken_0x161f24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161f24) {
            ctx->pc = 0x161F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161F24u;
            // 0x161f28: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161F9Cu;
            return;
        }
    }
    ctx->pc = 0x161F2Cu;
}
