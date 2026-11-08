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

// Function: Cmd_EXIT_Entry__FP15BsSCDEntControl
// Address: 0x1a95d0 - 0x1a95e0
void Cmd_EXIT_Entry__FP15BsSCDEntControl_0x1a95d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_EXIT_Entry__FP15BsSCDEntControl_0x1a95d0");
#endif

    ctx->pc = 0x1a95d0u;

    // 0x1a95d0: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x1a95d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1a95d4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a95d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1a95d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A95D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A95DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A95D8u;
        // 0x1a95dc: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A95D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A95E0u;
}
