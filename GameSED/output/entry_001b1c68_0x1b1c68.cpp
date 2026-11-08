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

// Function: entry_001b1c68
// Address: 0x1b1c68 - 0x1b1c8c
void entry_001b1c68_0x1b1c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1c68_0x1b1c68");
#endif

    switch (ctx->pc) {
        case 0x1b1c70u: goto label_1b1c70;
        default: break;
    }

    ctx->pc = 0x1b1c68u;

    // 0x1b1c68: 0xc06dafa  jal         func_1B6BE8
    ctx->pc = 0x1B1C68u;
    SET_GPR_U32(ctx, 31, 0x1B1C70u);
    ctx->pc = 0x1B6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BE8u, 0x1B1C68u, 0x1B1C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1C70u;
label_1b1c70:
    // 0x1b1c70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b1c70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1c74: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b1c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b1c78: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b1c78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1c7c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1b1c7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1c80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b1c80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1c84: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C84u;
        // 0x1b1c88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1C84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1C8Cu;
}
