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

// Function: entry_0011b378
// Address: 0x11b378 - 0x11b390
void entry_0011b378_0x11b378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b378_0x11b378");
#endif

    switch (ctx->pc) {
        case 0x11b380u: goto label_11b380;
        default: break;
    }

    ctx->pc = 0x11b378u;

    // 0x11b378: 0xc066580  jal         func_199600
    ctx->pc = 0x11B378u;
    SET_GPR_U32(ctx, 31, 0x11B380u);
    ctx->pc = 0x11B37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B378u;
    // 0x11b37c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199600u, 0x11B378u, 0x11B380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B380u;
label_11b380:
    // 0x11b380: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11b380u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b384: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11b384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11b388: 0x3e00008  jr          $ra
    ctx->pc = 0x11B388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B388u;
        // 0x11b38c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B390u;
}
