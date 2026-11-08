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

// Function: CommandSpu2DataTran__9ApcSndDrvUiPvT2Ui
// Address: 0x11dd60 - 0x11dd88
void CommandSpu2DataTran__9ApcSndDrvUiPvT2Ui_0x11dd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CommandSpu2DataTran__9ApcSndDrvUiPvT2Ui_0x11dd60");
#endif

    switch (ctx->pc) {
        case 0x11dd7cu: goto label_11dd7c;
        default: break;
    }

    ctx->pc = 0x11dd60u;

    // 0x11dd60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11dd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11dd64: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x11dd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11dd68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11dd68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11dd6c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x11dd6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dd70: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x11dd70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dd74: 0xc05ebce  jal         func_17AF38
    ctx->pc = 0x11DD74u;
    SET_GPR_U32(ctx, 31, 0x11DD7Cu);
    ctx->pc = 0x11DD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DD74u;
    // 0x11dd78: 0x8c440034  lw          $a0, 0x34($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AF38u, 0x11DD74u, 0x11DD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DD7Cu;
label_11dd7c:
    // 0x11dd7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11dd7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11dd80: 0x3e00008  jr          $ra
    ctx->pc = 0x11DD80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DD80u;
        // 0x11dd84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DD80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DD88u;
}
