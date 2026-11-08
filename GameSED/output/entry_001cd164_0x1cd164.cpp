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

// Function: entry_001cd164
// Address: 0x1cd164 - 0x1cd188
void entry_001cd164_0x1cd164(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd164_0x1cd164");
#endif

    switch (ctx->pc) {
        case 0x1cd174u: goto label_1cd174;
        default: break;
    }

    ctx->pc = 0x1cd164u;

    // 0x1cd164: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cd164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd168: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cd168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd16c: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1CD16Cu;
    SET_GPR_U32(ctx, 31, 0x1CD174u);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1CD16Cu, 0x1CD174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD174u;
label_1cd174:
    // 0x1cd174: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cd174u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd178: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cd178u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cd17c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cd17cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd180: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD180u;
        // 0x1cd184: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD188u;
}
