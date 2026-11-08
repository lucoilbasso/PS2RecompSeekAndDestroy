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

// Function: entry_001a9810
// Address: 0x1a9810 - 0x1a9824
void entry_001a9810_0x1a9810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9810_0x1a9810");
#endif

    switch (ctx->pc) {
        case 0x1a9818u: goto label_1a9818;
        default: break;
    }

    ctx->pc = 0x1a9810u;

    // 0x1a9810: 0xc069626  jal         func_1A5898
    ctx->pc = 0x1A9810u;
    SET_GPR_U32(ctx, 31, 0x1A9818u);
    ctx->pc = 0x1A9814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9810u;
    // 0x1a9814: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5898u, 0x1A9810u, 0x1A9818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9818u;
label_1a9818:
    // 0x1a9818: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a9818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a981c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A981Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A981Cu;
        // 0x1a9820: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A981Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9824u;
}
