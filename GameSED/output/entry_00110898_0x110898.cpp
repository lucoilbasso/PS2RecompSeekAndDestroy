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

// Function: entry_00110898
// Address: 0x110898 - 0x1108b0
void entry_00110898_0x110898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110898_0x110898");
#endif

    switch (ctx->pc) {
        case 0x1108a0u: goto label_1108a0;
        default: break;
    }

    ctx->pc = 0x110898u;

    // 0x110898: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x110898u;
    SET_GPR_U32(ctx, 31, 0x1108A0u);
    ctx->pc = 0x11089Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110898u;
    // 0x11089c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x110898u, 0x1108A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1108A0u;
label_1108a0:
    // 0x1108a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1108a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1108a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1108a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1108a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1108A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1108ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1108A8u;
        // 0x1108ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1108A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1108B0u;
}
