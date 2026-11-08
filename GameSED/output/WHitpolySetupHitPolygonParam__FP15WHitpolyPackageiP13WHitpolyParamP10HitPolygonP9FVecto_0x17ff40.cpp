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

// Function: WHitpolySetupHitPolygonParam__FP15WHitpolyPackageiP13WHitpolyParamP10HitPolygonP9FVector32T4b
// Address: 0x17ff40 - 0x1802a0
void WHitpolySetupHitPolygonParam__FP15WHitpolyPackageiP13WHitpolyParamP10HitPolygonP9FVector32T4b_0x17ff40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WHitpolySetupHitPolygonParam__FP15WHitpolyPackageiP13WHitpolyParamP10HitPolygonP9FVector32T4b_0x17ff40");
#endif

    switch (ctx->pc) {
        case 0x17ffa0u: goto label_17ffa0;
        case 0x17ffc0u: goto label_17ffc0;
        case 0x17fff8u: goto label_17fff8;
        case 0x180030u: goto label_180030;
        case 0x180140u: goto label_180140;
        default: break;
    }

    ctx->pc = 0x17ff40u;

    // 0x17ff40: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x17ff40u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ff44: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17ff44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17ff48: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x17ff48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x17ff4c: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x17ff4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17ff50: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x17ff50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17ff54: 0x25c30020  addiu       $v1, $t6, 0x20
    ctx->pc = 0x17ff54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), 32));
    // 0x17ff58: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x17ff58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17ff5c: 0x25c20030  addiu       $v0, $t6, 0x30
    ctx->pc = 0x17ff5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), 48));
    // 0x17ff60: 0xadc60010  sw          $a2, 0x10($t6)
    ctx->pc = 0x17ff60u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 16), GPR_U32(ctx, 6));
    // 0x17ff64: 0xadc70014  sw          $a3, 0x14($t6)
    ctx->pc = 0x17ff64u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 20), GPR_U32(ctx, 7));
    // 0x17ff68: 0xadc80018  sw          $t0, 0x18($t6)
    ctx->pc = 0x17ff68u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 24), GPR_U32(ctx, 8));
    // 0x17ff6c: 0xadc9001c  sw          $t1, 0x1C($t6)
    ctx->pc = 0x17ff6cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 28), GPR_U32(ctx, 9));
    // 0x17ff70: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x17ff70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x17ff74: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x17ff74u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17ff78: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x17ff78u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17ff7c: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x17ff7cu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ff80: 0x18a000b9  blez        $a1, . + 4 + (0xB9 << 2)
    ctx->pc = 0x17FF80u;
    {
        const bool branch_taken_0x17ff80 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x17FF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FF80u;
        // 0x17ff84: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ff80) {
            ctx->pc = 0x180268u;
            goto label_180268;
        }
    }
    ctx->pc = 0x17FF88u;
    // 0x17ff88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17ff88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17ff8c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x17ff8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17ff90: 0x60c02d  daddu       $t8, $v1, $zero
    ctx->pc = 0x17ff90u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ff94: 0x40782d  daddu       $t7, $v0, $zero
    ctx->pc = 0x17ff94u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ff98: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x17ff98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17ff9c: 0x0  nop
    ctx->pc = 0x17ff9cu;
    // NOP
label_17ffa0:
    // 0x17ffa0: 0x94e20008  lhu         $v0, 0x8($a3)
    ctx->pc = 0x17ffa0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x17ffa4: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x17ffa4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ffa8: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x17ffa8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x17ffac: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x17ffacu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ffb0: 0x3842ffff  xori        $v0, $v0, 0xFFFF
    ctx->pc = 0x17ffb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)65535);
    // 0x17ffb4: 0x2c83000a  sltiu       $v1, $a0, 0xA
    ctx->pc = 0x17ffb4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x17ffb8: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x17FFB8u;
    {
        const bool branch_taken_0x17ffb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FFB8u;
        // 0x17ffbc: 0x2c4d0001  sltiu       $t5, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ffb8) {
            ctx->pc = 0x17FFDCu;
            goto label_17ffdc;
        }
    }
    ctx->pc = 0x17FFC0u;
label_17ffc0:
    // 0x17ffc0: 0x248300f6  addiu       $v1, $a0, 0xF6
    ctx->pc = 0x17ffc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 246));
    // 0x17ffc4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x17ffc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x17ffc8: 0x2c82000a  sltiu       $v0, $a0, 0xA
    ctx->pc = 0x17ffc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x17ffcc: 0x0  nop
    ctx->pc = 0x17ffccu;
    // NOP
    // 0x17ffd0: 0x0  nop
    ctx->pc = 0x17ffd0u;
    // NOP
    // 0x17ffd4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17FFD4u;
    {
        const bool branch_taken_0x17ffd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FFD4u;
        // 0x17ffd8: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ffd4) {
            ctx->pc = 0x17FFC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ffc0;
        }
    }
    ctx->pc = 0x17FFDCu;
label_17ffdc:
    // 0x17ffdc: 0x2962000b  slti        $v0, $t3, 0xB
    ctx->pc = 0x17ffdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x17ffe0: 0x2580a  movz        $t3, $zero, $v0
    ctx->pc = 0x17ffe0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 0));
    // 0x17ffe4: 0xa0cb000d  sb          $t3, 0xD($a2)
    ctx->pc = 0x17ffe4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 13), (uint8_t)GPR_U32(ctx, 11));
    // 0x17ffe8: 0x90e30001  lbu         $v1, 0x1($a3)
    ctx->pc = 0x17ffe8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x17ffec: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x17ffecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x17fff0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17FFF0u;
    {
        const bool branch_taken_0x17fff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FFF0u;
        // 0x17fff4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fff0) {
            ctx->pc = 0x180014u;
            goto label_180014;
        }
    }
    ctx->pc = 0x17FFF8u;
label_17fff8:
    // 0x17fff8: 0x246300f6  addiu       $v1, $v1, 0xF6
    ctx->pc = 0x17fff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 246));
    // 0x17fffc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x17fffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x180000: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x180000u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x180004: 0x0  nop
    ctx->pc = 0x180004u;
    // NOP
    // 0x180008: 0x0  nop
    ctx->pc = 0x180008u;
    // NOP
    // 0x18000c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18000Cu;
    {
        const bool branch_taken_0x18000c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18000Cu;
        // 0x180010: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18000c) {
            ctx->pc = 0x17FFF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17fff8;
        }
    }
    ctx->pc = 0x180014u;
label_180014:
    // 0x180014: 0x28820005  slti        $v0, $a0, 0x5
    ctx->pc = 0x180014u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x180018: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x180018u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x18001c: 0xa0c4000e  sb          $a0, 0xE($a2)
    ctx->pc = 0x18001cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 14), (uint8_t)GPR_U32(ctx, 4));
    // 0x180020: 0x90e30002  lbu         $v1, 0x2($a3)
    ctx->pc = 0x180020u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x180024: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x180024u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x180028: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x180028u;
    {
        const bool branch_taken_0x180028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18002Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180028u;
        // 0x18002c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180028) {
            ctx->pc = 0x18004Cu;
            goto label_18004c;
        }
    }
    ctx->pc = 0x180030u;
label_180030:
    // 0x180030: 0x246300f6  addiu       $v1, $v1, 0xF6
    ctx->pc = 0x180030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 246));
    // 0x180034: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x180034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x180038: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x180038u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x18003c: 0x0  nop
    ctx->pc = 0x18003cu;
    // NOP
    // 0x180040: 0x0  nop
    ctx->pc = 0x180040u;
    // NOP
    // 0x180044: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x180044u;
    {
        const bool branch_taken_0x180044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180044u;
        // 0x180048: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180044) {
            ctx->pc = 0x180030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_180030;
        }
    }
    ctx->pc = 0x18004Cu;
label_18004c:
    // 0x18004c: 0x29620005  slti        $v0, $t3, 0x5
    ctx->pc = 0x18004cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x180050: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x180050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x180054: 0x2580a  movz        $t3, $zero, $v0
    ctx->pc = 0x180054u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 0));
    // 0x180058: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x180058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18005c: 0xa0cb000f  sb          $t3, 0xF($a2)
    ctx->pc = 0x18005cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 15), (uint8_t)GPR_U32(ctx, 11));
    // 0x180060: 0xa0e30003  sb          $v1, 0x3($a3)
    ctx->pc = 0x180060u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x180064: 0x94e20004  lhu         $v0, 0x4($a3)
    ctx->pc = 0x180064u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x180068: 0x94e30006  lhu         $v1, 0x6($a3)
    ctx->pc = 0x180068u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x18006c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x18006cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x180070: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x180070u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x180074: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x180074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x180078: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x180078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x18007c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x18007cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x180080: 0x15a00004  bnez        $t5, . + 4 + (0x4 << 2)
    ctx->pc = 0x180080u;
    {
        const bool branch_taken_0x180080 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x180084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180080u;
        // 0x180084: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180080) {
            ctx->pc = 0x180094u;
            goto label_180094;
        }
    }
    ctx->pc = 0x180088u;
    // 0x180088: 0x94e20008  lhu         $v0, 0x8($a3)
    ctx->pc = 0x180088u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x18008c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x18008cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x180090: 0x1022021  addu        $a0, $t0, $v0
    ctx->pc = 0x180090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_180094:
    // 0x180094: 0x94e2000a  lhu         $v0, 0xA($a3)
    ctx->pc = 0x180094u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x180098: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x180098u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18009c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x18009cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1800a0: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x1800a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x1800a4: 0x1225821  addu        $t3, $t1, $v0
    ctx->pc = 0x1800a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1800a8: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x1800a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1800ac: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1800acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1800b0: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x1800B0u;
    {
        const bool branch_taken_0x1800b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1800b0) {
            ctx->pc = 0x1800B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1800B0u;
            // 0x1800b4: 0xc5610004  lwc1        $f1, 0x4($t3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1800CCu;
            goto label_1800cc;
        }
    }
    ctx->pc = 0x1800B8u;
    // 0x1800b8: 0xc5600008  lwc1        $f0, 0x8($t3)
    ctx->pc = 0x1800b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1800bc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1800bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1800c0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1800C0u;
    {
        const bool branch_taken_0x1800c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1800c0) {
            ctx->pc = 0x1800C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1800C0u;
            // 0x1800c4: 0x358c0001  ori         $t4, $t4, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1800C8u;
            goto label_1800c8;
        }
    }
    ctx->pc = 0x1800C8u;
label_1800c8:
    // 0x1800c8: 0xc5610004  lwc1        $f1, 0x4($t3)
    ctx->pc = 0x1800c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1800cc:
    // 0x1800cc: 0xc780855c  lwc1        $f0, -0x7AA4($gp)
    ctx->pc = 0x1800ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1800d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1800d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1800d4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1800D4u;
    {
        const bool branch_taken_0x1800d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1800d4) {
            ctx->pc = 0x1800D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1800D4u;
            // 0x1800d8: 0x358c0002  ori         $t4, $t4, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1800DCu;
            goto label_1800dc;
        }
    }
    ctx->pc = 0x1800DCu;
label_1800dc:
    // 0x1800dc: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x1800dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x1800e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1800e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1800e4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1800e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1800e8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1800E8u;
    {
        const bool branch_taken_0x1800e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1800e8) {
            ctx->pc = 0x1800ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1800E8u;
            // 0x1800ec: 0x358c0008  ori         $t4, $t4, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1800F0u;
            goto label_1800f0;
        }
    }
    ctx->pc = 0x1800F0u;
label_1800f0:
    // 0x1800f0: 0x55a00001  bnel        $t5, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1800F0u;
    {
        const bool branch_taken_0x1800f0 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x1800f0) {
            ctx->pc = 0x1800F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1800F0u;
            // 0x1800f4: 0x358c0004  ori         $t4, $t4, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1800F8u;
            goto label_1800f8;
        }
    }
    ctx->pc = 0x1800F8u;
label_1800f8:
    // 0x1800f8: 0xa0cc000c  sb          $t4, 0xC($a2)
    ctx->pc = 0x1800f8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 12), (uint8_t)GPR_U32(ctx, 12));
    // 0x1800fc: 0x20c8025  or          $s0, $s0, $t4
    ctx->pc = 0x1800fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 12));
    // 0x180100: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x180100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180104: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x180104u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x180108: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x180108u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18010c: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x18010cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x180110: 0xd8c60010  lqc2        $vf6, 0x10($a2)
    ctx->pc = 0x180110u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x180114: 0x4a212b3c  vmove.w     $vf1, $vf5
    ctx->pc = 0x180114u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x180118: 0x4a22333c  vmove.w     $vf2, $vf6
    ctx->pc = 0x180118u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[6], _mm_castsi128_ps(mask)); }
    // 0x18011c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18011cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x180120: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180124: 0x24d180a  movz        $v1, $s2, $t5
    ctx->pc = 0x180124u;
    if (GPR_U64(ctx, 13) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 18));
    // 0x180128: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x180128u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18012c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x18012Cu;
    {
        const bool branch_taken_0x18012c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18012c) {
            ctx->pc = 0x180164u;
            goto label_180164;
        }
    }
    ctx->pc = 0x180134u;
    // 0x180134: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x180134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x180138: 0x27a40004  addiu       $a0, $sp, 0x4
    ctx->pc = 0x180138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x18013c: 0x0  nop
    ctx->pc = 0x18013cu;
    // NOP
label_180140:
    // 0x180140: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x180140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x180144: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x180144u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x180148: 0x4bc5086f  vmini.xyz   $vf1, $vf1, $vf5
    ctx->pc = 0x180148u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18014c: 0x4bc510ab  vmax.xyz    $vf2, $vf2, $vf5
    ctx->pc = 0x18014cu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x180150: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x180150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x180154: 0x0  nop
    ctx->pc = 0x180154u;
    // NOP
    // 0x180158: 0x0  nop
    ctx->pc = 0x180158u;
    // NOP
    // 0x18015c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x18015Cu;
    {
        const bool branch_taken_0x18015c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x180160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18015Cu;
        // 0x180160: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18015c) {
            ctx->pc = 0x180140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_180140;
        }
    }
    ctx->pc = 0x180164u;
label_180164:
    // 0x180164: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x180164u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x180168: 0xf8c20010  sqc2        $vf2, 0x10($a2)
    ctx->pc = 0x180168u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x18016c: 0x15a00023  bnez        $t5, . + 4 + (0x23 << 2)
    ctx->pc = 0x18016Cu;
    {
        const bool branch_taken_0x18016c = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x180170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18016Cu;
        // 0x180170: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18016c) {
            ctx->pc = 0x1801FCu;
            goto label_1801fc;
        }
    }
    ctx->pc = 0x180174u;
    // 0x180174: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x180174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x180178: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x180178u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18017c: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x18017cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x180180: 0x4bc521ac  vsub.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x180180u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x180184: 0x4bc631ea  vmul.xyz    $vf7, $vf6, $vf6
    ctx->pc = 0x180184u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x180188: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x180188u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x18018c: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x18018cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x180190: 0x4a2703bd  .word       0x4A2703BD                   # vsqrt       $Q, $vf7x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x180190u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x180194: 0x4a0003bf  vwaitq
    ctx->pc = 0x180194u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x180198: 0x4b0001e0  vaddq.x     $vf7, $vf0, $Q
    ctx->pc = 0x180198u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x18019c: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x18019cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1801a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1801a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1801a4: 0xe4c10020  swc1        $f1, 0x20($a2)
    ctx->pc = 0x1801a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
    // 0x1801a8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1801a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1801ac: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1801acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1801b0: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x1801b0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1801b4: 0x4bc521ac  vsub.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x1801b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1801b8: 0x4bc631ea  vmul.xyz    $vf7, $vf6, $vf6
    ctx->pc = 0x1801b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1801bc: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x1801bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1801c0: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x1801c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1801c4: 0x4a2703bd  .word       0x4A2703BD                   # vsqrt       $Q, $vf7x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1801c4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x1801c8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1801c8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1801cc: 0x4b0001e0  vaddq.x     $vf7, $vf0, $Q
    ctx->pc = 0x1801ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1801d0: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x1801d0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1801d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1801d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1801d8: 0x0  nop
    ctx->pc = 0x1801d8u;
    // NOP
    // 0x1801dc: 0x0  nop
    ctx->pc = 0x1801dcu;
    // NOP
    // 0x1801e0: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1801e0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1801e4: 0xe4c00024  swc1        $f0, 0x24($a2)
    ctx->pc = 0x1801e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
    // 0x1801e8: 0x0  nop
    ctx->pc = 0x1801e8u;
    // NOP
    // 0x1801ec: 0x0  nop
    ctx->pc = 0x1801ecu;
    // NOP
    // 0x1801f0: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1801f0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1801f4: 0xe4c10028  swc1        $f1, 0x28($a2)
    ctx->pc = 0x1801f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
    // 0x1801f8: 0xe4c0002c  swc1        $f0, 0x2C($a2)
    ctx->pc = 0x1801f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 44), bits); }
label_1801fc:
    // 0x1801fc: 0x1540000c  bnez        $t2, . + 4 + (0xC << 2)
    ctx->pc = 0x1801FCu;
    {
        const bool branch_taken_0x1801fc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x1801fc) {
            ctx->pc = 0x180230u;
            goto label_180230;
        }
    }
    ctx->pc = 0x180204u;
    // 0x180204: 0x11a0000a  beqz        $t5, . + 4 + (0xA << 2)
    ctx->pc = 0x180204u;
    {
        const bool branch_taken_0x180204 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x180204) {
            ctx->pc = 0x180230u;
            goto label_180230;
        }
    }
    ctx->pc = 0x18020Cu;
    // 0x18020c: 0xc5610004  lwc1        $f1, 0x4($t3)
    ctx->pc = 0x18020cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180210: 0xc7808560  lwc1        $f0, -0x7AA0($gp)
    ctx->pc = 0x180210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180214: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x180214u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180218: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x180218u;
    {
        const bool branch_taken_0x180218 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x180218) {
            ctx->pc = 0x180230u;
            goto label_180230;
        }
    }
    ctx->pc = 0x180220u;
    // 0x180220: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x180220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180224: 0x320882d  daddu       $s1, $t9, $zero
    ctx->pc = 0x180224u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180228: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x180228u;
    {
        const bool branch_taken_0x180228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180228u;
        // 0x18022c: 0x460000c7  neg.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x180228) {
            ctx->pc = 0x180254u;
            goto label_180254;
        }
    }
    ctx->pc = 0x180230u;
label_180230:
    // 0x180230: 0xdb010000  lqc2        $vf1, 0x0($t8)
    ctx->pc = 0x180230u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x180234: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x180234u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x180238: 0x4bc2086f  vmini.xyz   $vf1, $vf1, $vf2
    ctx->pc = 0x180238u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18023c: 0xfb010000  sqc2        $vf1, 0x0($t8)
    ctx->pc = 0x18023cu;
    WRITE128(ADD32(GPR_U32(ctx, 24), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x180240: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x180240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x180244: 0xd9e10000  lqc2        $vf1, 0x0($t7)
    ctx->pc = 0x180244u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x180248: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x180248u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18024c: 0x4bc2086b  vmax.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x18024cu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x180250: 0xf9e10000  sqc2        $vf1, 0x0($t7)
    ctx->pc = 0x180250u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_180254:
    // 0x180254: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x180254u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x180258: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x180258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x18025c: 0x325102a  slt         $v0, $t9, $a1
    ctx->pc = 0x18025cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x180260: 0x1440ff4f  bnez        $v0, . + 4 + (-0xB1 << 2)
    ctx->pc = 0x180260u;
    {
        const bool branch_taken_0x180260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x180264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180260u;
        // 0x180264: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180260) {
            ctx->pc = 0x17FFA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ffa0;
        }
    }
    ctx->pc = 0x180268u;
label_180268:
    // 0x180268: 0x55400005  bnel        $t2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x180268u;
    {
        const bool branch_taken_0x180268 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x180268) {
            ctx->pc = 0x18026Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180268u;
            // 0x18026c: 0xa5d00000  sh          $s0, 0x0($t6) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180280u;
            goto label_180280;
        }
    }
    ctx->pc = 0x180270u;
    // 0x180270: 0x2e220001  sltiu       $v0, $s1, 0x1
    ctx->pc = 0x180270u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x180274: 0xa1d10004  sb          $s1, 0x4($t6)
    ctx->pc = 0x180274u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 4), (uint8_t)GPR_U32(ctx, 17));
    // 0x180278: 0xa1c20005  sb          $v0, 0x5($t6)
    ctx->pc = 0x180278u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x18027c: 0xa5d00000  sh          $s0, 0x0($t6)
    ctx->pc = 0x18027cu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 16));
label_180280:
    // 0x180280: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x180280u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x180284: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x180284u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180288: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x180288u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18028c: 0xe5c3000c  swc1        $f3, 0xC($t6)
    ctx->pc = 0x18028cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 12), bits); }
    // 0x180290: 0xa5c50002  sh          $a1, 0x2($t6)
    ctx->pc = 0x180290u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x180294: 0xadc00008  sw          $zero, 0x8($t6)
    ctx->pc = 0x180294u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 0));
    // 0x180298: 0x3e00008  jr          $ra
    ctx->pc = 0x180298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18029Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180298u;
        // 0x18029c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1802A0u;
}
