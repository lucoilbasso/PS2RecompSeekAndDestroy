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

// Function: entry_001784c8
// Address: 0x1784c8 - 0x1784dc
void entry_001784c8_0x1784c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001784c8_0x1784c8");
#endif

    switch (ctx->pc) {
        case 0x1784d0u: goto label_1784d0;
        default: break;
    }

    ctx->pc = 0x1784c8u;

    // 0x1784c8: 0xc05e138  jal         func_1784E0
    ctx->pc = 0x1784C8u;
    SET_GPR_U32(ctx, 31, 0x1784D0u);
    ctx->pc = 0x1784CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1784C8u;
    // 0x1784cc: 0xac401044  sw          $zero, 0x1044($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4164), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1784E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1784E0u, 0x1784C8u, 0x1784D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1784D0u;
label_1784d0:
    // 0x1784d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1784d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1784d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1784D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1784D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1784D4u;
        // 0x1784d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1784D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1784DCu;
}
