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

// Function: InqEyePosition__6WcView
// Address: 0x1dd5c8 - 0x1dd5e4
void InqEyePosition__6WcView_0x1dd5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InqEyePosition__6WcView_0x1dd5c8");
#endif

    ctx->pc = 0x1dd5c8u;

    // 0x1dd5c8: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x1dd5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1dd5cc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DD5CCu;
    {
        const bool branch_taken_0x1dd5cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD5CCu;
        // 0x1dd5d0: 0x248200d0  addiu       $v0, $a0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd5cc) {
            ctx->pc = 0x1DD5DCu;
            goto label_1dd5dc;
        }
    }
    ctx->pc = 0x1DD5D4u;
    // 0x1dd5d4: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1dd5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1dd5d8: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x1dd5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
label_1dd5dc:
    // 0x1dd5dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD5DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD5DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD5E4u;
}
