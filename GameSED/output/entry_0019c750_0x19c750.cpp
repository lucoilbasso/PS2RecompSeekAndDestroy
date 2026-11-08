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

// Function: entry_0019c750
// Address: 0x19c750 - 0x19c764
void entry_0019c750_0x19c750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c750_0x19c750");
#endif

    switch (ctx->pc) {
        case 0x19c758u: goto label_19c758;
        default: break;
    }

    ctx->pc = 0x19c750u;

    // 0x19c750: 0xc0673b2  jal         func_19CEC8
    ctx->pc = 0x19C750u;
    SET_GPR_U32(ctx, 31, 0x19C758u);
    ctx->pc = 0x19CEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CEC8u, 0x19C750u, 0x19C758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C758u;
label_19c758:
    // 0x19c758: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c75c: 0x3e00008  jr          $ra
    ctx->pc = 0x19C75Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C75Cu;
        // 0x19c760: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C75Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C764u;
}
