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

// Function: ApCMZoomSetStandard__FP9ApcCameraf
// Address: 0x141bf0 - 0x141bfc
void ApCMZoomSetStandard__FP9ApcCameraf_0x141bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCMZoomSetStandard__FP9ApcCameraf_0x141bf0");
#endif

    ctx->pc = 0x141bf0u;

    // 0x141bf0: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x141bf0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x141bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x141BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141BF4u;
        // 0x141bf8: 0xe4800204  swc1        $f0, 0x204($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 516), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141BFCu;
}
