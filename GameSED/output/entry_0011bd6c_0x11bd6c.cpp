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

// Function: entry_0011bd6c
// Address: 0x11bd6c - 0x11bd90
void entry_0011bd6c_0x11bd6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bd6c_0x11bd6c");
#endif

    switch (ctx->pc) {
        case 0x11bd78u: goto label_11bd78;
        default: break;
    }

    ctx->pc = 0x11bd6cu;

    // 0x11bd6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11bd6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bd70: 0xc05e61c  jal         func_179870
    ctx->pc = 0x11BD70u;
    SET_GPR_U32(ctx, 31, 0x11BD78u);
    ctx->pc = 0x11BD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BD70u;
    // 0x11bd74: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179870u, 0x11BD70u, 0x11BD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BD78u;
label_11bd78:
    // 0x11bd78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11bd78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11bd7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11bd7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11bd80: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11bd80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11bd84: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x11bd84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11bd88: 0x3e00008  jr          $ra
    ctx->pc = 0x11BD88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BD88u;
        // 0x11bd8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BD88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11BD90u;
}
