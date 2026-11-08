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

// Function: Cmd_DIAG_XXXX_Entry__FP15BsSCDEntControl
// Address: 0x14a7b0 - 0x14a7bc
void Cmd_DIAG_XXXX_Entry__FP15BsSCDEntControl_0x14a7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_DIAG_XXXX_Entry__FP15BsSCDEntControl_0x14a7b0");
#endif

    ctx->pc = 0x14a7b0u;

    // 0x14a7b0: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x14a7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x14a7b4: 0x3e00008  jr          $ra
    ctx->pc = 0x14A7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A7B4u;
        // 0x14a7b8: 0xac4043d0  sw          $zero, 0x43D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A7B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A7BCu;
}
