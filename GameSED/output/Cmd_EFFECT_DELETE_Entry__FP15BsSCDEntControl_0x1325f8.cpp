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

// Function: Cmd_EFFECT_DELETE_Entry__FP15BsSCDEntControl
// Address: 0x1325f8 - 0x13262c
void Cmd_EFFECT_DELETE_Entry__FP15BsSCDEntControl_0x1325f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_EFFECT_DELETE_Entry__FP15BsSCDEntControl_0x1325f8");
#endif

    switch (ctx->pc) {
        case 0x132614u: goto label_132614;
        case 0x132620u: goto label_132620;
        default: break;
    }

    ctx->pc = 0x1325f8u;

    // 0x1325f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1325f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1325fc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1325fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132600: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x132600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x132604: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x132604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132608: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x132608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x13260c: 0xc04110c  jal         func_104430
    ctx->pc = 0x13260Cu;
    SET_GPR_U32(ctx, 31, 0x132614u);
    ctx->pc = 0x132610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13260Cu;
    // 0x132610: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x13260Cu, 0x132614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132614u;
label_132614:
    // 0x132614: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x132614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x132618: 0xc04ca34  jal         func_1328D0
    ctx->pc = 0x132618u;
    SET_GPR_U32(ctx, 31, 0x132620u);
    ctx->pc = 0x13261Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132618u;
    // 0x13261c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328D0u, 0x132618u, 0x132620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132620u;
label_132620:
    // 0x132620: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x132620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132624: 0x3e00008  jr          $ra
    ctx->pc = 0x132624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132624u;
        // 0x132628: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13262Cu;
}
