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

// Function: Cmd_LOAD_TANK_Entry__FP15BsSCDEntControl
// Address: 0x1029e8 - 0x102c18
void Cmd_LOAD_TANK_Entry__FP15BsSCDEntControl_0x1029e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_LOAD_TANK_Entry__FP15BsSCDEntControl_0x1029e8");
#endif

    switch (ctx->pc) {
        case 0x102a24u: goto label_102a24;
        case 0x102a3cu: goto label_102a3c;
        case 0x102a70u: goto label_102a70;
        case 0x102ab8u: goto label_102ab8;
        case 0x102ae0u: goto label_102ae0;
        case 0x102ae8u: goto label_102ae8;
        case 0x102b00u: goto label_102b00;
        case 0x102b14u: goto label_102b14;
        case 0x102b24u: goto label_102b24;
        case 0x102b30u: goto label_102b30;
        case 0x102b40u: goto label_102b40;
        case 0x102b50u: goto label_102b50;
        case 0x102b58u: goto label_102b58;
        case 0x102b78u: goto label_102b78;
        case 0x102b80u: goto label_102b80;
        case 0x102b88u: goto label_102b88;
        case 0x102b90u: goto label_102b90;
        case 0x102b98u: goto label_102b98;
        case 0x102ba8u: goto label_102ba8;
        case 0x102bb8u: goto label_102bb8;
        case 0x102bc0u: goto label_102bc0;
        case 0x102bc8u: goto label_102bc8;
        case 0x102bdcu: goto label_102bdc;
        default: break;
    }

    ctx->pc = 0x1029e8u;

    // 0x1029e8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1029e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1029ec: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x1029ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x1029f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1029f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1029f4: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x1029f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x1029f8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1029f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1029fc: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1029fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x102a00: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x102a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x102a04: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x102a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x102a08: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x102a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x102a0c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x102a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x102a10: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x102a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x102a14: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x102a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x102a18: 0x8630000e  lh          $s0, 0xE($s1)
    ctx->pc = 0x102a18u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x102a1c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x102A1Cu;
    SET_GPR_U32(ctx, 31, 0x102A24u);
    ctx->pc = 0x102A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102A1Cu;
    // 0x102a20: 0x8c550044  lw          $s5, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x102A1Cu, 0x102A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102A24u;
label_102a24:
    // 0x102a24: 0x16000038  bnez        $s0, . + 4 + (0x38 << 2)
    ctx->pc = 0x102A24u;
    {
        const bool branch_taken_0x102a24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x102A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A24u;
        // 0x102a28: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102a24) {
            ctx->pc = 0x102B08u;
            goto label_102b08;
        }
    }
    ctx->pc = 0x102A2Cu;
    // 0x102a2c: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x102a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x102a30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x102a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102a34: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x102A34u;
    SET_GPR_U32(ctx, 31, 0x102A3Cu);
    ctx->pc = 0x102A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102A34u;
    // 0x102a38: 0x8c560380  lw          $s6, 0x380($v0) (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x102A34u, 0x102A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102A3Cu;
label_102a3c:
    // 0x102a3c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x102a3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102a40: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x102a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x102a44: 0x56e20017  bnel        $s7, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x102A44u;
    {
        const bool branch_taken_0x102a44 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        if (branch_taken_0x102a44) {
            ctx->pc = 0x102A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102A44u;
            // 0x102a48: 0x329200ff  andi        $s2, $s4, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 18, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x102AA4u;
            goto label_102aa4;
        }
    }
    ctx->pc = 0x102A4Cu;
    // 0x102a4c: 0x8ea20034  lw          $v0, 0x34($s5)
    ctx->pc = 0x102a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x102a50: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x102a50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102a54: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x102A54u;
    {
        const bool branch_taken_0x102a54 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x102A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A54u;
        // 0x102a58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102a54) {
            ctx->pc = 0x102A94u;
            goto label_102a94;
        }
    }
    ctx->pc = 0x102A5Cu;
    // 0x102a5c: 0x8ea70038  lw          $a3, 0x38($s5)
    ctx->pc = 0x102a5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x102a60: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x102a60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102a64: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x102a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102a68: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x102a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x102a6c: 0x0  nop
    ctx->pc = 0x102a6cu;
    // NOP
label_102a70:
    // 0x102a70: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x102a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x102a74: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x102a74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x102a78: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x102a78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x102a7c: 0xc8202a  slt         $a0, $a2, $t0
    ctx->pc = 0x102a7cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x102a80: 0x10690005  beq         $v1, $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x102A80u;
    {
        const bool branch_taken_0x102a80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 9));
        ctx->pc = 0x102A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102A80u;
        // 0x102a84: 0xe21021  addu        $v0, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102a80) {
            ctx->pc = 0x102A98u;
            goto label_102a98;
        }
    }
    ctx->pc = 0x102A88u;
    // 0x102a88: 0x0  nop
    ctx->pc = 0x102a88u;
    // NOP
    // 0x102a8c: 0x5480fff8  bnel        $a0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x102A8Cu;
    {
        const bool branch_taken_0x102a8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x102a8c) {
            ctx->pc = 0x102A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102A8Cu;
            // 0x102a90: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102a70;
        }
    }
    ctx->pc = 0x102A94u;
label_102a94:
    // 0x102a94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x102a94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_102a98:
    // 0x102a98: 0x54400055  bnel        $v0, $zero, . + 4 + (0x55 << 2)
    ctx->pc = 0x102A98u;
    {
        const bool branch_taken_0x102a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102a98) {
            ctx->pc = 0x102A9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102A98u;
            // 0x102a9c: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102BF0u;
            goto label_102bf0;
        }
    }
    ctx->pc = 0x102AA0u;
    // 0x102aa0: 0x329200ff  andi        $s2, $s4, 0xFF
    ctx->pc = 0x102aa0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_102aa4:
    // 0x102aa4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x102aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102aa8: 0x128040  sll         $s0, $s2, 1
    ctx->pc = 0x102aa8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x102aac: 0x32910f00  andi        $s1, $s4, 0xF00
    ctx->pc = 0x102aacu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)3840);
    // 0x102ab0: 0xc05f8ee  jal         func_17E3B8
    ctx->pc = 0x102AB0u;
    SET_GPR_U32(ctx, 31, 0x102AB8u);
    ctx->pc = 0x102AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102AB0u;
    // 0x102ab4: 0x2128021  addu        $s0, $s0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E3B8u, 0x102AB0u, 0x102AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102AB8u;
label_102ab8:
    // 0x102ab8: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x102ab8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x102abc: 0x118a03  sra         $s1, $s1, 8
    ctx->pc = 0x102abcu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 8));
    // 0x102ac0: 0x2128023  subu        $s0, $s0, $s2
    ctx->pc = 0x102ac0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x102ac4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x102ac4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102ac8: 0x2118821  addu        $s1, $s0, $s1
    ctx->pc = 0x102ac8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x102acc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x102accu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102ad0: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x102ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x102ad4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x102ad4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102ad8: 0xc05f4cc  jal         func_17D330
    ctx->pc = 0x102AD8u;
    SET_GPR_U32(ctx, 31, 0x102AE0u);
    ctx->pc = 0x102ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102AD8u;
    // 0x102adc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D330u, 0x102AD8u, 0x102AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102AE0u;
label_102ae0:
    // 0x102ae0: 0xc05fd52  jal         func_17F548
    ctx->pc = 0x102AE0u;
    SET_GPR_U32(ctx, 31, 0x102AE8u);
    ctx->pc = 0x102AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102AE0u;
    // 0x102ae4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F548u, 0x102AE0u, 0x102AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102AE8u;
label_102ae8:
    // 0x102ae8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x102ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102aec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x102aecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102af0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x102af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102af4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x102af4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102af8: 0xc05f4cc  jal         func_17D330
    ctx->pc = 0x102AF8u;
    SET_GPR_U32(ctx, 31, 0x102B00u);
    ctx->pc = 0x102AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102AF8u;
    // 0x102afc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D330u, 0x102AF8u, 0x102B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102B00u;
label_102b00:
    // 0x102b00: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x102B00u;
    {
        const bool branch_taken_0x102b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102B00u;
        // 0x102b04: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102b00) {
            ctx->pc = 0x102B60u;
            goto label_102b60;
        }
    }
    ctx->pc = 0x102B08u;
label_102b08:
    // 0x102b08: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x102b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102b0c: 0xc0416a6  jal         func_105A98
    ctx->pc = 0x102B0Cu;
    SET_GPR_U32(ctx, 31, 0x102B14u);
    ctx->pc = 0x102B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102B0Cu;
    // 0x102b10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A98u, 0x102B0Cu, 0x102B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102B14u;
label_102b14:
    // 0x102b14: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x102b14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x102b18: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x102b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102b1c: 0xc067392  jal         func_19CE48
    ctx->pc = 0x102B1Cu;
    SET_GPR_U32(ctx, 31, 0x102B24u);
    ctx->pc = 0x102B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102B1Cu;
    // 0x102b20: 0x24a5cf30  addiu       $a1, $a1, -0x30D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CE48u, 0x102B1Cu, 0x102B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102B24u;
label_102b24:
    // 0x102b24: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x102b24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102b28: 0xc05f8ee  jal         func_17E3B8
    ctx->pc = 0x102B28u;
    SET_GPR_U32(ctx, 31, 0x102B30u);
    ctx->pc = 0x102B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102B28u;
    // 0x102b2c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E3B8u, 0x102B28u, 0x102B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102B30u;
label_102b30:
    // 0x102b30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x102b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102b34: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x102b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102b38: 0xc0416a6  jal         func_105A98
    ctx->pc = 0x102B38u;
    SET_GPR_U32(ctx, 31, 0x102B40u);
    ctx->pc = 0x102B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102B38u;
    // 0x102b3c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A98u, 0x102B38u, 0x102B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102B40u;
label_102b40:
    // 0x102b40: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x102b40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x102b44: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x102b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102b48: 0xc067374  jal         func_19CDD0
    ctx->pc = 0x102B48u;
    SET_GPR_U32(ctx, 31, 0x102B50u);
    ctx->pc = 0x102B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102B48u;
    // 0x102b4c: 0x24a5cf38  addiu       $a1, $a1, -0x30C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CDD0u, 0x102B48u, 0x102B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102B50u;
label_102b50:
    // 0x102b50: 0xc05fd52  jal         func_17F548
    ctx->pc = 0x102B50u;
    SET_GPR_U32(ctx, 31, 0x102B58u);
    ctx->pc = 0x102B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102B50u;
    // 0x102b54: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F548u, 0x102B50u, 0x102B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102B58u;
label_102b58:
    // 0x102b58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x102b58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102b5c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x102b5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_102b60:
    // 0x102b60: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x102b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102b64: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x102b64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102b68: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x102b68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102b6c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x102b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102b70: 0xc04095a  jal         func_102568
    ctx->pc = 0x102B70u;
    SET_GPR_U32(ctx, 31, 0x102B78u);
    ctx->pc = 0x102B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102B70u;
    // 0x102b74: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102568u, 0x102B70u, 0x102B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102B78u;
label_102b78:
    // 0x102b78: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x102B78u;
    SET_GPR_U32(ctx, 31, 0x102B80u);
    ctx->pc = 0x102B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102B78u;
    // 0x102b7c: 0x8e64001c  lw          $a0, 0x1C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x102B78u, 0x102B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102B80u;
label_102b80:
    // 0x102b80: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x102B80u;
    SET_GPR_U32(ctx, 31, 0x102B88u);
    ctx->pc = 0x102B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102B80u;
    // 0x102b84: 0x8e64001c  lw          $a0, 0x1C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x102B80u, 0x102B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102B88u;
label_102b88:
    // 0x102b88: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x102B88u;
    SET_GPR_U32(ctx, 31, 0x102B90u);
    ctx->pc = 0x102B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102B88u;
    // 0x102b8c: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x102B88u, 0x102B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102B90u;
label_102b90:
    // 0x102b90: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x102B90u;
    SET_GPR_U32(ctx, 31, 0x102B98u);
    ctx->pc = 0x102B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102B90u;
    // 0x102b94: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x102B90u, 0x102B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102B98u;
label_102b98:
    // 0x102b98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x102b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102b9c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x102b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102ba0: 0xc05fe36  jal         func_17F8D8
    ctx->pc = 0x102BA0u;
    SET_GPR_U32(ctx, 31, 0x102BA8u);
    ctx->pc = 0x102BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102BA0u;
    // 0x102ba4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F8D8u, 0x102BA0u, 0x102BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102BA8u;
label_102ba8:
    // 0x102ba8: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x102ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x102bac: 0x58400010  blezl       $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x102BACu;
    {
        const bool branch_taken_0x102bac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x102bac) {
            ctx->pc = 0x102BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102BACu;
            // 0x102bb0: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102BF0u;
            goto label_102bf0;
        }
    }
    ctx->pc = 0x102BB4u;
    // 0x102bb4: 0x0  nop
    ctx->pc = 0x102bb4u;
    // NOP
label_102bb8:
    // 0x102bb8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x102BB8u;
    SET_GPR_U32(ctx, 31, 0x102BC0u);
    ctx->pc = 0x102BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102BB8u;
    // 0x102bbc: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x102BB8u, 0x102BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102BC0u;
label_102bc0:
    // 0x102bc0: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x102BC0u;
    SET_GPR_U32(ctx, 31, 0x102BC8u);
    ctx->pc = 0x102BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102BC0u;
    // 0x102bc4: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x102BC0u, 0x102BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102BC8u;
label_102bc8:
    // 0x102bc8: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x102bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x102bcc: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x102bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x102bd0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x102bd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x102bd4: 0xc05fec2  jal         func_17FB08
    ctx->pc = 0x102BD4u;
    SET_GPR_U32(ctx, 31, 0x102BDCu);
    ctx->pc = 0x102BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102BD4u;
    // 0x102bd8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FB08u, 0x102BD4u, 0x102BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102BDCu;
label_102bdc:
    // 0x102bdc: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x102bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x102be0: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x102be0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x102be4: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x102BE4u;
    {
        const bool branch_taken_0x102be4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x102be4) {
            ctx->pc = 0x102BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102bb8;
        }
    }
    ctx->pc = 0x102BECu;
    // 0x102bec: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x102becu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_102bf0:
    // 0x102bf0: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x102bf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x102bf4: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x102bf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x102bf8: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x102bf8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x102bfc: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x102bfcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x102c00: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x102c00u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x102c04: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x102c04u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x102c08: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x102c08u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x102c0c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x102c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x102c10: 0x3e00008  jr          $ra
    ctx->pc = 0x102C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C10u;
        // 0x102c14: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102C18u;
}
