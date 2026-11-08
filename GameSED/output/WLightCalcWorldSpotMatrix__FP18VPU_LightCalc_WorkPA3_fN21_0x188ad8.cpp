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

// Function: WLightCalcWorldSpotMatrix__FP18VPU_LightCalc_WorkPA3_fN21
// Address: 0x188ad8 - 0x18929c
void WLightCalcWorldSpotMatrix__FP18VPU_LightCalc_WorkPA3_fN21_0x188ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WLightCalcWorldSpotMatrix__FP18VPU_LightCalc_WorkPA3_fN21_0x188ad8");
#endif

    switch (ctx->pc) {
        case 0x188b40u: goto label_188b40;
        case 0x188b88u: goto label_188b88;
        case 0x188c20u: goto label_188c20;
        case 0x188c3cu: goto label_188c3c;
        case 0x188c48u: goto label_188c48;
        case 0x188d28u: goto label_188d28;
        case 0x188e28u: goto label_188e28;
        case 0x188e30u: goto label_188e30;
        case 0x188ee0u: goto label_188ee0;
        case 0x188ef4u: goto label_188ef4;
        case 0x1890e0u: goto label_1890e0;
        case 0x1890f4u: goto label_1890f4;
        default: break;
    }

    ctx->pc = 0x188ad8u;

    // 0x188ad8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x188ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x188adc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x188adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188ae0: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x188ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x188ae4: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x188ae4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188ae8: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x188ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x188aec: 0x27d10110  addiu       $s1, $fp, 0x110
    ctx->pc = 0x188aecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 272));
    // 0x188af0: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x188af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x188af4: 0x27d30010  addiu       $s3, $fp, 0x10
    ctx->pc = 0x188af4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x188af8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x188af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x188afc: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x188afcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x188b00: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x188b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x188b04: 0x2468ed60  addiu       $t0, $v1, -0x12A0
    ctx->pc = 0x188b04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962528));
    // 0x188b08: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x188b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x188b0c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x188b0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188b10: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x188b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x188b14: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x188b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x188b18: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x188b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x188b1c: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x188b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x188b20: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x188b20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x188b24: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x188b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x188b28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x188b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188b2c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x188b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x188b30: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x188b30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x188b34: 0x8fc60000  lw          $a2, 0x0($fp)
    ctx->pc = 0x188b34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x188b38: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x188b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x188b3c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x188b3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_188b40:
    // 0x188b40: 0x24a300a0  addiu       $v1, $a1, 0xA0
    ctx->pc = 0x188b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
    // 0x188b44: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x188b44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x188b48: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x188b48u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x188b4c: 0x24a400d0  addiu       $a0, $a1, 0xD0
    ctx->pc = 0x188b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
    // 0x188b50: 0xf8800000  sqc2        $vf0, 0x0($a0)
    ctx->pc = 0x188b50u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x188b54: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x188b54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x188b58: 0x4e1fff9  bgez        $a3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x188B58u;
    {
        const bool branch_taken_0x188b58 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x188B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188B58u;
        // 0x188b5c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188b58) {
            ctx->pc = 0x188B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188b40;
        }
    }
    ctx->pc = 0x188B60u;
    // 0x188b60: 0x25220090  addiu       $v0, $t1, 0x90
    ctx->pc = 0x188b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 144));
    // 0x188b64: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x188b64u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x188b68: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x188b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x188b6c: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x188b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x188b70: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x188b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x188b74: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x188b74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x188b78: 0x2448ed60  addiu       $t0, $v0, -0x12A0
    ctx->pc = 0x188b78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962528));
    // 0x188b7c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x188b7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188b80: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x188b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188b84: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x188b84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_188b88:
    // 0x188b88: 0x24a300a0  addiu       $v1, $a1, 0xA0
    ctx->pc = 0x188b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
    // 0x188b8c: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x188b8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x188b90: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x188b90u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x188b94: 0x24a400d0  addiu       $a0, $a1, 0xD0
    ctx->pc = 0x188b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
    // 0x188b98: 0xf8800000  sqc2        $vf0, 0x0($a0)
    ctx->pc = 0x188b98u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x188b9c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x188b9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x188ba0: 0x4e1fff9  bgez        $a3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x188BA0u;
    {
        const bool branch_taken_0x188ba0 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x188BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188BA0u;
        // 0x188ba4: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188ba0) {
            ctx->pc = 0x188B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188b88;
        }
    }
    ctx->pc = 0x188BA8u;
    // 0x188ba8: 0x25220090  addiu       $v0, $t1, 0x90
    ctx->pc = 0x188ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 144));
    // 0x188bac: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x188bacu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x188bb0: 0x8cc401bc  lw          $a0, 0x1BC($a2)
    ctx->pc = 0x188bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 444)));
    // 0x188bb4: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x188bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x188bb8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x188bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x188bbc: 0x246301e0  addiu       $v1, $v1, 0x1E0
    ctx->pc = 0x188bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 480));
    // 0x188bc0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x188bc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x188bc4: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x188bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x188bc8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x188bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188bcc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x188bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x188bd0: 0x8cd201c4  lw          $s2, 0x1C4($a2)
    ctx->pc = 0x188bd0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 452)));
    // 0x188bd4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x188bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x188bd8: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x188bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x188bdc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x188bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x188be0: 0x8e520134  lw          $s2, 0x134($s2)
    ctx->pc = 0x188be0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 308)));
    // 0x188be4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x188be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x188be8: 0xafc00220  sw          $zero, 0x220($fp)
    ctx->pc = 0x188be8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 544), GPR_U32(ctx, 0));
    // 0x188bec: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x188becu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x188bf0: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x188bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x188bf4: 0x124000a5  beqz        $s2, . + 4 + (0xA5 << 2)
    ctx->pc = 0x188BF4u;
    {
        const bool branch_taken_0x188bf4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x188BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188BF4u;
        // 0x188bf8: 0xafc00224  sw          $zero, 0x224($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 548), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188bf4) {
            ctx->pc = 0x188E8Cu;
            goto label_188e8c;
        }
    }
    ctx->pc = 0x188BFCu;
    // 0x188bfc: 0x26620090  addiu       $v0, $s3, 0x90
    ctx->pc = 0x188bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    // 0x188c00: 0x27c30220  addiu       $v1, $fp, 0x220
    ctx->pc = 0x188c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 544));
    // 0x188c04: 0x27c40210  addiu       $a0, $fp, 0x210
    ctx->pc = 0x188c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 528));
    // 0x188c08: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x188c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x188c0c: 0xafb3001c  sw          $s3, 0x1C($sp)
    ctx->pc = 0x188c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 19));
    // 0x188c10: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x188c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x188c14: 0xafa40024  sw          $a0, 0x24($sp)
    ctx->pc = 0x188c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
    // 0x188c18: 0xafb10028  sw          $s1, 0x28($sp)
    ctx->pc = 0x188c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 17));
    // 0x188c1c: 0x26540020  addiu       $s4, $s2, 0x20
    ctx->pc = 0x188c1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_188c20:
    // 0x188c20: 0x8e550150  lw          $s5, 0x150($s2)
    ctx->pc = 0x188c20u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
    // 0x188c24: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x188c24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x188c28: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x188c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x188c2c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x188C2Cu;
    {
        const bool branch_taken_0x188c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188C2Cu;
        // 0x188c30: 0x2a0b02d  daddu       $s6, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188c2c) {
            ctx->pc = 0x188C3Cu;
            goto label_188c3c;
        }
    }
    ctx->pc = 0x188C34u;
    // 0x188c34: 0xc061920  jal         func_186480
    ctx->pc = 0x188C34u;
    SET_GPR_U32(ctx, 31, 0x188C3Cu);
    ctx->pc = 0x188C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188C34u;
    // 0x188c38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x188C34u, 0x188C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188C3Cu;
label_188c3c:
    // 0x188c3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x188c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188c40: 0xc061422  jal         func_185088
    ctx->pc = 0x188C40u;
    SET_GPR_U32(ctx, 31, 0x188C48u);
    ctx->pc = 0x188C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188C40u;
    // 0x188c44: 0x26500110  addiu       $s0, $s2, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x188C40u, 0x188C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188C48u;
label_188c48:
    // 0x188c48: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x188c48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188c4c: 0x265700e0  addiu       $s7, $s2, 0xE0
    ctx->pc = 0x188c4cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
    // 0x188c50: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x188c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x188c54: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x188c54u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x188c58: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x188c58u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x188c5c: 0x4bc521ac  vsub.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x188c5cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x188c60: 0x4bc631ea  vmul.xyz    $vf7, $vf6, $vf6
    ctx->pc = 0x188c60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x188c64: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x188c64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x188c68: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x188c68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x188c6c: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x188c6cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x188c70: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x188c70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x188c74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x188c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188c78: 0xc6400158  lwc1        $f0, 0x158($s2)
    ctx->pc = 0x188c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188c7c: 0x16a4004c  bne         $s5, $a0, . + 4 + (0x4C << 2)
    ctx->pc = 0x188C7Cu;
    {
        const bool branch_taken_0x188c7c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 4));
        ctx->pc = 0x188C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188C7Cu;
        // 0x188c80: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x188c7c) {
            ctx->pc = 0x188DB0u;
            goto label_188db0;
        }
    }
    ctx->pc = 0x188C84u;
    // 0x188c84: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x188c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188c88: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x188c88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x188c8c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x188C8Cu;
    {
        const bool branch_taken_0x188c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188C8Cu;
        // 0x188c90: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188c8c) {
            ctx->pc = 0x188D18u;
            goto label_188d18;
        }
    }
    ctx->pc = 0x188C94u;
    // 0x188c94: 0xc7c00004  lwc1        $f0, 0x4($fp)
    ctx->pc = 0x188c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188c98: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x188c98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188c9c: 0x45020079  bc1fl       . + 4 + (0x79 << 2)
    ctx->pc = 0x188C9Cu;
    {
        const bool branch_taken_0x188c9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x188c9c) {
            ctx->pc = 0x188CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188C9Cu;
            // 0x188ca0: 0x8e520134  lw          $s2, 0x134($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 308)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188E84u;
            goto label_188e84;
        }
    }
    ctx->pc = 0x188CA4u;
    // 0x188ca4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x188ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x188ca8: 0x26430220  addiu       $v1, $s2, 0x220
    ctx->pc = 0x188ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 544));
    // 0x188cac: 0x248500d0  addiu       $a1, $a0, 0xD0
    ctx->pc = 0x188cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    // 0x188cb0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x188cb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x188cb4: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x188cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x188cb8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x188cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x188cbc: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x188cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x188cc0: 0x244300a0  addiu       $v1, $v0, 0xA0
    ctx->pc = 0x188cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x188cc4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x188cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x188cc8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x188cc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x188ccc: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x188cccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x188cd0: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x188cd0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x188cd4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x188cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x188cd8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x188cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x188cdc: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x188cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x188ce0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x188ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x188ce4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x188ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x188ce8: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x188ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x188cec: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x188cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x188cf0: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x188cf0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x188cf4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x188cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x188cf8: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x188cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x188cfc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x188cfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x188d00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x188d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188d04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x188d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x188d08: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x188d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x188d0c: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x188D0Cu;
    {
        const bool branch_taken_0x188d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D0Cu;
        // 0x188d10: 0xae240004  sw          $a0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d0c) {
            ctx->pc = 0x188E80u;
            goto label_188e80;
        }
    }
    ctx->pc = 0x188D14u;
    // 0x188d14: 0x0  nop
    ctx->pc = 0x188d14u;
    // NOP
label_188d18:
    // 0x188d18: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x188d18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x188d1c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x188d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188d20: 0x27c30210  addiu       $v1, $fp, 0x210
    ctx->pc = 0x188d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 528));
    // 0x188d24: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x188d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_188d28:
    // 0x188d28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x188d28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188d2c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x188D2Cu;
    {
        const bool branch_taken_0x188d2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x188D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D2Cu;
        // 0x188d30: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d2c) {
            ctx->pc = 0x188D3Cu;
            goto label_188d3c;
        }
    }
    ctx->pc = 0x188D34u;
    // 0x188d34: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x188d34u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x188d38: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x188d38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_188d3c:
    // 0x188d3c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x188d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x188d40: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x188d40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x188d44: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x188D44u;
    {
        const bool branch_taken_0x188d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x188d44) {
            ctx->pc = 0x188D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188D44u;
            // 0x188d48: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x188D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188d28;
        }
    }
    ctx->pc = 0x188D4Cu;
    // 0x188d4c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x188d4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188d50: 0x4502004c  bc1fl       . + 4 + (0x4C << 2)
    ctx->pc = 0x188D50u;
    {
        const bool branch_taken_0x188d50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x188d50) {
            ctx->pc = 0x188D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188D50u;
            // 0x188d54: 0x8e520134  lw          $s2, 0x134($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 308)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188E84u;
            goto label_188e84;
        }
    }
    ctx->pc = 0x188D58u;
    // 0x188d58: 0x72900  sll         $a1, $a3, 4
    ctx->pc = 0x188d58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x188d5c: 0x26460220  addiu       $a2, $s2, 0x220
    ctx->pc = 0x188d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 544));
    // 0x188d60: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x188d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x188d64: 0x24a300d0  addiu       $v1, $a1, 0xD0
    ctx->pc = 0x188d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
    // 0x188d68: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x188d68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x188d6c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x188d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x188d70: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x188d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x188d74: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x188d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x188d78: 0x24a500a0  addiu       $a1, $a1, 0xA0
    ctx->pc = 0x188d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
    // 0x188d7c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x188d7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x188d80: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x188d80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x188d84: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x188d84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x188d88: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x188d88u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x188d8c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x188d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x188d90: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x188d90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x188d94: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x188d94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x188d98: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x188d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x188d9c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x188d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x188da0: 0xe4420210  swc1        $f2, 0x210($v0)
    ctx->pc = 0x188da0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 528), bits); }
    // 0x188da4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x188DA4u;
    {
        const bool branch_taken_0x188da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188DA4u;
        // 0x188da8: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188da4) {
            ctx->pc = 0x188E80u;
            goto label_188e80;
        }
    }
    ctx->pc = 0x188DACu;
    // 0x188dac: 0x0  nop
    ctx->pc = 0x188dacu;
    // NOP
label_188db0:
    // 0x188db0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x188db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x188db4: 0x56c20033  bnel        $s6, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x188DB4u;
    {
        const bool branch_taken_0x188db4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x188db4) {
            ctx->pc = 0x188DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188DB4u;
            // 0x188db8: 0x8e520134  lw          $s2, 0x134($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 308)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188E84u;
            goto label_188e84;
        }
    }
    ctx->pc = 0x188DBCu;
    // 0x188dbc: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x188dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x188dc0: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x188dc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x188dc4: 0x5040002f  beql        $v0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x188DC4u;
    {
        const bool branch_taken_0x188dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188dc4) {
            ctx->pc = 0x188DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188DC4u;
            // 0x188dc8: 0x8e520134  lw          $s2, 0x134($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 308)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188E84u;
            goto label_188e84;
        }
    }
    ctx->pc = 0x188DCCu;
    // 0x188dcc: 0xc7c00004  lwc1        $f0, 0x4($fp)
    ctx->pc = 0x188dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188dd0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x188dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x188dd4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x188dd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x188dd8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x188dd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x188ddc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x188ddcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188de0: 0x45020028  bc1fl       . + 4 + (0x28 << 2)
    ctx->pc = 0x188DE0u;
    {
        const bool branch_taken_0x188de0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x188de0) {
            ctx->pc = 0x188DE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188DE0u;
            // 0x188de4: 0x8e520134  lw          $s2, 0x134($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 308)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188E84u;
            goto label_188e84;
        }
    }
    ctx->pc = 0x188DE8u;
    // 0x188de8: 0x26430220  addiu       $v1, $s2, 0x220
    ctx->pc = 0x188de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 544));
    // 0x188dec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x188decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x188df0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x188df0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x188df4: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x188df4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x188df8: 0x3c151000  lui         $s5, 0x1000
    ctx->pc = 0x188df8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)4096 << 16));
    // 0x188dfc: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x188dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x188e00: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x188e00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x188e04: 0x952025  or          $a0, $a0, $s5
    ctx->pc = 0x188e04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 21));
    // 0x188e08: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x188e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188e0c: 0xae640004  sw          $a0, 0x4($s3)
    ctx->pc = 0x188e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 4));
    // 0x188e10: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x188e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x188e14: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x188e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188e18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x188E18u;
    {
        const bool branch_taken_0x188e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188E18u;
        // 0x188e1c: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x188e18) {
            ctx->pc = 0x188E28u;
            goto label_188e28;
        }
    }
    ctx->pc = 0x188E20u;
    // 0x188e20: 0xc061920  jal         func_186480
    ctx->pc = 0x188E20u;
    SET_GPR_U32(ctx, 31, 0x188E28u);
    ctx->pc = 0x188E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188E20u;
    // 0x188e24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x188E20u, 0x188E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188E28u;
label_188e28:
    // 0x188e28: 0xc061422  jal         func_185088
    ctx->pc = 0x188E28u;
    SET_GPR_U32(ctx, 31, 0x188E30u);
    ctx->pc = 0x188E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188E28u;
    // 0x188e2c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x188E28u, 0x188E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188E30u;
label_188e30:
    // 0x188e30: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x188e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x188e34: 0x248300a0  addiu       $v1, $a0, 0xA0
    ctx->pc = 0x188e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x188e38: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x188e38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x188e3c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x188e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x188e40: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x188e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x188e44: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x188e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x188e48: 0x952025  or          $a0, $a0, $s5
    ctx->pc = 0x188e48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 21));
    // 0x188e4c: 0x244300d0  addiu       $v1, $v0, 0xD0
    ctx->pc = 0x188e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x188e50: 0xae640004  sw          $a0, 0x4($s3)
    ctx->pc = 0x188e50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 4));
    // 0x188e54: 0x7ae20020  lq          $v0, 0x20($s7)
    ctx->pc = 0x188e54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 23), 32)));
    // 0x188e58: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x188e58u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x188e5c: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x188e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x188e60: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x188e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188e64: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x188e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x188e68: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x188e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x188e6c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x188e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x188e70: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x188e70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x188e74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x188e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x188e78: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x188e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x188e7c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x188e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_188e80:
    // 0x188e80: 0x8e520134  lw          $s2, 0x134($s2)
    ctx->pc = 0x188e80u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 308)));
label_188e84:
    // 0x188e84: 0x5640ff66  bnel        $s2, $zero, . + 4 + (-0x9A << 2)
    ctx->pc = 0x188E84u;
    {
        const bool branch_taken_0x188e84 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x188e84) {
            ctx->pc = 0x188E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188E84u;
            // 0x188e88: 0x26540020  addiu       $s4, $s2, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188C20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188c20;
        }
    }
    ctx->pc = 0x188E8Cu;
label_188e8c:
    // 0x188e8c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x188e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x188e90: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x188e90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x188e94: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x188e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x188e98: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x188E98u;
    {
        const bool branch_taken_0x188e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188E98u;
        // 0x188e9c: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188e98) {
            ctx->pc = 0x188FB0u;
            goto label_188fb0;
        }
    }
    ctx->pc = 0x188EA0u;
    // 0x188ea0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x188ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x188ea4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x188ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188ea8: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x188EA8u;
    {
        const bool branch_taken_0x188ea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x188EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188EA8u;
        // 0x188eac: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188ea8) {
            ctx->pc = 0x188F00u;
            goto label_188f00;
        }
    }
    ctx->pc = 0x188EB0u;
    // 0x188eb0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x188EB0u;
    {
        const bool branch_taken_0x188eb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x188EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188EB0u;
        // 0x188eb4: 0x262500d0  addiu       $a1, $s1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188eb0) {
            ctx->pc = 0x188ED0u;
            goto label_188ed0;
        }
    }
    ctx->pc = 0x188EB8u;
    // 0x188eb8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x188eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x188ebc: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x188EBCu;
    {
        const bool branch_taken_0x188ebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x188EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188EBCu;
        // 0x188ec0: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188ebc) {
            ctx->pc = 0x188F60u;
            goto label_188f60;
        }
    }
    ctx->pc = 0x188EC4u;
    // 0x188ec4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x188EC4u;
    {
        const bool branch_taken_0x188ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188EC4u;
        // 0x188ec8: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188ec4) {
            ctx->pc = 0x188FA0u;
            goto label_188fa0;
        }
    }
    ctx->pc = 0x188ECCu;
    // 0x188ecc: 0x0  nop
    ctx->pc = 0x188eccu;
    // NOP
label_188ed0:
    // 0x188ed0: 0x262600e0  addiu       $a2, $s1, 0xE0
    ctx->pc = 0x188ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x188ed4: 0x262700f0  addiu       $a3, $s1, 0xF0
    ctx->pc = 0x188ed4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    // 0x188ed8: 0xc06f060  jal         func_1BC180
    ctx->pc = 0x188ED8u;
    SET_GPR_U32(ctx, 31, 0x188EE0u);
    ctx->pc = 0x188EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188ED8u;
    // 0x188edc: 0x26280090  addiu       $t0, $s1, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC180u, 0x188ED8u, 0x188EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188EE0u;
label_188ee0:
    // 0x188ee0: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x188ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x188ee4: 0x262500a0  addiu       $a1, $s1, 0xA0
    ctx->pc = 0x188ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x188ee8: 0x262600b0  addiu       $a2, $s1, 0xB0
    ctx->pc = 0x188ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x188eec: 0xc06f030  jal         func_1BC0C0
    ctx->pc = 0x188EECu;
    SET_GPR_U32(ctx, 31, 0x188EF4u);
    ctx->pc = 0x188EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188EECu;
    // 0x188ef0: 0x262700c0  addiu       $a3, $s1, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC0C0u, 0x188EECu, 0x188EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188EF4u;
label_188ef4:
    // 0x188ef4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x188EF4u;
    {
        const bool branch_taken_0x188ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188EF4u;
        // 0x188ef8: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188ef4) {
            ctx->pc = 0x188FA0u;
            goto label_188fa0;
        }
    }
    ctx->pc = 0x188EFCu;
    // 0x188efc: 0x0  nop
    ctx->pc = 0x188efcu;
    // NOP
label_188f00:
    // 0x188f00: 0x262200d0  addiu       $v0, $s1, 0xD0
    ctx->pc = 0x188f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    // 0x188f04: 0x26230090  addiu       $v1, $s1, 0x90
    ctx->pc = 0x188f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x188f08: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x188f08u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188f0c: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x188f0cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x188f10: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x188f10u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x188f14: 0xd8670000  lqc2        $vf7, 0x0($v1)
    ctx->pc = 0x188f14u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x188f18: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x188f18u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x188f1c: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x188f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x188f20: 0xf8860020  sqc2        $vf6, 0x20($a0)
    ctx->pc = 0x188f20u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x188f24: 0xf8870030  sqc2        $vf7, 0x30($a0)
    ctx->pc = 0x188f24u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x188f28: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x188f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x188f2c: 0x262200a0  addiu       $v0, $s1, 0xA0
    ctx->pc = 0x188f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x188f30: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x188f30u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188f34: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x188f34u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x188f38: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x188f38u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x188f3c: 0x4a24033c  vmove.w     $vf4, $vf0
    ctx->pc = 0x188f3cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x188f40: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x188f40u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x188f44: 0x4a26033c  vmove.w     $vf6, $vf0
    ctx->pc = 0x188f44u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x188f48: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x188f48u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x188f4c: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x188f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x188f50: 0xf8860020  sqc2        $vf6, 0x20($a0)
    ctx->pc = 0x188f50u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x188f54: 0xf8800030  sqc2        $vf0, 0x30($a0)
    ctx->pc = 0x188f54u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x188f58: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x188F58u;
    {
        const bool branch_taken_0x188f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188F58u;
        // 0x188f5c: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188f58) {
            ctx->pc = 0x188FA0u;
            goto label_188fa0;
        }
    }
    ctx->pc = 0x188F60u;
label_188f60:
    // 0x188f60: 0x262200a0  addiu       $v0, $s1, 0xA0
    ctx->pc = 0x188f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x188f64: 0x262300d0  addiu       $v1, $s1, 0xD0
    ctx->pc = 0x188f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    // 0x188f68: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x188f68u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188f6c: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x188f6cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x188f70: 0xd8460010  lqc2        $vf6, 0x10($v0)
    ctx->pc = 0x188f70u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x188f74: 0xd8670010  lqc2        $vf7, 0x10($v1)
    ctx->pc = 0x188f74u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x188f78: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x188f78u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x188f7c: 0x4a24033c  vmove.w     $vf4, $vf0
    ctx->pc = 0x188f7cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x188f80: 0x4a250b3c  vmove.w     $vf5, $vf1
    ctx->pc = 0x188f80u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[1], _mm_castsi128_ps(mask)); }
    // 0x188f84: 0x4a26033c  vmove.w     $vf6, $vf0
    ctx->pc = 0x188f84u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x188f88: 0x4a270b3c  vmove.w     $vf7, $vf1
    ctx->pc = 0x188f88u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], ctx->vu0_vf[1], _mm_castsi128_ps(mask)); }
    // 0x188f8c: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x188f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x188f90: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x188f90u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x188f94: 0xf8860020  sqc2        $vf6, 0x20($a0)
    ctx->pc = 0x188f94u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x188f98: 0xf8870030  sqc2        $vf7, 0x30($a0)
    ctx->pc = 0x188f98u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x188f9c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x188f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_188fa0:
    // 0x188fa0: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x188fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
    // 0x188fa4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x188fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x188fa8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x188fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x188fac: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x188facu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_188fb0:
    // 0x188fb0: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x188fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x188fb4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x188fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188fb8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x188fb8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188fbc: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x188fbcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x188fc0: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x188fc0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x188fc4: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x188fc4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x188fc8: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x188fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x188fcc: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x188fccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x188fd0: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x188fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x188fd4: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x188fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x188fd8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x188fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188fdc: 0x10800029  beqz        $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x188FDCu;
    {
        const bool branch_taken_0x188fdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x188FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188FDCu;
        // 0x188fe0: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188fdc) {
            ctx->pc = 0x189084u;
            goto label_189084;
        }
    }
    ctx->pc = 0x188FE4u;
    // 0x188fe4: 0x26230050  addiu       $v1, $s1, 0x50
    ctx->pc = 0x188fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x188fe8: 0x2442eb70  addiu       $v0, $v0, -0x1490
    ctx->pc = 0x188fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962032));
    // 0x188fec: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x188fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x188ff0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x188ff0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188ff4: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x188ff4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x188ff8: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x188ff8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x188ffc: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x188ffcu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x189000: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x189000u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x189004: 0xd8690010  lqc2        $vf9, 0x10($v1)
    ctx->pc = 0x189004u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x189008: 0xd86a0020  lqc2        $vf10, 0x20($v1)
    ctx->pc = 0x189008u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x18900c: 0xd86b0030  lqc2        $vf11, 0x30($v1)
    ctx->pc = 0x18900cu;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x189010: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x189010u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x189014: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x189014u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x189018: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x189018u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18901c: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x18901cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x189020: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x189020u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x189024: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x189024u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x189028: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x189028u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18902c: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x18902cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x189030: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x189030u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x189034: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x189034u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x189038: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x189038u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18903c: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x18903cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x189040: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x189040u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x189044: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x189044u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x189048: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x189048u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18904c: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x18904cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x189050: 0xf88c0000  sqc2        $vf12, 0x0($a0)
    ctx->pc = 0x189050u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x189054: 0xf88d0010  sqc2        $vf13, 0x10($a0)
    ctx->pc = 0x189054u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x189058: 0xf88e0020  sqc2        $vf14, 0x20($a0)
    ctx->pc = 0x189058u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x18905c: 0xf88f0030  sqc2        $vf15, 0x30($a0)
    ctx->pc = 0x18905cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x189060: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x189060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x189064: 0xc62100dc  lwc1        $f1, 0xDC($s1)
    ctx->pc = 0x189064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189068: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x189068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x18906c: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x18906cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x189070: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x189070u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x189074: 0xc62000ec  lwc1        $f0, 0xEC($s1)
    ctx->pc = 0x189074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189078: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x189078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x18907c: 0xc62100fc  lwc1        $f1, 0xFC($s1)
    ctx->pc = 0x18907cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189080: 0xe481002c  swc1        $f1, 0x2C($a0)
    ctx->pc = 0x189080u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
label_189084:
    // 0x189084: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x189084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x189088: 0x10600077  beqz        $v1, . + 4 + (0x77 << 2)
    ctx->pc = 0x189088u;
    {
        const bool branch_taken_0x189088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189088u;
        // 0x18908c: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189088) {
            ctx->pc = 0x189268u;
            goto label_189268;
        }
    }
    ctx->pc = 0x189090u;
    // 0x189090: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x189090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x189094: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x189094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x189098: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x189098u;
    {
        const bool branch_taken_0x189098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189098u;
        // 0x18909c: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189098) {
            ctx->pc = 0x1891B0u;
            goto label_1891b0;
        }
    }
    ctx->pc = 0x1890A0u;
    // 0x1890a0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1890a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1890a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1890a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1890a8: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1890A8u;
    {
        const bool branch_taken_0x1890a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1890ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1890A8u;
        // 0x1890ac: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1890a8) {
            ctx->pc = 0x189100u;
            goto label_189100;
        }
    }
    ctx->pc = 0x1890B0u;
    // 0x1890b0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1890B0u;
    {
        const bool branch_taken_0x1890b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1890B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1890B0u;
        // 0x1890b4: 0x266500d0  addiu       $a1, $s3, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1890b0) {
            ctx->pc = 0x1890D0u;
            goto label_1890d0;
        }
    }
    ctx->pc = 0x1890B8u;
    // 0x1890b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1890b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1890bc: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1890BCu;
    {
        const bool branch_taken_0x1890bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1890C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1890BCu;
        // 0x1890c0: 0x26640050  addiu       $a0, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1890bc) {
            ctx->pc = 0x189160u;
            goto label_189160;
        }
    }
    ctx->pc = 0x1890C4u;
    // 0x1890c4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1890C4u;
    {
        const bool branch_taken_0x1890c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1890C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1890C4u;
        // 0x1890c8: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1890c4) {
            ctx->pc = 0x1891A0u;
            goto label_1891a0;
        }
    }
    ctx->pc = 0x1890CCu;
    // 0x1890cc: 0x0  nop
    ctx->pc = 0x1890ccu;
    // NOP
label_1890d0:
    // 0x1890d0: 0x266600e0  addiu       $a2, $s3, 0xE0
    ctx->pc = 0x1890d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
    // 0x1890d4: 0x266700f0  addiu       $a3, $s3, 0xF0
    ctx->pc = 0x1890d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 240));
    // 0x1890d8: 0xc06f060  jal         func_1BC180
    ctx->pc = 0x1890D8u;
    SET_GPR_U32(ctx, 31, 0x1890E0u);
    ctx->pc = 0x1890DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1890D8u;
    // 0x1890dc: 0x26680090  addiu       $t0, $s3, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC180u, 0x1890D8u, 0x1890E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1890E0u;
label_1890e0:
    // 0x1890e0: 0x26640050  addiu       $a0, $s3, 0x50
    ctx->pc = 0x1890e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x1890e4: 0x266500a0  addiu       $a1, $s3, 0xA0
    ctx->pc = 0x1890e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
    // 0x1890e8: 0x266600b0  addiu       $a2, $s3, 0xB0
    ctx->pc = 0x1890e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
    // 0x1890ec: 0xc06f030  jal         func_1BC0C0
    ctx->pc = 0x1890ECu;
    SET_GPR_U32(ctx, 31, 0x1890F4u);
    ctx->pc = 0x1890F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1890ECu;
    // 0x1890f0: 0x266700c0  addiu       $a3, $s3, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC0C0u, 0x1890ECu, 0x1890F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1890F4u;
label_1890f4:
    // 0x1890f4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1890F4u;
    {
        const bool branch_taken_0x1890f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1890F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1890F4u;
        // 0x1890f8: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1890f4) {
            ctx->pc = 0x1891A0u;
            goto label_1891a0;
        }
    }
    ctx->pc = 0x1890FCu;
    // 0x1890fc: 0x0  nop
    ctx->pc = 0x1890fcu;
    // NOP
label_189100:
    // 0x189100: 0x266200d0  addiu       $v0, $s3, 0xD0
    ctx->pc = 0x189100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
    // 0x189104: 0x26630090  addiu       $v1, $s3, 0x90
    ctx->pc = 0x189104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    // 0x189108: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x189108u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18910c: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x18910cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x189110: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x189110u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x189114: 0xd8670000  lqc2        $vf7, 0x0($v1)
    ctx->pc = 0x189114u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x189118: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x189118u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18911c: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x18911cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x189120: 0xf8860020  sqc2        $vf6, 0x20($a0)
    ctx->pc = 0x189120u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x189124: 0xf8870030  sqc2        $vf7, 0x30($a0)
    ctx->pc = 0x189124u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x189128: 0x26640050  addiu       $a0, $s3, 0x50
    ctx->pc = 0x189128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x18912c: 0x266200a0  addiu       $v0, $s3, 0xA0
    ctx->pc = 0x18912cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
    // 0x189130: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x189130u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189134: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x189134u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x189138: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x189138u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x18913c: 0x4a24033c  vmove.w     $vf4, $vf0
    ctx->pc = 0x18913cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x189140: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x189140u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x189144: 0x4a26033c  vmove.w     $vf6, $vf0
    ctx->pc = 0x189144u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x189148: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x189148u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18914c: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x18914cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x189150: 0xf8860020  sqc2        $vf6, 0x20($a0)
    ctx->pc = 0x189150u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x189154: 0xf8800030  sqc2        $vf0, 0x30($a0)
    ctx->pc = 0x189154u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x189158: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x189158u;
    {
        const bool branch_taken_0x189158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18915Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189158u;
        // 0x18915c: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189158) {
            ctx->pc = 0x1891A0u;
            goto label_1891a0;
        }
    }
    ctx->pc = 0x189160u;
label_189160:
    // 0x189160: 0x266200a0  addiu       $v0, $s3, 0xA0
    ctx->pc = 0x189160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
    // 0x189164: 0x266300d0  addiu       $v1, $s3, 0xD0
    ctx->pc = 0x189164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
    // 0x189168: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x189168u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18916c: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x18916cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x189170: 0xd8460010  lqc2        $vf6, 0x10($v0)
    ctx->pc = 0x189170u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x189174: 0xd8670010  lqc2        $vf7, 0x10($v1)
    ctx->pc = 0x189174u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x189178: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x189178u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18917c: 0x4a24033c  vmove.w     $vf4, $vf0
    ctx->pc = 0x18917cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x189180: 0x4a250b3c  vmove.w     $vf5, $vf1
    ctx->pc = 0x189180u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[1], _mm_castsi128_ps(mask)); }
    // 0x189184: 0x4a26033c  vmove.w     $vf6, $vf0
    ctx->pc = 0x189184u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x189188: 0x4a270b3c  vmove.w     $vf7, $vf1
    ctx->pc = 0x189188u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], ctx->vu0_vf[1], _mm_castsi128_ps(mask)); }
    // 0x18918c: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x18918cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x189190: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x189190u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x189194: 0xf8860020  sqc2        $vf6, 0x20($a0)
    ctx->pc = 0x189194u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x189198: 0xf8870030  sqc2        $vf7, 0x30($a0)
    ctx->pc = 0x189198u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x18919c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x18919cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1891a0:
    // 0x1891a0: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x1891a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
    // 0x1891a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1891a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1891a8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1891a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1891ac: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1891acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1891b0:
    // 0x1891b0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1891b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1891b4: 0x26630050  addiu       $v1, $s3, 0x50
    ctx->pc = 0x1891b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x1891b8: 0x2442eb70  addiu       $v0, $v0, -0x1490
    ctx->pc = 0x1891b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962032));
    // 0x1891bc: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1891bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1891c0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1891c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21EB70u));
    // 0x1891c4: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x1891c4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21EB80u));
    // 0x1891c8: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x1891c8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21EB90u));
    // 0x1891cc: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x1891ccu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21EBA0u));
    // 0x1891d0: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x1891d0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1891d4: 0xd8690010  lqc2        $vf9, 0x10($v1)
    ctx->pc = 0x1891d4u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1891d8: 0xd86a0020  lqc2        $vf10, 0x20($v1)
    ctx->pc = 0x1891d8u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1891dc: 0xd86b0030  lqc2        $vf11, 0x30($v1)
    ctx->pc = 0x1891dcu;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1891e0: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1891e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1891e4: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1891e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1891e8: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1891e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1891ec: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x1891ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1891f0: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x1891f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1891f4: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x1891f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1891f8: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x1891f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1891fc: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x1891fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x189200: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x189200u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x189204: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x189204u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x189208: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x189208u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18920c: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x18920cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x189210: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x189210u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x189214: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x189214u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x189218: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x189218u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18921c: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x18921cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x189220: 0xf88c0000  sqc2        $vf12, 0x0($a0)
    ctx->pc = 0x189220u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x189224: 0xf88d0010  sqc2        $vf13, 0x10($a0)
    ctx->pc = 0x189224u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x189228: 0xf88e0020  sqc2        $vf14, 0x20($a0)
    ctx->pc = 0x189228u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x18922c: 0xf88f0030  sqc2        $vf15, 0x30($a0)
    ctx->pc = 0x18922cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x189230: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x189230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x189234: 0xc6610090  lwc1        $f1, 0x90($s3)
    ctx->pc = 0x189234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189238: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x189238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x18923c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x18923cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x189240: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x189240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x189244: 0xe4610030  swc1        $f1, 0x30($v1)
    ctx->pc = 0x189244u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x189248: 0xc6600094  lwc1        $f0, 0x94($s3)
    ctx->pc = 0x189248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18924c: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x18924cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x189250: 0xc6610098  lwc1        $f1, 0x98($s3)
    ctx->pc = 0x189250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189254: 0xe4610038  swc1        $f1, 0x38($v1)
    ctx->pc = 0x189254u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x189258: 0xc7c00220  lwc1        $f0, 0x220($fp)
    ctx->pc = 0x189258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18925c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x18925cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x189260: 0xc7c10224  lwc1        $f1, 0x224($fp)
    ctx->pc = 0x189260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189264: 0xe481002c  swc1        $f1, 0x2C($a0)
    ctx->pc = 0x189264u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
label_189268:
    // 0x189268: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x189268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x18926c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x18926cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x189270: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x189270u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x189274: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x189274u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x189278: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x189278u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x18927c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x18927cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x189280: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x189280u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x189284: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x189284u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x189288: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x189288u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x18928c: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x18928cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x189290: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x189290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x189294: 0x3e00008  jr          $ra
    ctx->pc = 0x189294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189294u;
        // 0x189298: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18929Cu;
}
