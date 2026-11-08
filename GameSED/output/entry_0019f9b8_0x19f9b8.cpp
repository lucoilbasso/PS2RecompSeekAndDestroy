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

// Function: entry_0019f9b8
// Address: 0x19f9b8 - 0x19f9d0
void entry_0019f9b8_0x19f9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f9b8_0x19f9b8");
#endif

    switch (ctx->pc) {
        case 0x19f9c0u: goto label_19f9c0;
        default: break;
    }

    ctx->pc = 0x19f9b8u;

    // 0x19f9b8: 0xc0683b2  jal         func_1A0EC8
    ctx->pc = 0x19F9B8u;
    SET_GPR_U32(ctx, 31, 0x19F9C0u);
    ctx->pc = 0x1A0EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0EC8u, 0x19F9B8u, 0x19F9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F9C0u;
label_19f9c0:
    // 0x19f9c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19f9c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f9c4: 0xaf829160  sw          $v0, -0x6EA0($gp)
    ctx->pc = 0x19f9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938976), GPR_U32(ctx, 2));
    // 0x19f9c8: 0x3e00008  jr          $ra
    ctx->pc = 0x19F9C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F9C8u;
        // 0x19f9cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F9C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F9D0u;
}
