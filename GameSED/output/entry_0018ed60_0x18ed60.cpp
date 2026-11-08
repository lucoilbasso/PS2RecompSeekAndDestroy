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

// Function: entry_0018ed60
// Address: 0x18ed60 - 0x18ed74
void entry_0018ed60_0x18ed60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ed60_0x18ed60");
#endif

    switch (ctx->pc) {
        case 0x18ed68u: goto label_18ed68;
        default: break;
    }

    ctx->pc = 0x18ed60u;

    // 0x18ed60: 0xc0637a8  jal         func_18DEA0
    ctx->pc = 0x18ED60u;
    SET_GPR_U32(ctx, 31, 0x18ED68u);
    ctx->pc = 0x18DEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DEA0u, 0x18ED60u, 0x18ED68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ED68u;
label_18ed68:
    // 0x18ed68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18ed68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ed6c: 0x3e00008  jr          $ra
    ctx->pc = 0x18ED6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18ED70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ED6Cu;
        // 0x18ed70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18ED6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18ED74u;
}
