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

// Function: Cmd_CARD_SAVE_Entry__FP15BsSCDEntControl
// Address: 0x11cee8 - 0x11cf1c
void Cmd_CARD_SAVE_Entry__FP15BsSCDEntControl_0x11cee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_CARD_SAVE_Entry__FP15BsSCDEntControl_0x11cee8");
#endif

    switch (ctx->pc) {
        case 0x11cf00u: goto label_11cf00;
        case 0x11cf0cu: goto label_11cf0c;
        default: break;
    }

    ctx->pc = 0x11cee8u;

    // 0x11cee8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11cee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11ceec: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x11ceecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11cef0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x11cef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x11cef4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11cef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11cef8: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11CEF8u;
    SET_GPR_U32(ctx, 31, 0x11CF00u);
    ctx->pc = 0x11CEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CEF8u;
    // 0x11cefc: 0x8c500048  lw          $s0, 0x48($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11CEF8u, 0x11CF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CF00u;
label_11cf00:
    // 0x11cf00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11cf00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cf04: 0xc046f16  jal         func_11BC58
    ctx->pc = 0x11CF04u;
    SET_GPR_U32(ctx, 31, 0x11CF0Cu);
    ctx->pc = 0x11CF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CF04u;
    // 0x11cf08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BC58u, 0x11CF04u, 0x11CF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CF0Cu;
label_11cf0c:
    // 0x11cf0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11cf0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11cf10: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11cf10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11cf14: 0x3e00008  jr          $ra
    ctx->pc = 0x11CF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CF14u;
        // 0x11cf18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CF14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CF1Cu;
}
