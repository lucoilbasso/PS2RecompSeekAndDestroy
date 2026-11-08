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

// Function: Cmd_CARD_INFO_LOAD_Entry__FP15BsSCDEntControl
// Address: 0x11ce38 - 0x11ce70
void Cmd_CARD_INFO_LOAD_Entry__FP15BsSCDEntControl_0x11ce38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_CARD_INFO_LOAD_Entry__FP15BsSCDEntControl_0x11ce38");
#endif

    switch (ctx->pc) {
        case 0x11ce4cu: goto label_11ce4c;
        case 0x11ce60u: goto label_11ce60;
        default: break;
    }

    ctx->pc = 0x11ce38u;

    // 0x11ce38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11ce38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11ce3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11ce3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11ce40: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x11ce40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x11ce44: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11CE44u;
    SET_GPR_U32(ctx, 31, 0x11CE4Cu);
    ctx->pc = 0x11CE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CE44u;
    // 0x11ce48: 0x8f908d10  lw          $s0, -0x72F0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11CE44u, 0x11CE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CE4Cu;
label_11ce4c:
    // 0x11ce4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11ce4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11ce50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11ce50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ce54: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x11ce54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
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
