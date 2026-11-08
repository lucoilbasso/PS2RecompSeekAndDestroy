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

// Function: CommandSystemMute__9ApcSndDrvb
// Address: 0x11dd88 - 0x11dda8
void CommandSystemMute__9ApcSndDrvb_0x11dd88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CommandSystemMute__9ApcSndDrvb_0x11dd88");
#endif

    switch (ctx->pc) {
        case 0x11dd9cu: goto label_11dd9c;
        default: break;
    }

    ctx->pc = 0x11dd88u;

    // 0x11dd88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11dd88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11dd8c: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x11dd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11dd90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11dd90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11dd94: 0xc05ec02  jal         func_17B008
    ctx->pc = 0x11DD94u;
    SET_GPR_U32(ctx, 31, 0x11DD9Cu);
    ctx->pc = 0x11DD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DD94u;
    // 0x11dd98: 0x8c440034  lw          $a0, 0x34($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B008u, 0x11DD94u, 0x11DD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DD9Cu;
label_11dd9c:
    // 0x11dd9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11dd9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11dda0: 0x3e00008  jr          $ra
    ctx->pc = 0x11DDA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DDA0u;
        // 0x11dda4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DDA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DDA8u;
}
