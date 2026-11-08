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

// Function: __14__si_type_infoPCcRC16__user_type_info
// Address: 0x1e1b70 - 0x1e1b88
void ps2___14__si_type_infoPCcRC16__user_type_info_0x1e1b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___14__si_type_infoPCcRC16__user_type_info_0x1e1b70");
#endif

    ctx->pc = 0x1e1b70u;

    // 0x1e1b70: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1e1b70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1e1b74: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1e1b74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x1e1b78: 0x24630c18  addiu       $v1, $v1, 0xC18
    ctx->pc = 0x1e1b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3096));
    // 0x1e1b7c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1e1b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1e1b80: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1B80u;
        // 0x1e1b84: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1B88u;
}
