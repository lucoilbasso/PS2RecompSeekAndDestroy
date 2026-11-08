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

// Function: SequenceCtrlCheck__10WcSequenceUi
// Address: 0x1e0a58 - 0x1e0a6c
void SequenceCtrlCheck__10WcSequenceUi_0x1e0a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SequenceCtrlCheck__10WcSequenceUi_0x1e0a58");
#endif

    ctx->pc = 0x1e0a58u;

    // 0x1e0a58: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x1e0a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1e0a5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e0a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e0a60: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1e0a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1e0a64: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0A64u;
        // 0x1e0a68: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0A6Cu;
}
