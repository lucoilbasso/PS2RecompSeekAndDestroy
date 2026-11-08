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

// Function: Cmd_DIAG_DRIFT_COM_Entry__FP15BsSCDEntControl
// Address: 0x1499b8 - 0x149b24
void Cmd_DIAG_DRIFT_COM_Entry__FP15BsSCDEntControl_0x1499b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_DIAG_DRIFT_COM_Entry__FP15BsSCDEntControl_0x1499b8");
#endif

    switch (ctx->pc) {
        case 0x1499f4u: goto label_1499f4;
        case 0x149a30u: goto label_149a30;
        case 0x149a64u: goto label_149a64;
        case 0x149aa8u: goto label_149aa8;
        case 0x149ac8u: goto label_149ac8;
        default: break;
    }

    ctx->pc = 0x1499b8u;

    // 0x1499b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1499b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1499bc: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1499bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1499c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1499c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1499c4: 0x245043d0  addiu       $s0, $v0, 0x43D0
    ctx->pc = 0x1499c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 17360));
    // 0x1499c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1499c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1499cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1499ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1499d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1499d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1499d4: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1499d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1499d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1499d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x2043D0u));
    // 0x1499dc: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1499DCu;
    {
        const bool branch_taken_0x1499dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1499E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1499DCu;
        // 0x1499e0: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1499dc) {
            ctx->pc = 0x1499F8u;
            goto label_1499f8;
        }
    }
    ctx->pc = 0x1499E4u;
    // 0x1499e4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1499e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1499e8: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x1499e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1499ec: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1499ECu;
    SET_GPR_U32(ctx, 31, 0x1499F4u);
    ctx->pc = 0x1499F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1499ECu;
    // 0x1499f0: 0x24a56b68  addiu       $a1, $a1, 0x6B68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1499ECu, 0x1499F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1499F4u;
label_1499f4:
    // 0x1499f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1499f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1499f8:
    // 0x1499f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1499f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1499fc: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x1499fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x149a00: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x149a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x149a04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x149a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x149a08: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x149a08u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x149a0c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x149a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x149a10: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x149a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x149a14: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x149a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x149a18: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x149a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x149a1c: 0x24a60030  addiu       $a2, $a1, 0x30
    ctx->pc = 0x149a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x149a20: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x149a20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x149a24: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x149a24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149a28: 0xc05250a  jal         func_149428
    ctx->pc = 0x149A28u;
    SET_GPR_U32(ctx, 31, 0x149A30u);
    ctx->pc = 0x149A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149A28u;
    // 0x149a2c: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149428u, 0x149A28u, 0x149A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149A30u;
label_149a30:
    // 0x149a30: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x149a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x149a34: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x149A34u;
    {
        const bool branch_taken_0x149a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149A34u;
        // 0x149a38: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149a34) {
            ctx->pc = 0x149A54u;
            goto label_149a54;
        }
    }
    ctx->pc = 0x149A3Cu;
    // 0x149a3c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x149a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x149a40: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x149A40u;
    {
        const bool branch_taken_0x149a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149a40) {
            ctx->pc = 0x149A54u;
            goto label_149a54;
        }
    }
    ctx->pc = 0x149A48u;
    // 0x149a48: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x149a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x149a4c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x149a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x149a50: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x149a50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_149a54:
    // 0x149a54: 0xf8a00000  sqc2        $vf0, 0x0($a1)
    ctx->pc = 0x149a54u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x149a58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x149a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149a5c: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x149A5Cu;
    SET_GPR_U32(ctx, 31, 0x149A64u);
    ctx->pc = 0x149A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149A5Cu;
    // 0x149a60: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x149A5Cu, 0x149A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149A64u;
label_149a64:
    // 0x149a64: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x149a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x149a68: 0x26090020  addiu       $t1, $s0, 0x20
    ctx->pc = 0x149a68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x149a6c: 0x260b0010  addiu       $t3, $s0, 0x10
    ctx->pc = 0x149a6cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x149a70: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x149a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x149a74: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x149a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x149a78: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x149a78u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149a7c: 0x8d650008  lw          $a1, 0x8($t3)
    ctx->pc = 0x149a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x149a80: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x149a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x149a84: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x149a84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x149a88: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x149A88u;
    {
        const bool branch_taken_0x149a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149A88u;
        // 0x149a8c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149a88) {
            ctx->pc = 0x149B14u;
            goto label_149b14;
        }
    }
    ctx->pc = 0x149A90u;
    // 0x149a90: 0x511c0  sll         $v0, $a1, 7
    ctx->pc = 0x149a90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x149a94: 0x8d2d0000  lw          $t5, 0x0($t1)
    ctx->pc = 0x149a94u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x149a98: 0x60602d  daddu       $t4, $v1, $zero
    ctx->pc = 0x149a98u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149a9c: 0x3c080020  lui         $t0, 0x20
    ctx->pc = 0x149a9cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32 << 16));
    // 0x149aa0: 0x25087820  addiu       $t0, $t0, 0x7820
    ctx->pc = 0x149aa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 30752));
    // 0x149aa4: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x149aa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_149aa8:
    // 0x149aa8: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x149aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x149aac: 0x1a3102a  slt         $v0, $t5, $v1
    ctx->pc = 0x149aacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x149ab0: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x149AB0u;
    {
        const bool branch_taken_0x149ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149ab0) {
            ctx->pc = 0x149AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149AB0u;
            // 0x149ab4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149B04u;
            goto label_149b04;
        }
    }
    ctx->pc = 0x149AB8u;
    // 0x149ab8: 0x24a20040  addiu       $v0, $a1, 0x40
    ctx->pc = 0x149ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x149abc: 0x8d270000  lw          $a3, 0x0($t1)
    ctx->pc = 0x149abcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x149ac0: 0x2c460080  sltiu       $a2, $v0, 0x80
    ctx->pc = 0x149ac0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x149ac4: 0x682021  addu        $a0, $v1, $t0
    ctx->pc = 0x149ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_149ac8:
    // 0x149ac8: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x149AC8u;
    {
        const bool branch_taken_0x149ac8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x149ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149AC8u;
        // 0x149acc: 0x2862ffc0  slti        $v0, $v1, -0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967232) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x149ac8) {
            ctx->pc = 0x149AF0u;
            goto label_149af0;
        }
    }
    ctx->pc = 0x149AD0u;
    // 0x149ad0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x149AD0u;
    {
        const bool branch_taken_0x149ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149ad0) {
            ctx->pc = 0x149AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149AD0u;
            // 0x149ad4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149AF4u;
            goto label_149af4;
        }
    }
    ctx->pc = 0x149AD8u;
    // 0x149ad8: 0x28620040  slti        $v0, $v1, 0x40
    ctx->pc = 0x149ad8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x149adc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x149ADCu;
    {
        const bool branch_taken_0x149adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x149adc) {
            ctx->pc = 0x149AE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149ADCu;
            // 0x149ae0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149AF4u;
            goto label_149af4;
        }
    }
    ctx->pc = 0x149AE4u;
    // 0x149ae4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x149ae4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x149ae8: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x149ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x149aec: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x149aecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_149af0:
    // 0x149af0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x149af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_149af4:
    // 0x149af4: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x149af4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x149af8: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x149AF8u;
    {
        const bool branch_taken_0x149af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149AF8u;
        // 0x149afc: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149af8) {
            ctx->pc = 0x149AC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_149ac8;
        }
    }
    ctx->pc = 0x149B00u;
    // 0x149b00: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x149b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_149b04:
    // 0x149b04: 0x185102a  slt         $v0, $t4, $a1
    ctx->pc = 0x149b04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x149b08: 0x1040ffe7  beqz        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x149B08u;
    {
        const bool branch_taken_0x149b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149B08u;
        // 0x149b0c: 0x25080080  addiu       $t0, $t0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149b08) {
            ctx->pc = 0x149AA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_149aa8;
        }
    }
    ctx->pc = 0x149B10u;
    // 0x149b10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x149b10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_149b14:
    // 0x149b14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x149b14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x149b18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x149b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x149B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149B1Cu;
        // 0x149b20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149B24u;
}
