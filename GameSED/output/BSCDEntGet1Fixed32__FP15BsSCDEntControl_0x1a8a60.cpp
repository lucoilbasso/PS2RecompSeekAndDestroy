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

// Function: BSCDEntGet1Fixed32__FP15BsSCDEntControl
// Address: 0x1a8a60 - 0x1a8ab0
void BSCDEntGet1Fixed32__FP15BsSCDEntControl_0x1a8a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BSCDEntGet1Fixed32__FP15BsSCDEntControl_0x1a8a60");
#endif

    switch (ctx->pc) {
        case 0x1a8a98u: goto label_1a8a98;
        default: break;
    }

    ctx->pc = 0x1a8a60u;

    // 0x1a8a60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a8a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a8a64: 0x2485001c  addiu       $a1, $a0, 0x1C
    ctx->pc = 0x1a8a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x1a8a68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a8a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a8a6c: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a8a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a8a70: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a8a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a8a74: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a8a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a8a78: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1a8a78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a8a7c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a8a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a8a80: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1a8a80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1a8a84: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x1a8a84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a8a88: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A8A88u;
    {
        const bool branch_taken_0x1a8a88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A88u;
        // 0x1a8a8c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8a88) {
            ctx->pc = 0x1A8AA0u;
            goto label_1a8aa0;
        }
    }
    ctx->pc = 0x1A8A90u;
    // 0x1a8a90: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A8A90u;
    SET_GPR_U32(ctx, 31, 0x1A8A98u);
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A8A90u, 0x1A8A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8A98u;
label_1a8a98:
    // 0x1a8a98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A8A98u;
    {
        const bool branch_taken_0x1a8a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A98u;
        // 0x1a8a9c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8a98) {
            ctx->pc = 0x1A8AA4u;
            goto label_1a8aa4;
        }
    }
    ctx->pc = 0x1A8AA0u;
label_1a8aa0:
    // 0x1a8aa0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1a8aa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a8aa4:
    // 0x1a8aa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a8aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8AA8u;
        // 0x1a8aac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8AB0u;
}
