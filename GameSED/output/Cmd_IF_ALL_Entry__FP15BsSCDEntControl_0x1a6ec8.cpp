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

// Function: Cmd_IF_ALL_Entry__FP15BsSCDEntControl
// Address: 0x1a6ec8 - 0x1a707c
void Cmd_IF_ALL_Entry__FP15BsSCDEntControl_0x1a6ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_IF_ALL_Entry__FP15BsSCDEntControl_0x1a6ec8");
#endif

    switch (ctx->pc) {
        case 0x1a6f20u: goto label_1a6f20;
        case 0x1a6f40u: goto label_1a6f40;
        case 0x1a6fb4u: goto label_1a6fb4;
        case 0x1a6ff4u: goto label_1a6ff4;
        case 0x1a7040u: goto label_1a7040;
        default: break;
    }

    ctx->pc = 0x1a6ec8u;

    // 0x1a6ec8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a6ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a6ecc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a6eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a6ed0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a6ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a6ed4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a6ed4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6ed8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a6ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a6edc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a6edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a6ee0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1a6ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1a6ee4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1a6ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1a6ee8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1a6ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1a6eec: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1a6eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1a6ef0: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1a6ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1a6ef4: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1a6ef4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a6ef8: 0x12000034  beqz        $s0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1A6EF8u;
    {
        const bool branch_taken_0x1a6ef8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6EF8u;
        // 0x1a6efc: 0x2644001c  addiu       $a0, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6ef8) {
            ctx->pc = 0x1A6FCCu;
            goto label_1a6fcc;
        }
    }
    ctx->pc = 0x1A6F00u;
    // 0x1a6f00: 0x3c147ffe  lui         $s4, 0x7FFE
    ctx->pc = 0x1a6f00u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32766 << 16));
    // 0x1a6f04: 0x2651001c  addiu       $s1, $s2, 0x1C
    ctx->pc = 0x1a6f04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x1a6f08: 0x3694ffff  ori         $s4, $s4, 0xFFFF
    ctx->pc = 0x1a6f08u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
    // 0x1a6f0c: 0x3c160024  lui         $s6, 0x24
    ctx->pc = 0x1a6f0cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)36 << 16));
    // 0x1a6f10: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1a6f10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a6f14: 0x3c150026  lui         $s5, 0x26
    ctx->pc = 0x1a6f14u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)38 << 16));
    // 0x1a6f18: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a6f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a6f1c: 0x0  nop
    ctx->pc = 0x1a6f1cu;
    // NOP
label_1a6f20:
    // 0x1a6f20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a6f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6f24: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a6f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a6f28: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1a6f28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1a6f2c: 0x283102a  slt         $v0, $s4, $v1
    ctx->pc = 0x1a6f2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a6f30: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6F30u;
    {
        const bool branch_taken_0x1a6f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F30u;
        // 0x1a6f34: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6f30) {
            ctx->pc = 0x1A6F44u;
            goto label_1a6f44;
        }
    }
    ctx->pc = 0x1A6F38u;
    // 0x1a6f38: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A6F38u;
    SET_GPR_U32(ctx, 31, 0x1A6F40u);
    ctx->pc = 0x1A6F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6F38u;
    // 0x1a6f3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A6F38u, 0x1A6F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6F40u;
label_1a6f40:
    // 0x1a6f40: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6f40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a6f44:
    // 0x1a6f44: 0x28a20c00  slti        $v0, $a1, 0xC00
    ctx->pc = 0x1a6f44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3072) ? 1 : 0);
    // 0x1a6f48: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1A6F48u;
    {
        const bool branch_taken_0x1a6f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6f48) {
            ctx->pc = 0x1A6F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6F48u;
            // 0x1a6f4c: 0x28a20c40  slti        $v0, $a1, 0xC40 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3136) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A6F78u;
            goto label_1a6f78;
        }
    }
    ctx->pc = 0x1A6F50u;
    // 0x1a6f50: 0x51942  srl         $v1, $a1, 5
    ctx->pc = 0x1a6f50u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
    // 0x1a6f54: 0x30a5001f  andi        $a1, $a1, 0x1F
    ctx->pc = 0x1a6f54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x1a6f58: 0x26c4fb30  addiu       $a0, $s6, -0x4D0
    ctx->pc = 0x1a6f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966064));
    // 0x1a6f5c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a6f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a6f60: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1a6f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a6f64: 0xb32804  sllv        $a1, $s3, $a1
    ctx->pc = 0x1a6f64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 5) & 0x1F));
    // 0x1a6f68: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a6f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a6f6c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1a6f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1a6f70: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1A6F70u;
    {
        const bool branch_taken_0x1a6f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F70u;
        // 0x1a6f74: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6f70) {
            ctx->pc = 0x1A6FB8u;
            goto label_1a6fb8;
        }
    }
    ctx->pc = 0x1A6F78u;
label_1a6f78:
    // 0x1a6f78: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A6F78u;
    {
        const bool branch_taken_0x1a6f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F78u;
        // 0x1a6f7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6f78) {
            ctx->pc = 0x1A6FA8u;
            goto label_1a6fa8;
        }
    }
    ctx->pc = 0x1A6F80u;
    // 0x1a6f80: 0x24a2f400  addiu       $v0, $a1, -0xC00
    ctx->pc = 0x1a6f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964224));
    // 0x1a6f84: 0x22142  srl         $a0, $v0, 5
    ctx->pc = 0x1a6f84u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1a6f88: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1a6f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1a6f8c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1a6f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a6f90: 0x531004  sllv        $v0, $s3, $v0
    ctx->pc = 0x1a6f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x1a6f94: 0x9c1821  addu        $v1, $a0, $gp
    ctx->pc = 0x1a6f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 28)));
    // 0x1a6f98: 0x8c6390e0  lw          $v1, -0x6F20($v1)
    ctx->pc = 0x1a6f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294938848)));
    // 0x1a6f9c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1a6f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1a6fa0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A6FA0u;
    {
        const bool branch_taken_0x1a6fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6FA0u;
        // 0x1a6fa4: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6fa0) {
            ctx->pc = 0x1A6FB8u;
            goto label_1a6fb8;
        }
    }
    ctx->pc = 0x1A6FA8u;
label_1a6fa8:
    // 0x1a6fa8: 0x26a593d8  addiu       $a1, $s5, -0x6C28
    ctx->pc = 0x1a6fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294939608));
    // 0x1a6fac: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A6FACu;
    SET_GPR_U32(ctx, 31, 0x1A6FB4u);
    ctx->pc = 0x1A6FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6FACu;
    // 0x1a6fb0: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A6FACu, 0x1A6FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6FB4u;
label_1a6fb4:
    // 0x1a6fb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a6fb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6fb8:
    // 0x1a6fb8: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1A6FB8u;
    {
        const bool branch_taken_0x1a6fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6FB8u;
        // 0x1a6fbc: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6fb8) {
            ctx->pc = 0x1A7054u;
            goto label_1a7054;
        }
    }
    ctx->pc = 0x1A6FC0u;
    // 0x1a6fc0: 0x5600ffd7  bnel        $s0, $zero, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1A6FC0u;
    {
        const bool branch_taken_0x1a6fc0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a6fc0) {
            ctx->pc = 0x1A6FC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6FC0u;
            // 0x1a6fc4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A6F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a6f20;
        }
    }
    ctx->pc = 0x1A6FC8u;
    // 0x1a6fc8: 0x2644001c  addiu       $a0, $s2, 0x1C
    ctx->pc = 0x1a6fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
label_1a6fcc:
    // 0x1a6fcc: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a6fccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a6fd0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a6fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a6fd4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a6fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a6fd8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6fdc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a6fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a6fe0: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a6fe0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a6fe4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A6FE4u;
    {
        const bool branch_taken_0x1a6fe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6FE4u;
        // 0x1a6fe8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6fe4) {
            ctx->pc = 0x1A7000u;
            goto label_1a7000;
        }
    }
    ctx->pc = 0x1A6FECu;
    // 0x1a6fec: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A6FECu;
    SET_GPR_U32(ctx, 31, 0x1A6FF4u);
    ctx->pc = 0x1A6FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6FECu;
    // 0x1a6ff0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A6FECu, 0x1A6FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6FF4u;
label_1a6ff4:
    // 0x1a6ff4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6FF4u;
    {
        const bool branch_taken_0x1a6ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6FF4u;
        // 0x1a6ff8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6ff4) {
            ctx->pc = 0x1A7004u;
            goto label_1a7004;
        }
    }
    ctx->pc = 0x1A6FFCu;
    // 0x1a6ffc: 0x0  nop
    ctx->pc = 0x1a6ffcu;
    // NOP
label_1a7000:
    // 0x1a7000: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a7000u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a7004:
    // 0x1a7004: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a7004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a7008: 0x56020005  bnel        $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7008u;
    {
        const bool branch_taken_0x1a7008 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a7008) {
            ctx->pc = 0x1A700Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7008u;
            // 0x1a700c: 0x8e510004  lw          $s1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A7020u;
            goto label_1a7020;
        }
    }
    ctx->pc = 0x1A7010u;
    // 0x1a7010: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x1a7010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1a7014: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a7014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1a7018: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1A7018u;
    {
        const bool branch_taken_0x1a7018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A701Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7018u;
        // 0x1a701c: 0xae420018  sw          $v0, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7018) {
            ctx->pc = 0x1A7054u;
            goto label_1a7054;
        }
    }
    ctx->pc = 0x1A7020u;
label_1a7020:
    // 0x1a7020: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1a7020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a7024: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1a7024u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a7028: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7028u;
    {
        const bool branch_taken_0x1a7028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A702Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7028u;
        // 0x1a702c: 0x8e440028  lw          $a0, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7028) {
            ctx->pc = 0x1A7040u;
            goto label_1a7040;
        }
    }
    ctx->pc = 0x1A7030u;
    // 0x1a7030: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a7030u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a7034: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x1a7034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1a7038: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A7038u;
    SET_GPR_U32(ctx, 31, 0x1A7040u);
    ctx->pc = 0x1A703Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7038u;
    // 0x1a703c: 0x24a593c8  addiu       $a1, $a1, -0x6C38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A7038u, 0x1A7040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7040u;
label_1a7040:
    // 0x1a7040: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1a7040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a7044: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1a7044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1a7048: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x1a7048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1a704c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1a704cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1a7050: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x1a7050u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_1a7054:
    // 0x1a7054: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a7054u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7058: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a7058u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a705c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a705cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7060: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a7060u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a7064: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1a7064u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7068: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1a7068u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a706c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1a706cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a7070: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1a7070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a7074: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7074u;
        // 0x1a7078: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A707Cu;
}
