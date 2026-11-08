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

// Function: Cmd_FLAG_ON_Entry__FP15BsSCDEntControl
// Address: 0x1a5ab8 - 0x1a5be0
void Cmd_FLAG_ON_Entry__FP15BsSCDEntControl_0x1a5ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_FLAG_ON_Entry__FP15BsSCDEntControl_0x1a5ab8");
#endif

    switch (ctx->pc) {
        case 0x1a5b08u: goto label_1a5b08;
        case 0x1a5b28u: goto label_1a5b28;
        case 0x1a5bacu: goto label_1a5bac;
        default: break;
    }

    ctx->pc = 0x1a5ab8u;

    // 0x1a5ab8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a5ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a5abc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a5abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a5ac0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a5ac0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5ac4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a5ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a5ac8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a5ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a5acc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a5accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a5ad0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1a5ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1a5ad4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1a5ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1a5ad8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1a5ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1a5adc: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1a5adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1a5ae0: 0x8e500010  lw          $s0, 0x10($s2)
    ctx->pc = 0x1a5ae0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1a5ae4: 0x12000034  beqz        $s0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1A5AE4u;
    {
        const bool branch_taken_0x1a5ae4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5AE4u;
        // 0x1a5ae8: 0x3c147ffe  lui         $s4, 0x7FFE (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32766 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5ae4) {
            ctx->pc = 0x1A5BB8u;
            goto label_1a5bb8;
        }
    }
    ctx->pc = 0x1A5AECu;
    // 0x1a5aec: 0x2651001c  addiu       $s1, $s2, 0x1C
    ctx->pc = 0x1a5aecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x1a5af0: 0x3694ffff  ori         $s4, $s4, 0xFFFF
    ctx->pc = 0x1a5af0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
    // 0x1a5af4: 0x3c160024  lui         $s6, 0x24
    ctx->pc = 0x1a5af4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)36 << 16));
    // 0x1a5af8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1a5af8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5afc: 0x3c150026  lui         $s5, 0x26
    ctx->pc = 0x1a5afcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)38 << 16));
    // 0x1a5b00: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a5b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a5b04: 0x0  nop
    ctx->pc = 0x1a5b04u;
    // NOP
label_1a5b08:
    // 0x1a5b08: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a5b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a5b0c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a5b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a5b10: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1a5b10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1a5b14: 0x283102a  slt         $v0, $s4, $v1
    ctx->pc = 0x1a5b14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a5b18: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A5B18u;
    {
        const bool branch_taken_0x1a5b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B18u;
        // 0x1a5b1c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5b18) {
            ctx->pc = 0x1A5B30u;
            goto label_1a5b30;
        }
    }
    ctx->pc = 0x1A5B20u;
    // 0x1a5b20: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A5B20u;
    SET_GPR_U32(ctx, 31, 0x1A5B28u);
    ctx->pc = 0x1A5B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5B20u;
    // 0x1a5b24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A5B20u, 0x1A5B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5B28u;
label_1a5b28:
    // 0x1a5b28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A5B28u;
    {
        const bool branch_taken_0x1a5b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B28u;
        // 0x1a5b2c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5b28) {
            ctx->pc = 0x1A5B34u;
            goto label_1a5b34;
        }
    }
    ctx->pc = 0x1A5B30u;
label_1a5b30:
    // 0x1a5b30: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1a5b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a5b34:
    // 0x1a5b34: 0x28820c00  slti        $v0, $a0, 0xC00
    ctx->pc = 0x1a5b34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3072) ? 1 : 0);
    // 0x1a5b38: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A5B38u;
    {
        const bool branch_taken_0x1a5b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B38u;
        // 0x1a5b3c: 0x28820c40  slti        $v0, $a0, 0xC40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3136) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5b38) {
            ctx->pc = 0x1A5B68u;
            goto label_1a5b68;
        }
    }
    ctx->pc = 0x1A5B40u;
    // 0x1a5b40: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x1a5b40u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x1a5b44: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x1a5b44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x1a5b48: 0x26c5fb30  addiu       $a1, $s6, -0x4D0
    ctx->pc = 0x1a5b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966064));
    // 0x1a5b4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a5b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a5b50: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1a5b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a5b54: 0x932004  sllv        $a0, $s3, $a0
    ctx->pc = 0x1a5b54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 4) & 0x1F));
    // 0x1a5b58: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a5b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a5b5c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1a5b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1a5b60: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1A5B60u;
    {
        const bool branch_taken_0x1a5b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B60u;
        // 0x1a5b64: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5b60) {
            ctx->pc = 0x1A5BACu;
            goto label_1a5bac;
        }
    }
    ctx->pc = 0x1A5B68u;
label_1a5b68:
    // 0x1a5b68: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1A5B68u;
    {
        const bool branch_taken_0x1a5b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5b68) {
            ctx->pc = 0x1A5B6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5B68u;
            // 0x1a5b6c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5BA0u;
            goto label_1a5ba0;
        }
    }
    ctx->pc = 0x1A5B70u;
    // 0x1a5b70: 0x2482f400  addiu       $v0, $a0, -0xC00
    ctx->pc = 0x1a5b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964224));
    // 0x1a5b74: 0x22142  srl         $a0, $v0, 5
    ctx->pc = 0x1a5b74u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1a5b78: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1a5b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1a5b7c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1a5b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a5b80: 0x531004  sllv        $v0, $s3, $v0
    ctx->pc = 0x1a5b80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x1a5b84: 0x278190e0  addiu       $at, $gp, -0x6F20
    ctx->pc = 0x1a5b84u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938848));
    // 0x1a5b88: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x1a5b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x1a5b8c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a5b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a5b90: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a5b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a5b94: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A5B94u;
    {
        const bool branch_taken_0x1a5b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B94u;
        // 0x1a5b98: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5b94) {
            ctx->pc = 0x1A5BACu;
            goto label_1a5bac;
        }
    }
    ctx->pc = 0x1A5B9Cu;
    // 0x1a5b9c: 0x0  nop
    ctx->pc = 0x1a5b9cu;
    // NOP
label_1a5ba0:
    // 0x1a5ba0: 0x26a593d8  addiu       $a1, $s5, -0x6C28
    ctx->pc = 0x1a5ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294939608));
    // 0x1a5ba4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A5BA4u;
    SET_GPR_U32(ctx, 31, 0x1A5BACu);
    ctx->pc = 0x1A5BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5BA4u;
    // 0x1a5ba8: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A5BA4u, 0x1A5BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5BACu;
label_1a5bac:
    // 0x1a5bac: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1a5bacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1a5bb0: 0x5600ffd5  bnel        $s0, $zero, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1A5BB0u;
    {
        const bool branch_taken_0x1a5bb0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5bb0) {
            ctx->pc = 0x1A5BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5BB0u;
            // 0x1a5bb4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5b08;
        }
    }
    ctx->pc = 0x1A5BB8u;
label_1a5bb8:
    // 0x1a5bb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5bb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5bbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a5bbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a5bc0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a5bc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5bc4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a5bc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a5bc8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1a5bc8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a5bcc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1a5bccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a5bd0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1a5bd0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a5bd4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1a5bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a5bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5BD8u;
        // 0x1a5bdc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5BE0u;
}
