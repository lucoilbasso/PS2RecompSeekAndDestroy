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

// Function: entry_0012c15c
// Address: 0x12c15c - 0x12c170
void entry_0012c15c_0x12c15c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c15c_0x12c15c");
#endif

    switch (ctx->pc) {
        case 0x12c164u: goto label_12c164;
        default: break;
    }

    ctx->pc = 0x12c15cu;

    // 0x12c15c: 0xc047a1a  jal         func_11E868
    ctx->pc = 0x12C15Cu;
    SET_GPR_U32(ctx, 31, 0x12C164u);
    ctx->pc = 0x12C160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C15Cu;
    // 0x12c160: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E868u, 0x12C15Cu, 0x12C164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C164u;
label_12c164:
    // 0x12c164: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12c164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c168: 0x3e00008  jr          $ra
    ctx->pc = 0x12C168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C168u;
        // 0x12c16c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C170u;
}
