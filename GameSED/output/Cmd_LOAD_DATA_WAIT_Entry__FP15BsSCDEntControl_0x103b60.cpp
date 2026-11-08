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

// Function: Cmd_LOAD_DATA_WAIT_Entry__FP15BsSCDEntControl
// Address: 0x103b60 - 0x103ba8
void Cmd_LOAD_DATA_WAIT_Entry__FP15BsSCDEntControl_0x103b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_LOAD_DATA_WAIT_Entry__FP15BsSCDEntControl_0x103b60");
#endif

    switch (ctx->pc) {
        case 0x103b78u: goto label_103b78;
        case 0x103b90u: goto label_103b90;
        case 0x103b98u: goto label_103b98;
        default: break;
    }

    ctx->pc = 0x103b60u;

    // 0x103b60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x103b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x103b64: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x103b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x103b68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x103b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x103b6c: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x103b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x103b70: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x103B70u;
    SET_GPR_U32(ctx, 31, 0x103B78u);
    ctx->pc = 0x103B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103B70u;
    // 0x103b74: 0x8c500044  lw          $s0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x103B70u, 0x103B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103B78u;
label_103b78:
    // 0x103b78: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x103b78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x103b7c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x103b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x103b80: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x103b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x103b84: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x103b84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x103b88: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x103B88u;
    SET_GPR_U32(ctx, 31, 0x103B90u);
    ctx->pc = 0x103B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103B88u;
    // 0x103b8c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x103B88u, 0x103B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103B90u;
label_103b90:
    // 0x103b90: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x103B90u;
    SET_GPR_U32(ctx, 31, 0x103B98u);
    ctx->pc = 0x103B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103B90u;
    // 0x103b94: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x103B90u, 0x103B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103B98u;
label_103b98:
    // 0x103b98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103b98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103b9c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x103b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x103ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x103BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103BA0u;
        // 0x103ba4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103BA8u;
}
