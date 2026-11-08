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

// Function: _sceFsWaitS
// Address: 0x1b24b0 - 0x1b24dc
void _sceFsWaitS_0x1b24b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceFsWaitS_0x1b24b0");
#endif

    switch (ctx->pc) {
        case 0x1b24c0u: goto label_1b24c0;
        case 0x1b24ccu: goto label_1b24cc;
        default: break;
    }

    ctx->pc = 0x1b24b0u;

    // 0x1b24b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b24b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b24b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b24b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b24b8: 0xc06c918  jal         func_1B2460
    ctx->pc = 0x1B24B8u;
    SET_GPR_U32(ctx, 31, 0x1B24C0u);
    ctx->pc = 0x1B2460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2460u, 0x1B24B8u, 0x1B24C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B24C0u;
label_1b24c0:
    // 0x1b24c0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1b24c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1b24c4: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1B24C4u;
    SET_GPR_U32(ctx, 31, 0x1B24CCu);
    ctx->pc = 0x1B24C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B24C4u;
    // 0x1b24c8: 0x8c44aa0c  lw          $a0, -0x55F4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B24C4u, 0x1B24CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B24CCu;
label_1b24cc:
    // 0x1b24cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b24ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b24d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b24d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b24d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B24D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B24D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B24D4u;
        // 0x1b24d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B24D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B24DCu;
}
