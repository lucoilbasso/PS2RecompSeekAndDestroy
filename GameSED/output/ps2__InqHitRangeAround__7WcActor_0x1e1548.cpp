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

// Function: _InqHitRangeAround__7WcActor
// Address: 0x1e1548 - 0x1e1564
void ps2__InqHitRangeAround__7WcActor_0x1e1548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__InqHitRangeAround__7WcActor_0x1e1548");
#endif

    ctx->pc = 0x1e1548u;

    // 0x1e1548: 0xc48000ec  lwc1        $f0, 0xEC($a0)
    ctx->pc = 0x1e1548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e154c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1e154cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e1550: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1e1550u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1554: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1E1554u;
    {
        const bool branch_taken_0x1e1554 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e1554) {
            ctx->pc = 0x1E1558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1554u;
            // 0x1e1558: 0xc48000e0  lwc1        $f0, 0xE0($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E155Cu;
            goto label_1e155c;
        }
    }
    ctx->pc = 0x1E155Cu;
label_1e155c:
    // 0x1e155c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E155Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E155Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1564u;
}
