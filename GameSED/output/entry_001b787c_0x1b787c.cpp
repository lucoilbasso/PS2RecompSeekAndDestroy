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

// Function: entry_001b787c
// Address: 0x1b787c - 0x1b7890
void entry_001b787c_0x1b787c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b787c_0x1b787c");
#endif

    switch (ctx->pc) {
        case 0x1b7884u: goto label_1b7884;
        default: break;
    }

    ctx->pc = 0x1b787cu;

    // 0x1b787c: 0xc06be24  jal         func_1AF890
    ctx->pc = 0x1B787Cu;
    SET_GPR_U32(ctx, 31, 0x1B7884u);
    ctx->pc = 0x1B7880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B787Cu;
    // 0x1b7880: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF890u, 0x1B787Cu, 0x1B7884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7884u;
label_1b7884:
    // 0x1b7884: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b7884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7888: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B788Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7888u;
        // 0x1b788c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7890u;
}
