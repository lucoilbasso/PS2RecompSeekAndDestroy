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

// Function: entry_00106c50
// Address: 0x106c50 - 0x106c6c
void entry_00106c50_0x106c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106c50_0x106c50");
#endif

    switch (ctx->pc) {
        case 0x106c5cu: goto label_106c5c;
        default: break;
    }

    ctx->pc = 0x106c50u;

    // 0x106c50: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x106c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106c54: 0xc06ab98  jal         func_1AAE60
    ctx->pc = 0x106C54u;
    SET_GPR_U32(ctx, 31, 0x106C5Cu);
    ctx->pc = 0x106C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106C54u;
    // 0x106c58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x106C54u, 0x106C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106C5Cu;
label_106c5c:
    // 0x106c5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x106c5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106c60: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x106c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x106c64: 0x3e00008  jr          $ra
    ctx->pc = 0x106C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106C64u;
        // 0x106c68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106C6Cu;
}
