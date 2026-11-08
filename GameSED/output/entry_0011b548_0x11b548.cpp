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

// Function: entry_0011b548
// Address: 0x11b548 - 0x11b568
void entry_0011b548_0x11b548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b548_0x11b548");
#endif

    switch (ctx->pc) {
        case 0x11b554u: goto label_11b554;
        default: break;
    }

    ctx->pc = 0x11b548u;

    // 0x11b548: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11b548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b54c: 0xc06866c  jal         func_1A19B0
    ctx->pc = 0x11B54Cu;
    SET_GPR_U32(ctx, 31, 0x11B554u);
    ctx->pc = 0x11B550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B54Cu;
    // 0x11b550: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A19B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A19B0u, 0x11B54Cu, 0x11B554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B554u;
label_11b554:
    // 0x11b554: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11b554u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b558: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11b558u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11b55c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11b55cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b560: 0x3e00008  jr          $ra
    ctx->pc = 0x11B560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B560u;
        // 0x11b564: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B568u;
}
