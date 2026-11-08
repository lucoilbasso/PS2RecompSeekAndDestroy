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

// Function: CommandList__8ApcMCard
// Address: 0x11c9b0 - 0x11c9cc
void CommandList__8ApcMCard_0x11c9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CommandList__8ApcMCard_0x11c9b0");
#endif

    switch (ctx->pc) {
        case 0x11c9c0u: goto label_11c9c0;
        default: break;
    }

    ctx->pc = 0x11c9b0u;

    // 0x11c9b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11c9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11c9b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11c9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11c9b8: 0xc05e5d8  jal         func_179760
    ctx->pc = 0x11C9B8u;
    SET_GPR_U32(ctx, 31, 0x11C9C0u);
    ctx->pc = 0x179760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179760u, 0x11C9B8u, 0x11C9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C9C0u;
label_11c9c0:
    // 0x11c9c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11c9c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c9c4: 0x3e00008  jr          $ra
    ctx->pc = 0x11C9C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C9C4u;
        // 0x11c9c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C9C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C9CCu;
}
