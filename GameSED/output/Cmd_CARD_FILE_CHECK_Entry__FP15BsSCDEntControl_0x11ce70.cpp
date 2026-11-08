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

// Function: Cmd_CARD_FILE_CHECK_Entry__FP15BsSCDEntControl
// Address: 0x11ce70 - 0x11cee8
void Cmd_CARD_FILE_CHECK_Entry__FP15BsSCDEntControl_0x11ce70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_CARD_FILE_CHECK_Entry__FP15BsSCDEntControl_0x11ce70");
#endif

    switch (ctx->pc) {
        case 0x11ce84u: goto label_11ce84;
        case 0x11ceb0u: goto label_11ceb0;
        default: break;
    }

    ctx->pc = 0x11ce70u;

    // 0x11ce70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11ce70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11ce74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11ce74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11ce78: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x11ce78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x11ce7c: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11CE7Cu;
    SET_GPR_U32(ctx, 31, 0x11CE84u);
    ctx->pc = 0x11CE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CE7Cu;
    // 0x11ce80: 0x8f908d10  lw          $s0, -0x72F0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11CE7Cu, 0x11CE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CE84u;
label_11ce84:
    // 0x11ce84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11ce84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11ce88: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x11ce88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x11ce8c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x11ce8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x11ce90: 0x2463fcb0  addiu       $v1, $v1, -0x350
    ctx->pc = 0x11ce90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966448));
    // 0x11ce94: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x11ce94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x11ce98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11ce98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ce9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11ce9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cea0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x11cea0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11cea4: 0x24844604  addiu       $a0, $a0, 0x4604
    ctx->pc = 0x11cea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17924));
    // 0x11cea8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x11cea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11ceac: 0x0  nop
    ctx->pc = 0x11ceacu;
    // NOP
label_11ceb0:
    // 0x11ceb0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x11ceb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x11ceb4: 0xe23004  sllv        $a2, $v0, $a3
    ctx->pc = 0x11ceb4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x11ceb8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x11ceb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x11cebc: 0x14490002  bne         $v0, $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x11CEBCu;
    {
        const bool branch_taken_0x11cebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x11CEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CEBCu;
        // 0x11cec0: 0x28e50003  slti        $a1, $a3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cebc) {
            ctx->pc = 0x11CEC8u;
            goto label_11cec8;
        }
    }
    ctx->pc = 0x11CEC4u;
    // 0x11cec4: 0x1064025  or          $t0, $t0, $a2
    ctx->pc = 0x11cec4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
label_11cec8:
    // 0x11cec8: 0x0  nop
    ctx->pc = 0x11cec8u;
    // NOP
    // 0x11cecc: 0x54a0fff8  bnel        $a1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11CECCu;
    {
        const bool branch_taken_0x11cecc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x11cecc) {
            ctx->pc = 0x11CED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11CECCu;
            // 0x11ced0: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11CEB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11ceb0;
        }
    }
    ctx->pc = 0x11CED4u;
    // 0x11ced4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11ced4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ced8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11ced8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11cedc: 0xac680400  sw          $t0, 0x400($v1)
    ctx->pc = 0x11cedcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1024), GPR_U32(ctx, 8));
    // 0x11cee0: 0x3e00008  jr          $ra
    ctx->pc = 0x11CEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CEE0u;
        // 0x11cee4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CEE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CEE8u;
}
