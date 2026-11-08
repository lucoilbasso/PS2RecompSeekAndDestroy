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

// Function: FreePoint__7WcSheetP11WSheetPoint
// Address: 0x1df888 - 0x1df8a8
void FreePoint__7WcSheetP11WSheetPoint_0x1df888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FreePoint__7WcSheetP11WSheetPoint_0x1df888");
#endif

    ctx->pc = 0x1df888u;

    // 0x1df888: 0x248401d0  addiu       $a0, $a0, 0x1D0
    ctx->pc = 0x1df888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 464));
    // 0x1df88c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1df88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1df890: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1df890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1df894: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1df894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1df898: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x1df898u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    // 0x1df89c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1df89cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1df8a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF8A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF8A0u;
        // 0x1df8a4: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF8A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF8A8u;
}
