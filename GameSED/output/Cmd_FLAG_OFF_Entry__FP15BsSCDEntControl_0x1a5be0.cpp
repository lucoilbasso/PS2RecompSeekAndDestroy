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

// Function: Cmd_FLAG_OFF_Entry__FP15BsSCDEntControl
// Address: 0x1a5be0 - 0x1a5d08
void Cmd_FLAG_OFF_Entry__FP15BsSCDEntControl_0x1a5be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_FLAG_OFF_Entry__FP15BsSCDEntControl_0x1a5be0");
#endif

    switch (ctx->pc) {
        case 0x1a5c30u: goto label_1a5c30;
        case 0x1a5c50u: goto label_1a5c50;
        case 0x1a5cd4u: goto label_1a5cd4;
        default: break;
    }

    ctx->pc = 0x1a5be0u;

    // 0x1a5be0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a5be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a5be4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a5be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a5be8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a5be8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5bec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a5becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a5bf0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a5bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a5bf4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a5bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a5bf8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1a5bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1a5bfc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1a5bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1a5c00: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1a5c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1a5c04: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1a5c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1a5c08: 0x8e500010  lw          $s0, 0x10($s2)
    ctx->pc = 0x1a5c08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1a5c0c: 0x12000034  beqz        $s0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1A5C0Cu;
    {
        const bool branch_taken_0x1a5c0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C0Cu;
        // 0x1a5c10: 0x3c147ffe  lui         $s4, 0x7FFE (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32766 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5c0c) {
            ctx->pc = 0x1A5CE0u;
            goto label_1a5ce0;
        }
    }
    ctx->pc = 0x1A5C14u;
    // 0x1a5c14: 0x2651001c  addiu       $s1, $s2, 0x1C
    ctx->pc = 0x1a5c14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x1a5c18: 0x3694ffff  ori         $s4, $s4, 0xFFFF
    ctx->pc = 0x1a5c18u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
    // 0x1a5c1c: 0x3c160024  lui         $s6, 0x24
    ctx->pc = 0x1a5c1cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)36 << 16));
    // 0x1a5c20: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1a5c20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5c24: 0x3c150026  lui         $s5, 0x26
    ctx->pc = 0x1a5c24u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)38 << 16));
    // 0x1a5c28: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a5c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a5c2c: 0x0  nop
    ctx->pc = 0x1a5c2cu;
    // NOP
label_1a5c30:
    // 0x1a5c30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a5c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a5c34: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a5c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a5c38: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1a5c38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1a5c3c: 0x283102a  slt         $v0, $s4, $v1
    ctx->pc = 0x1a5c3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a5c40: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5C40u;
    {
        const bool branch_taken_0x1a5c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C40u;
        // 0x1a5c44: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5c40) {
            ctx->pc = 0x1A5C54u;
            goto label_1a5c54;
        }
    }
    ctx->pc = 0x1A5C48u;
    // 0x1a5c48: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A5C48u;
    SET_GPR_U32(ctx, 31, 0x1A5C50u);
    ctx->pc = 0x1A5C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5C48u;
    // 0x1a5c4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A5C48u, 0x1A5C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5C50u;
label_1a5c50:
    // 0x1a5c50: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a5c50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a5c54:
    // 0x1a5c54: 0x28a20c00  slti        $v0, $a1, 0xC00
    ctx->pc = 0x1a5c54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3072) ? 1 : 0);
    // 0x1a5c58: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A5C58u;
    {
        const bool branch_taken_0x1a5c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C58u;
        // 0x1a5c5c: 0x28a20c40  slti        $v0, $a1, 0xC40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3136) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5c58) {
            ctx->pc = 0x1A5C90u;
            goto label_1a5c90;
        }
    }
    ctx->pc = 0x1A5C60u;
    // 0x1a5c60: 0x51142  srl         $v0, $a1, 5
    ctx->pc = 0x1a5c60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
    // 0x1a5c64: 0x26c4fb30  addiu       $a0, $s6, -0x4D0
    ctx->pc = 0x1a5c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966064));
    // 0x1a5c68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a5c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a5c6c: 0x30a3001f  andi        $v1, $a1, 0x1F
    ctx->pc = 0x1a5c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x1a5c70: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1a5c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a5c74: 0x731804  sllv        $v1, $s3, $v1
    ctx->pc = 0x1a5c74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 3) & 0x1F));
    // 0x1a5c78: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a5c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a5c7c: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x1a5c7cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x1a5c80: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1a5c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1a5c84: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1A5C84u;
    {
        const bool branch_taken_0x1a5c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C84u;
        // 0x1a5c88: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5c84) {
            ctx->pc = 0x1A5CD4u;
            goto label_1a5cd4;
        }
    }
    ctx->pc = 0x1A5C8Cu;
    // 0x1a5c8c: 0x0  nop
    ctx->pc = 0x1a5c8cu;
    // NOP
label_1a5c90:
    // 0x1a5c90: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A5C90u;
    {
        const bool branch_taken_0x1a5c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C90u;
        // 0x1a5c94: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5c90) {
            ctx->pc = 0x1A5CC8u;
            goto label_1a5cc8;
        }
    }
    ctx->pc = 0x1A5C98u;
    // 0x1a5c98: 0x24a2f400  addiu       $v0, $a1, -0xC00
    ctx->pc = 0x1a5c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964224));
    // 0x1a5c9c: 0x22142  srl         $a0, $v0, 5
    ctx->pc = 0x1a5c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1a5ca0: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1a5ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1a5ca4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1a5ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a5ca8: 0x531004  sllv        $v0, $s3, $v0
    ctx->pc = 0x1a5ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x1a5cac: 0x278190e0  addiu       $at, $gp, -0x6F20
    ctx->pc = 0x1a5cacu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938848));
    // 0x1a5cb0: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x1a5cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x1a5cb4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1a5cb4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1a5cb8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a5cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a5cbc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1a5cbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1a5cc0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5CC0u;
    {
        const bool branch_taken_0x1a5cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5CC0u;
        // 0x1a5cc4: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5cc0) {
            ctx->pc = 0x1A5CD4u;
            goto label_1a5cd4;
        }
    }
    ctx->pc = 0x1A5CC8u;
label_1a5cc8:
    // 0x1a5cc8: 0x26a593d8  addiu       $a1, $s5, -0x6C28
    ctx->pc = 0x1a5cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294939608));
    // 0x1a5ccc: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A5CCCu;
    SET_GPR_U32(ctx, 31, 0x1A5CD4u);
    ctx->pc = 0x1A5CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5CCCu;
    // 0x1a5cd0: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A5CCCu, 0x1A5CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5CD4u;
label_1a5cd4:
    // 0x1a5cd4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1a5cd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1a5cd8: 0x5600ffd5  bnel        $s0, $zero, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1A5CD8u;
    {
        const bool branch_taken_0x1a5cd8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5cd8) {
            ctx->pc = 0x1A5CDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5CD8u;
            // 0x1a5cdc: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5c30;
        }
    }
    ctx->pc = 0x1A5CE0u;
label_1a5ce0:
    // 0x1a5ce0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5ce0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5ce4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a5ce4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a5ce8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a5ce8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5cec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a5cecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a5cf0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1a5cf0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a5cf4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1a5cf4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a5cf8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1a5cf8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a5cfc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1a5cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a5d00: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D00u;
        // 0x1a5d04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5D08u;
}
