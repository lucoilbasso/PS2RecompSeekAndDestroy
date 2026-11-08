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

// Function: entry_0016c840
// Address: 0x16c840 - 0x16c858
void entry_0016c840_0x16c840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c840_0x16c840");
#endif

    switch (ctx->pc) {
        case 0x16c848u: goto label_16c848;
        default: break;
    }

    ctx->pc = 0x16c840u;

    // 0x16c840: 0xc05b216  jal         func_16C858
    ctx->pc = 0x16C840u;
    SET_GPR_U32(ctx, 31, 0x16C848u);
    ctx->pc = 0x16C844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C840u;
    // 0x16c844: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C858u, 0x16C840u, 0x16C848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C848u;
label_16c848:
    // 0x16c848: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16c848u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c84c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16c84cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16c850: 0x3e00008  jr          $ra
    ctx->pc = 0x16C850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C850u;
        // 0x16c854: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C858u;
}
