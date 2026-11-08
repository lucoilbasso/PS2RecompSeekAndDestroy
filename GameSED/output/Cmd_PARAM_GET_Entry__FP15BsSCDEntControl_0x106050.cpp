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

// Function: Cmd_PARAM_GET_Entry__FP15BsSCDEntControl
// Address: 0x106050 - 0x1060bc
void Cmd_PARAM_GET_Entry__FP15BsSCDEntControl_0x106050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_PARAM_GET_Entry__FP15BsSCDEntControl_0x106050");
#endif

    switch (ctx->pc) {
        case 0x106064u: goto label_106064;
        default: break;
    }

    ctx->pc = 0x106050u;

    // 0x106050: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x106050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x106054: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x106054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x106058: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x106058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x10605c: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x10605Cu;
    SET_GPR_U32(ctx, 31, 0x106064u);
    ctx->pc = 0x106060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10605Cu;
    // 0x106060: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x10605Cu, 0x106064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106064u;
label_106064:
    // 0x106064: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x106064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106068: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x106068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x10606c: 0x2786889c  addiu       $a2, $gp, -0x7764
    ctx->pc = 0x10606cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936732));
    // 0x106070: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x106070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x106074: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x106074u;
    {
        const bool branch_taken_0x106074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106074) {
            ctx->pc = 0x106078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106074u;
            // 0x106078: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106090u;
            goto label_106090;
        }
    }
    ctx->pc = 0x10607Cu;
    // 0x10607c: 0x8f828898  lw          $v0, -0x7768($gp)
    ctx->pc = 0x10607cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936728)));
    // 0x106080: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x106080u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x106084: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x106084u;
    {
        const bool branch_taken_0x106084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106084u;
        // 0x106088: 0xaf808898  sw          $zero, -0x7768($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936728), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106084) {
            ctx->pc = 0x1060ACu;
            goto label_1060ac;
        }
    }
    ctx->pc = 0x10608Cu;
    // 0x10608c: 0x0  nop
    ctx->pc = 0x10608cu;
    // NOP
label_106090:
    // 0x106090: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x106090u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x106094: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x106094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x106098: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x106098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x10609c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10609cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1060a0: 0x8c63ec00  lw          $v1, -0x1400($v1)
    ctx->pc = 0x1060a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962176)));
    // 0x1060a4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1060a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1060a8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1060a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_1060ac:
    // 0x1060ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1060acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1060b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1060b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1060b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1060B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1060B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1060B4u;
        // 0x1060b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1060B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1060BCu;
}
