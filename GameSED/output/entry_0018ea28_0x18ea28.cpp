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

// Function: entry_0018ea28
// Address: 0x18ea28 - 0x18ea3c
void entry_0018ea28_0x18ea28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ea28_0x18ea28");
#endif

    switch (ctx->pc) {
        case 0x18ea30u: goto label_18ea30;
        default: break;
    }

    ctx->pc = 0x18ea28u;

    // 0x18ea28: 0xc06338e  jal         func_18CE38
    ctx->pc = 0x18EA28u;
    SET_GPR_U32(ctx, 31, 0x18EA30u);
    ctx->pc = 0x18CE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CE38u, 0x18EA28u, 0x18EA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EA30u;
label_18ea30:
    // 0x18ea30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18ea30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ea34: 0x3e00008  jr          $ra
    ctx->pc = 0x18EA34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18EA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EA34u;
        // 0x18ea38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EA34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18EA3Cu;
}
