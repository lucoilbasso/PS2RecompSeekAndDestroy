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

// Function: Cmd_LOAD_MODEL_WAIT_Entry__FP15BsSCDEntControl
// Address: 0x1042b8 - 0x104300
void Cmd_LOAD_MODEL_WAIT_Entry__FP15BsSCDEntControl_0x1042b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_LOAD_MODEL_WAIT_Entry__FP15BsSCDEntControl_0x1042b8");
#endif

    switch (ctx->pc) {
        case 0x1042d0u: goto label_1042d0;
        case 0x1042e8u: goto label_1042e8;
        case 0x1042f0u: goto label_1042f0;
        default: break;
    }

    ctx->pc = 0x1042b8u;

    // 0x1042b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1042b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1042bc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1042bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1042c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1042c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1042c4: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x1042c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1042c8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1042C8u;
    SET_GPR_U32(ctx, 31, 0x1042D0u);
    ctx->pc = 0x1042CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1042C8u;
    // 0x1042cc: 0x8c500044  lw          $s0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1042C8u, 0x1042D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1042D0u;
label_1042d0:
    // 0x1042d0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1042d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1042d4: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1042d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1042d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1042d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1042dc: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1042dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1042e0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1042E0u;
    SET_GPR_U32(ctx, 31, 0x1042E8u);
    ctx->pc = 0x1042E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1042E0u;
    // 0x1042e4: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1042E0u, 0x1042E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1042E8u;
label_1042e8:
    // 0x1042e8: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1042E8u;
    SET_GPR_U32(ctx, 31, 0x1042F0u);
    ctx->pc = 0x1042ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1042E8u;
    // 0x1042ec: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1042E8u, 0x1042F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1042F0u;
label_1042f0:
    // 0x1042f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1042f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1042f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1042f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1042f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1042F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1042FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1042F8u;
        // 0x1042fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1042F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104300u;
}
