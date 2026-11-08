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

// Function: entry_0018c670
// Address: 0x18c670 - 0x18c688
void entry_0018c670_0x18c670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c670_0x18c670");
#endif

    switch (ctx->pc) {
        case 0x18c678u: goto label_18c678;
        default: break;
    }

    ctx->pc = 0x18c670u;

    // 0x18c670: 0xc06310a  jal         func_18C428
    ctx->pc = 0x18C670u;
    SET_GPR_U32(ctx, 31, 0x18C678u);
    ctx->pc = 0x18C674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C670u;
    // 0x18c674: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C428u, 0x18C670u, 0x18C678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C678u;
label_18c678:
    // 0x18c678: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18c678u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c67c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x18c67cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18c680: 0x3e00008  jr          $ra
    ctx->pc = 0x18C680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C680u;
        // 0x18c684: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C688u;
}
