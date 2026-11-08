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

// Function: Cmd_GET_CLEAR_COUNT_Entry__FP15BsSCDEntControl
// Address: 0x11a1a8 - 0x11a1bc
void Cmd_GET_CLEAR_COUNT_Entry__FP15BsSCDEntControl_0x11a1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_GET_CLEAR_COUNT_Entry__FP15BsSCDEntControl_0x11a1a8");
#endif

    ctx->pc = 0x11a1a8u;

    // 0x11a1a8: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x11a1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11a1ac: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x11a1acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x11a1b0: 0x8c43e1f4  lw          $v1, -0x1E0C($v0)
    ctx->pc = 0x11a1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1EE1F4u));
    // 0x11a1b4: 0x3e00008  jr          $ra
    ctx->pc = 0x11A1B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A1B4u;
        // 0x11a1b8: 0xac8300b0  sw          $v1, 0xB0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A1B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A1BCu;
}
