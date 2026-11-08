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

// Function: entry_00137404
// Address: 0x137404 - 0x137420
void entry_00137404_0x137404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137404_0x137404");
#endif

    ctx->pc = 0x137404u;

    // 0x137404: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x137404u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137408: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x137408u;
    {
        const bool branch_taken_0x137408 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13740Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137408u;
        // 0x13740c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137408) {
            ctx->pc = 0x137420u;
            return;
        }
    }
    ctx->pc = 0x137410u;
    // 0x137410: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x137410u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
    // 0x137414: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x137414u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137418: 0x45010032  bc1t        . + 4 + (0x32 << 2)
    ctx->pc = 0x137418u;
    {
        const bool branch_taken_0x137418 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x137418) {
            ctx->pc = 0x1374E4u;
            return;
        }
    }
    ctx->pc = 0x137420u;
}
