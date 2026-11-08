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

// Function: BSCDEntGet1LabelEntry__FP15BsSCDEntControl
// Address: 0x1a8b00 - 0x1a8b50
void BSCDEntGet1LabelEntry__FP15BsSCDEntControl_0x1a8b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BSCDEntGet1LabelEntry__FP15BsSCDEntControl_0x1a8b00");
#endif

    switch (ctx->pc) {
        case 0x1a8b38u: goto label_1a8b38;
        default: break;
    }

    ctx->pc = 0x1a8b00u;

    // 0x1a8b00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a8b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a8b04: 0x2485001c  addiu       $a1, $a0, 0x1C
    ctx->pc = 0x1a8b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x1a8b08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a8b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a8b0c: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a8b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a8b10: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a8b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a8b14: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a8b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a8b18: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1a8b18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a8b1c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a8b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a8b20: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1a8b20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1a8b24: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x1a8b24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a8b28: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A8B28u;
    {
        const bool branch_taken_0x1a8b28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8B28u;
        // 0x1a8b2c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8b28) {
            ctx->pc = 0x1A8B40u;
            goto label_1a8b40;
        }
    }
    ctx->pc = 0x1A8B30u;
    // 0x1a8b30: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A8B30u;
    SET_GPR_U32(ctx, 31, 0x1A8B38u);
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A8B30u, 0x1A8B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8B38u;
label_1a8b38:
    // 0x1a8b38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A8B38u;
    {
        const bool branch_taken_0x1a8b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8B38u;
        // 0x1a8b3c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8b38) {
            ctx->pc = 0x1A8B44u;
            goto label_1a8b44;
        }
    }
    ctx->pc = 0x1A8B40u;
label_1a8b40:
    // 0x1a8b40: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1a8b40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a8b44:
    // 0x1a8b44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a8b44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8b48: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8B48u;
        // 0x1a8b4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8B50u;
}
