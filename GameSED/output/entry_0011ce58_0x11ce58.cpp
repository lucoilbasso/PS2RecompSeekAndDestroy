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

// Function: entry_0011ce58
// Address: 0x11ce58 - 0x11ce70
void entry_0011ce58_0x11ce58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ce58_0x11ce58");
#endif

    switch (ctx->pc) {
        case 0x11ce60u: goto label_11ce60;
        default: break;
    }

    ctx->pc = 0x11ce58u;

    // 0x11ce58: 0xc046eee  jal         func_11BBB8
    ctx->pc = 0x11CE58u;
    SET_GPR_U32(ctx, 31, 0x11CE60u);
    ctx->pc = 0x11CE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CE58u;
    // 0x11ce5c: 0x8c440048  lw          $a0, 0x48($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BBB8u, 0x11CE58u, 0x11CE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CE60u;
label_11ce60:
    // 0x11ce60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11ce60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ce64: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11ce64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11ce68: 0x3e00008  jr          $ra
    ctx->pc = 0x11CE68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CE68u;
        // 0x11ce6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CE68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CE70u;
}
