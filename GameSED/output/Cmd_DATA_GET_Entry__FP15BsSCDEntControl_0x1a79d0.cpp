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

// Function: Cmd_DATA_GET_Entry__FP15BsSCDEntControl
// Address: 0x1a79d0 - 0x1a7b94
void Cmd_DATA_GET_Entry__FP15BsSCDEntControl_0x1a79d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_DATA_GET_Entry__FP15BsSCDEntControl_0x1a79d0");
#endif

    switch (ctx->pc) {
        case 0x1a7a18u: goto label_1a7a18;
        case 0x1a7a54u: goto label_1a7a54;
        case 0x1a7a84u: goto label_1a7a84;
        case 0x1a7ae0u: goto label_1a7ae0;
        case 0x1a7af4u: goto label_1a7af4;
        case 0x1a7b3cu: goto label_1a7b3c;
        case 0x1a7b58u: goto label_1a7b58;
        default: break;
    }

    ctx->pc = 0x1a79d0u;

    // 0x1a79d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a79d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a79d4: 0x3c027ffe  lui         $v0, 0x7FFE
    ctx->pc = 0x1a79d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32766 << 16));
    // 0x1a79d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a79d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a79dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a79dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a79e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a79e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a79e4: 0x2625001c  addiu       $a1, $s1, 0x1C
    ctx->pc = 0x1a79e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1a79e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a79e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a79ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a79ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a79f0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a79f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a79f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a79f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a79f8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a79f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a79fc: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1a79fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a7a00: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1a7a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1a7a04: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x1a7a04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a7a08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7A08u;
    {
        const bool branch_taken_0x1a7a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7A08u;
        // 0x1a7a0c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7a08) {
            ctx->pc = 0x1A7A20u;
            goto label_1a7a20;
        }
    }
    ctx->pc = 0x1A7A10u;
    // 0x1a7a10: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A7A10u;
    SET_GPR_U32(ctx, 31, 0x1A7A18u);
    ctx->pc = 0x1A7A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7A10u;
    // 0x1a7a14: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A7A10u, 0x1A7A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7A18u;
label_1a7a18:
    // 0x1a7a18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A7A18u;
    {
        const bool branch_taken_0x1a7a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7A18u;
        // 0x1a7a1c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7a18) {
            ctx->pc = 0x1A7A24u;
            goto label_1a7a24;
        }
    }
    ctx->pc = 0x1A7A20u;
label_1a7a20:
    // 0x1a7a20: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1a7a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a7a24:
    // 0x1a7a24: 0x2624001c  addiu       $a0, $s1, 0x1C
    ctx->pc = 0x1a7a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1a7a28: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a7a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a7a2c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a7a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a7a30: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a7a30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7a34: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a7a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a7a38: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a7a38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a7a3c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a7a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a7a40: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a7a40u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a7a44: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A7A44u;
    {
        const bool branch_taken_0x1a7a44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7A44u;
        // 0x1a7a48: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7a44) {
            ctx->pc = 0x1A7A58u;
            goto label_1a7a58;
        }
    }
    ctx->pc = 0x1A7A4Cu;
    // 0x1a7a4c: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A7A4Cu;
    SET_GPR_U32(ctx, 31, 0x1A7A54u);
    ctx->pc = 0x1A7A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7A4Cu;
    // 0x1a7a50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A7A4Cu, 0x1A7A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7A54u;
label_1a7a54:
    // 0x1a7a54: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a7a54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a7a58:
    // 0x1a7a58: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A7A58u;
    {
        const bool branch_taken_0x1a7a58 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7A58u;
        // 0x1a7a5c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7a58) {
            ctx->pc = 0x1A7AA0u;
            goto label_1a7aa0;
        }
    }
    ctx->pc = 0x1A7A60u;
    // 0x1a7a60: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x1a7a60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a7a64: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a7a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a7a68: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1a7a68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a7a6c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7A6Cu;
    {
        const bool branch_taken_0x1a7a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7A6Cu;
        // 0x1a7a70: 0x8e240028  lw          $a0, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7a6c) {
            ctx->pc = 0x1A7A84u;
            goto label_1a7a84;
        }
    }
    ctx->pc = 0x1A7A74u;
    // 0x1a7a74: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a7a74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a7a78: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x1a7a78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1a7a7c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A7A7Cu;
    SET_GPR_U32(ctx, 31, 0x1A7A84u);
    ctx->pc = 0x1A7A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7A7Cu;
    // 0x1a7a80: 0x24a593c8  addiu       $a1, $a1, -0x6C38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A7A7Cu, 0x1A7A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7A84u;
label_1a7a84:
    // 0x1a7a84: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1a7a84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1a7a88: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a7a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a7a8c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x1a7a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1a7a90: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1a7a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1a7a94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7A94u;
    {
        const bool branch_taken_0x1a7a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7A94u;
        // 0x1a7a98: 0x24620004  addiu       $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7a94) {
            ctx->pc = 0x1A7AA4u;
            goto label_1a7aa4;
        }
    }
    ctx->pc = 0x1A7A9Cu;
    // 0x1a7a9c: 0x0  nop
    ctx->pc = 0x1a7a9cu;
    // NOP
label_1a7aa0:
    // 0x1a7aa0: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x1a7aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_1a7aa4:
    // 0x1a7aa4: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x1a7aa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7aa8: 0x660001d  bltz        $s3, . + 4 + (0x1D << 2)
    ctx->pc = 0x1A7AA8u;
    {
        const bool branch_taken_0x1a7aa8 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x1A7AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7AA8u;
        // 0x1a7aac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7aa8) {
            ctx->pc = 0x1A7B20u;
            goto label_1a7b20;
        }
    }
    ctx->pc = 0x1A7AB0u;
    // 0x1a7ab0: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x1a7ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1a7ab4: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1a7ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1a7ab8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1a7ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1a7abc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a7abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a7ac0: 0x1045002d  beq         $v0, $a1, . + 4 + (0x2D << 2)
    ctx->pc = 0x1A7AC0u;
    {
        const bool branch_taken_0x1a7ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1A7AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7AC0u;
        // 0x1a7ac4: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7ac0) {
            ctx->pc = 0x1A7B78u;
            goto label_1a7b78;
        }
    }
    ctx->pc = 0x1A7AC8u;
    // 0x1a7ac8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a7ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a7acc: 0x1045002a  beq         $v0, $a1, . + 4 + (0x2A << 2)
    ctx->pc = 0x1A7ACCu;
    {
        const bool branch_taken_0x1a7acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1A7AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7ACCu;
        // 0x1a7ad0: 0x2651001c  addiu       $s1, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7acc) {
            ctx->pc = 0x1A7B78u;
            goto label_1a7b78;
        }
    }
    ctx->pc = 0x1A7AD4u;
    // 0x1a7ad4: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x1a7ad4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    // 0x1a7ad8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a7ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a7adc: 0x0  nop
    ctx->pc = 0x1a7adcu;
    // NOP
label_1a7ae0:
    // 0x1a7ae0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a7ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7ae4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a7ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a7ae8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a7ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a7aec: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A7AECu;
    SET_GPR_U32(ctx, 31, 0x1A7AF4u);
    ctx->pc = 0x1A7AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7AECu;
    // 0x1a7af0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A7AECu, 0x1A7AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7AF4u;
label_1a7af4:
    // 0x1a7af4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a7af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a7af8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1a7af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a7afc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a7afcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a7b00: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a7b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a7b04: 0x1053001c  beq         $v0, $s3, . + 4 + (0x1C << 2)
    ctx->pc = 0x1A7B04u;
    {
        const bool branch_taken_0x1a7b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x1A7B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7B04u;
        // 0x1a7b08: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7b04) {
            ctx->pc = 0x1A7B78u;
            goto label_1a7b78;
        }
    }
    ctx->pc = 0x1A7B0Cu;
    // 0x1a7b0c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a7b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a7b10: 0x5453fff3  bnel        $v0, $s3, . + 4 + (-0xD << 2)
    ctx->pc = 0x1A7B10u;
    {
        const bool branch_taken_0x1a7b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1a7b10) {
            ctx->pc = 0x1A7B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7B10u;
            // 0x1a7b14: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A7AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a7ae0;
        }
    }
    ctx->pc = 0x1A7B18u;
    // 0x1a7b18: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1A7B18u;
    {
        const bool branch_taken_0x1a7b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7B18u;
        // 0x1a7b1c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7b18) {
            ctx->pc = 0x1A7B7Cu;
            goto label_1a7b7c;
        }
    }
    ctx->pc = 0x1A7B20u;
label_1a7b20:
    // 0x1a7b20: 0x2643001c  addiu       $v1, $s2, 0x1C
    ctx->pc = 0x1a7b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x1a7b24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a7b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7b28: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a7b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a7b2c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a7b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a7b30: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a7b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a7b34: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A7B34u;
    SET_GPR_U32(ctx, 31, 0x1A7B3Cu);
    ctx->pc = 0x1A7B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7B34u;
    // 0x1a7b38: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A7B34u, 0x1A7B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7B3Cu;
label_1a7b3c:
    // 0x1a7b3c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a7b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7b40: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a7b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a7b44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a7b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7b48: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1a7b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1a7b4c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A7B4Cu;
    {
        const bool branch_taken_0x1a7b4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A7B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7B4Cu;
        // 0x1a7b50: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7b4c) {
            ctx->pc = 0x1A7B74u;
            goto label_1a7b74;
        }
    }
    ctx->pc = 0x1A7B54u;
    // 0x1a7b54: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1a7b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_1a7b58:
    // 0x1a7b58: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a7b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a7b5c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1a7b5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1a7b60: 0x0  nop
    ctx->pc = 0x1a7b60u;
    // NOP
    // 0x1a7b64: 0x0  nop
    ctx->pc = 0x1a7b64u;
    // NOP
    // 0x1a7b68: 0x0  nop
    ctx->pc = 0x1a7b68u;
    // NOP
    // 0x1a7b6c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A7B6Cu;
    {
        const bool branch_taken_0x1a7b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A7B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7B6Cu;
        // 0x1a7b70: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7b6c) {
            ctx->pc = 0x1A7B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a7b58;
        }
    }
    ctx->pc = 0x1A7B74u;
label_1a7b74:
    // 0x1a7b74: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1a7b74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_1a7b78:
    // 0x1a7b78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a7b78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a7b7c:
    // 0x1a7b7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a7b7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a7b80: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a7b80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7b84: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a7b84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a7b88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a7b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7b8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7B8Cu;
        // 0x1a7b90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7B8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7B94u;
}
