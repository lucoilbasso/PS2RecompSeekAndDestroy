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

// Function: Cmd_MOV_Entry__FP15BsSCDEntControl
// Address: 0x1a9060 - 0x1a911c
void Cmd_MOV_Entry__FP15BsSCDEntControl_0x1a9060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_MOV_Entry__FP15BsSCDEntControl_0x1a9060");
#endif

    switch (ctx->pc) {
        case 0x1a90a0u: goto label_1a90a0;
        case 0x1a90b8u: goto label_1a90b8;
        case 0x1a90e4u: goto label_1a90e4;
        default: break;
    }

    ctx->pc = 0x1a9060u;

    // 0x1a9060: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a9060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a9064: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a9064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a9068: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a9068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a906c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1a906cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9070: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a9070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a9074: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a9074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a9078: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1a9078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1a907c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1a907cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1a9080: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x1a9080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1a9084: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x1a9084u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1a9088: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a9088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a908c: 0x28843  sra         $s1, $v0, 1
    ctx->pc = 0x1a908cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1a9090: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1A9090u;
    {
        const bool branch_taken_0x1a9090 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9090u;
        // 0x1a9094: 0x3c147ffe  lui         $s4, 0x7FFE (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32766 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9090) {
            ctx->pc = 0x1A90FCu;
            goto label_1a90fc;
        }
    }
    ctx->pc = 0x1A9098u;
    // 0x1a9098: 0x2670001c  addiu       $s0, $s3, 0x1C
    ctx->pc = 0x1a9098u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
    // 0x1a909c: 0x3694ffff  ori         $s4, $s4, 0xFFFF
    ctx->pc = 0x1a909cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
label_1a90a0:
    // 0x1a90a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a90a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a90a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a90a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a90a8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a90a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a90ac: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a90acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a90b0: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A90B0u;
    SET_GPR_U32(ctx, 31, 0x1A90B8u);
    ctx->pc = 0x1A90B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A90B0u;
    // 0x1a90b4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A90B0u, 0x1A90B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A90B8u;
label_1a90b8:
    // 0x1a90b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a90b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a90bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a90bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a90c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a90c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a90c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a90c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a90c8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a90c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a90cc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a90ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1a90d0: 0x283102a  slt         $v0, $s4, $v1
    ctx->pc = 0x1a90d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a90d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A90D4u;
    {
        const bool branch_taken_0x1a90d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A90D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A90D4u;
        // 0x1a90d8: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a90d4) {
            ctx->pc = 0x1A90F0u;
            goto label_1a90f0;
        }
    }
    ctx->pc = 0x1A90DCu;
    // 0x1a90dc: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A90DCu;
    SET_GPR_U32(ctx, 31, 0x1A90E4u);
    ctx->pc = 0x1A90E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A90DCu;
    // 0x1a90e0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A90DCu, 0x1A90E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A90E4u;
label_1a90e4:
    // 0x1a90e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A90E4u;
    {
        const bool branch_taken_0x1a90e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A90E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A90E4u;
        // 0x1a90e8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a90e4) {
            ctx->pc = 0x1A90F4u;
            goto label_1a90f4;
        }
    }
    ctx->pc = 0x1A90ECu;
    // 0x1a90ec: 0x0  nop
    ctx->pc = 0x1a90ecu;
    // NOP
label_1a90f0:
    // 0x1a90f0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1a90f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1a90f4:
    // 0x1a90f4: 0x1620ffea  bnez        $s1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1A90F4u;
    {
        const bool branch_taken_0x1a90f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A90F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A90F4u;
        // 0x1a90f8: 0xae450000  sw          $a1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a90f4) {
            ctx->pc = 0x1A90A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a90a0;
        }
    }
    ctx->pc = 0x1A90FCu;
label_1a90fc:
    // 0x1a90fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a90fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9100: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a9100u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a9104: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a9104u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9108: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a9108u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a910c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1a910cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a9110: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1a9110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a9114: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9114u;
        // 0x1a9118: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A911Cu;
}
