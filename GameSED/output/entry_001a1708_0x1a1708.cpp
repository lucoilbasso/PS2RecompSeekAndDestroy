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

// Function: entry_001a1708
// Address: 0x1a1708 - 0x1a1728
void entry_001a1708_0x1a1708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1708_0x1a1708");
#endif

    switch (ctx->pc) {
        case 0x1a1714u: goto label_1a1714;
        default: break;
    }

    ctx->pc = 0x1a1708u;

    // 0x1a1708: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x1a1708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1a170c: 0xc068436  jal         func_1A10D8
    ctx->pc = 0x1A170Cu;
    SET_GPR_U32(ctx, 31, 0x1A1714u);
    ctx->pc = 0x1A1710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A170Cu;
    // 0x1a1710: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A10D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A10D8u, 0x1A170Cu, 0x1A1714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1714u;
label_1a1714:
    // 0x1a1714: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a1714u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1718: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a1718u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a171c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a171cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1720: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1720u;
        // 0x1a1724: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1728u;
}
