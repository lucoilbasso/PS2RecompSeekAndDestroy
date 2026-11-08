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

// Function: entry_0011e014
// Address: 0x11e014 - 0x11e028
void entry_0011e014_0x11e014(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e014_0x11e014");
#endif

    switch (ctx->pc) {
        case 0x11e01cu: goto label_11e01c;
        default: break;
    }

    ctx->pc = 0x11e014u;

    // 0x11e014: 0xc05ee80  jal         func_17BA00
    ctx->pc = 0x11E014u;
    SET_GPR_U32(ctx, 31, 0x11E01Cu);
    ctx->pc = 0x11E018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E014u;
    // 0x11e018: 0x8c44003c  lw          $a0, 0x3C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BA00u, 0x11E014u, 0x11E01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E01Cu;
label_11e01c:
    // 0x11e01c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11e01cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11e020: 0x3e00008  jr          $ra
    ctx->pc = 0x11E020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E020u;
        // 0x11e024: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E028u;
}
