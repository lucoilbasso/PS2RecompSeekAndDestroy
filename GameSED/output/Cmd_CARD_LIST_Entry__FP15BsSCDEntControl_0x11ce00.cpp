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

// Function: Cmd_CARD_LIST_Entry__FP15BsSCDEntControl
// Address: 0x11ce00 - 0x11ce34
void Cmd_CARD_LIST_Entry__FP15BsSCDEntControl_0x11ce00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_CARD_LIST_Entry__FP15BsSCDEntControl_0x11ce00");
#endif

    switch (ctx->pc) {
        case 0x11ce14u: goto label_11ce14;
        case 0x11ce24u: goto label_11ce24;
        default: break;
    }

    ctx->pc = 0x11ce00u;

    // 0x11ce00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11ce00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11ce04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11ce04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11ce08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x11ce08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x11ce0c: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11CE0Cu;
    SET_GPR_U32(ctx, 31, 0x11CE14u);
    ctx->pc = 0x11CE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CE0Cu;
    // 0x11ce10: 0x8f908d10  lw          $s0, -0x72F0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11CE0Cu, 0x11CE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CE14u;
label_11ce14:
    // 0x11ce14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11ce14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11ce18: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x11ce18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x11ce1c: 0xc05e5d8  jal         func_179760
    ctx->pc = 0x11CE1Cu;
    SET_GPR_U32(ctx, 31, 0x11CE24u);
    ctx->pc = 0x11CE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CE1Cu;
    // 0x11ce20: 0x8c440048  lw          $a0, 0x48($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179760u, 0x11CE1Cu, 0x11CE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CE24u;
label_11ce24:
    // 0x11ce24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11ce24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ce28: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11ce28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11ce2c: 0x3e00008  jr          $ra
    ctx->pc = 0x11CE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CE2Cu;
        // 0x11ce30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CE34u;
}
