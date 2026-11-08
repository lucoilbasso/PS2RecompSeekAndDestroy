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

// Function: entry_0010ffa0
// Address: 0x10ffa0 - 0x10ffbc
void entry_0010ffa0_0x10ffa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ffa0_0x10ffa0");
#endif

    switch (ctx->pc) {
        case 0x10ffa8u: goto label_10ffa8;
        default: break;
    }

    ctx->pc = 0x10ffa0u;

    // 0x10ffa0: 0xc044206  jal         func_110818
    ctx->pc = 0x10FFA0u;
    SET_GPR_U32(ctx, 31, 0x10FFA8u);
    ctx->pc = 0x110818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110818u, 0x10FFA0u, 0x10FFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FFA8u;
label_10ffa8:
    // 0x10ffa8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ffa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ffac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10ffacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10ffb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10ffb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ffb4: 0x3e00008  jr          $ra
    ctx->pc = 0x10FFB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FFB4u;
        // 0x10ffb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FFB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FFBCu;
}
