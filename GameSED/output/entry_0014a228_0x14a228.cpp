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

// Function: entry_0014a228
// Address: 0x14a228 - 0x14a23c
void entry_0014a228_0x14a228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a228_0x14a228");
#endif

    switch (ctx->pc) {
        case 0x14a230u: goto label_14a230;
        default: break;
    }

    ctx->pc = 0x14a228u;

    // 0x14a228: 0xc06726c  jal         func_19C9B0
    ctx->pc = 0x14A228u;
    SET_GPR_U32(ctx, 31, 0x14A230u);
    ctx->pc = 0x14A22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A228u;
    // 0x14a22c: 0x248457e0  addiu       $a0, $a0, 0x57E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C9B0u, 0x14A228u, 0x14A230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A230u;
label_14a230:
    // 0x14a230: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14a230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a234: 0x3e00008  jr          $ra
    ctx->pc = 0x14A234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A234u;
        // 0x14a238: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A23Cu;
}
