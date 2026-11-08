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

// Function: entry_001b1d58
// Address: 0x1b1d58 - 0x1b1d78
void entry_001b1d58_0x1b1d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1d58_0x1b1d58");
#endif

    switch (ctx->pc) {
        case 0x1b1d60u: goto label_1b1d60;
        default: break;
    }

    ctx->pc = 0x1b1d58u;

    // 0x1b1d58: 0xc06dafa  jal         func_1B6BE8
    ctx->pc = 0x1B1D58u;
    SET_GPR_U32(ctx, 31, 0x1B1D60u);
    ctx->pc = 0x1B6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BE8u, 0x1B1D58u, 0x1B1D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1D60u;
label_1b1d60:
    // 0x1b1d60: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1b1d60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1d64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b1d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1d68: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1b1d68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1d6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b1d6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1d70: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1D70u;
        // 0x1b1d74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1D78u;
}
