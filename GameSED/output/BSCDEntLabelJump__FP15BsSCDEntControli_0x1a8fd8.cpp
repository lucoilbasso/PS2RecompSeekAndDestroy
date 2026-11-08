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

// Function: BSCDEntLabelJump__FP15BsSCDEntControli
// Address: 0x1a8fd8 - 0x1a9060
void BSCDEntLabelJump__FP15BsSCDEntControli_0x1a8fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BSCDEntLabelJump__FP15BsSCDEntControli_0x1a8fd8");
#endif

    switch (ctx->pc) {
        case 0x1a9034u: goto label_1a9034;
        default: break;
    }

    ctx->pc = 0x1a8fd8u;

    // 0x1a8fd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a8fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a8fdc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a8fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a8fe0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a8fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a8fe4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a8fe4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8fe8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a8fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a8fec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a8fecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8ff0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a8ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a8ff4: 0x16420006  bne         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A8FF4u;
    {
        const bool branch_taken_0x1a8ff4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A8FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8FF4u;
        // 0x1a8ff8: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8ff4) {
            ctx->pc = 0x1A9010u;
            goto label_1a9010;
        }
    }
    ctx->pc = 0x1A8FFCu;
    // 0x1a8ffc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1a8ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1a9000: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a9000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1a9004: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1A9004u;
    {
        const bool branch_taken_0x1a9004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9004u;
        // 0x1a9008: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9004) {
            ctx->pc = 0x1A9048u;
            goto label_1a9048;
        }
    }
    ctx->pc = 0x1A900Cu;
    // 0x1a900c: 0x0  nop
    ctx->pc = 0x1a900cu;
    // NOP
label_1a9010:
    // 0x1a9010: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x1a9010u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a9014: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1a9014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a9018: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1a9018u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a901c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A901Cu;
    {
        const bool branch_taken_0x1a901c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A901Cu;
        // 0x1a9020: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a901c) {
            ctx->pc = 0x1A9034u;
            goto label_1a9034;
        }
    }
    ctx->pc = 0x1A9024u;
    // 0x1a9024: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a9024u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a9028: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x1a9028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1a902c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A902Cu;
    SET_GPR_U32(ctx, 31, 0x1A9034u);
    ctx->pc = 0x1A9030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A902Cu;
    // 0x1a9030: 0x24a593c8  addiu       $a1, $a1, -0x6C38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A902Cu, 0x1A9034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9034u;
label_1a9034:
    // 0x1a9034: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1a9034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1a9038: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1a9038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1a903c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x1a903cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1a9040: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1a9040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1a9044: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1a9044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_1a9048:
    // 0x1a9048: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a9048u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a904c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a904cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a9050: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a9050u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9054: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a9054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a9058: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A905Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9058u;
        // 0x1a905c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9060u;
}
