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

// Function: entry_00162018
// Address: 0x162018 - 0x162044
void entry_00162018_0x162018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162018_0x162018");
#endif

    ctx->pc = 0x162018u;

    // 0x162018: 0x46042832  c.eq.s      $f5, $f4
    ctx->pc = 0x162018u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16201c: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x16201cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x162020: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x162020u;
    {
        const bool branch_taken_0x162020 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x162024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162020u;
        // 0x162024: 0x24430030  addiu       $v1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162020) {
            ctx->pc = 0x162060u;
            return;
        }
    }
    ctx->pc = 0x162028u;
    // 0x162028: 0x46052034  c.lt.s      $f4, $f5
    ctx->pc = 0x162028u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16202c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x16202Cu;
    {
        const bool branch_taken_0x16202c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16202c) {
            ctx->pc = 0x162044u;
            return;
        }
    }
    ctx->pc = 0x162034u;
    // 0x162034: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x162034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162038: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x162038u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16203c: 0x4503001a  bc1tl       . + 4 + (0x1A << 2)
    ctx->pc = 0x16203Cu;
    {
        const bool branch_taken_0x16203c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16203c) {
            ctx->pc = 0x162040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16203Cu;
            // 0x162040: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1620A8u;
            return;
        }
    }
    ctx->pc = 0x162044u;
}
