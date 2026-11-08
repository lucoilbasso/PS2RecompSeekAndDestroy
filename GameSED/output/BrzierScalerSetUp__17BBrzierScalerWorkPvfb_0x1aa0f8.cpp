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

// Function: BrzierScalerSetUp__17BBrzierScalerWorkPvfb
// Address: 0x1aa0f8 - 0x1aa11c
void BrzierScalerSetUp__17BBrzierScalerWorkPvfb_0x1aa0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BrzierScalerSetUp__17BBrzierScalerWorkPvfb_0x1aa0f8");
#endif

    ctx->pc = 0x1aa0f8u;

    // 0x1aa0f8: 0xac85003c  sw          $a1, 0x3C($a0)
    ctx->pc = 0x1aa0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 5));
    // 0x1aa0fc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1aa0fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa100: 0xe48c0028  swc1        $f12, 0x28($a0)
    ctx->pc = 0x1aa100u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x1aa104: 0xac860044  sw          $a2, 0x44($a0)
    ctx->pc = 0x1aa104u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 6));
    // 0x1aa108: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1aa108u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x1aa10c: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1aa10cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1aa110: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x1aa110u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x1aa114: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA114u;
        // 0x1aa118: 0xac800040  sw          $zero, 0x40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA11Cu;
}
