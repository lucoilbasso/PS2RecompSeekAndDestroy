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

// Function: entry_00160e5c
// Address: 0x160e5c - 0x160e8c
void entry_00160e5c_0x160e5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160e5c_0x160e5c");
#endif

    switch (ctx->pc) {
        case 0x160e64u: goto label_160e64;
        case 0x160e74u: goto label_160e74;
        default: break;
    }

    ctx->pc = 0x160e5cu;

    // 0x160e5c: 0xc056baa  jal         func_15AEA8
    ctx->pc = 0x160E5Cu;
    SET_GPR_U32(ctx, 31, 0x160E64u);
    ctx->pc = 0x160E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160E5Cu;
    // 0x160e60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15AEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AEA8u, 0x160E5Cu, 0x160E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160E64u;
label_160e64:
    // 0x160e64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x160e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160e68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x160e68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160e6c: 0xc056a82  jal         func_15AA08
    ctx->pc = 0x160E6Cu;
    SET_GPR_U32(ctx, 31, 0x160E74u);
    ctx->pc = 0x160E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160E6Cu;
    // 0x160e70: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15AA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AA08u, 0x160E6Cu, 0x160E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160E74u;
label_160e74:
    // 0x160e74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x160e74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160e78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x160e78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x160e7c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x160e7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160e80: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x160e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x160e84: 0x3e00008  jr          $ra
    ctx->pc = 0x160E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160E84u;
        // 0x160e88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160E8Cu;
}
