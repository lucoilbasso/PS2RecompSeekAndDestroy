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

// Function: EffectSpLineDraw__FP16ST_EffectSpecialP9ApcPtcSplff
// Address: 0x12ad88 - 0x12b464
void EffectSpLineDraw__FP16ST_EffectSpecialP9ApcPtcSplff_0x12ad88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectSpLineDraw__FP16ST_EffectSpecialP9ApcPtcSplff_0x12ad88");
#endif

    switch (ctx->pc) {
        case 0x12ae98u: goto label_12ae98;
        case 0x12aea0u: goto label_12aea0;
        case 0x12aec4u: goto label_12aec4;
        case 0x12afe8u: goto label_12afe8;
        case 0x12b1c0u: goto label_12b1c0;
        case 0x12b1e8u: goto label_12b1e8;
        case 0x12b374u: goto label_12b374;
        case 0x12b380u: goto label_12b380;
        case 0x12b3a0u: goto label_12b3a0;
        case 0x12b3a8u: goto label_12b3a8;
        case 0x12b3d0u: goto label_12b3d0;
        default: break;
    }

    ctx->pc = 0x12ad88u;

    // 0x12ad88: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x12ad88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x12ad8c: 0xffb20140  sd          $s2, 0x140($sp)
    ctx->pc = 0x12ad8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 18));
    // 0x12ad90: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12ad90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ad94: 0xffb30148  sd          $s3, 0x148($sp)
    ctx->pc = 0x12ad94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 19));
    // 0x12ad98: 0x265301b0  addiu       $s3, $s2, 0x1B0
    ctx->pc = 0x12ad98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 432));
    // 0x12ad9c: 0xffb00130  sd          $s0, 0x130($sp)
    ctx->pc = 0x12ad9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 16));
    // 0x12ada0: 0xffb10138  sd          $s1, 0x138($sp)
    ctx->pc = 0x12ada0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 17));
    // 0x12ada4: 0xffb40150  sd          $s4, 0x150($sp)
    ctx->pc = 0x12ada4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 20));
    // 0x12ada8: 0xffb50158  sd          $s5, 0x158($sp)
    ctx->pc = 0x12ada8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 21));
    // 0x12adac: 0xffb60160  sd          $s6, 0x160($sp)
    ctx->pc = 0x12adacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 22));
    // 0x12adb0: 0xffb70168  sd          $s7, 0x168($sp)
    ctx->pc = 0x12adb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 23));
    // 0x12adb4: 0xffbe0170  sd          $fp, 0x170($sp)
    ctx->pc = 0x12adb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 30));
    // 0x12adb8: 0xffbf0178  sd          $ra, 0x178($sp)
    ctx->pc = 0x12adb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 31));
    // 0x12adbc: 0xe7b60190  swc1        $f22, 0x190($sp)
    ctx->pc = 0x12adbcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x12adc0: 0xe7b50188  swc1        $f21, 0x188($sp)
    ctx->pc = 0x12adc0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x12adc4: 0xe7b40180  swc1        $f20, 0x180($sp)
    ctx->pc = 0x12adc4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x12adc8: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x12adc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x12adcc: 0x10400196  beqz        $v0, . + 4 + (0x196 << 2)
    ctx->pc = 0x12ADCCu;
    {
        const bool branch_taken_0x12adcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ADD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ADCCu;
        // 0x12add0: 0xafa200e4  sw          $v0, 0xE4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12adcc) {
            ctx->pc = 0x12B428u;
            goto label_12b428;
        }
    }
    ctx->pc = 0x12ADD4u;
    // 0x12add4: 0x12400194  beqz        $s2, . + 4 + (0x194 << 2)
    ctx->pc = 0x12ADD4u;
    {
        const bool branch_taken_0x12add4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ADD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ADD4u;
        // 0x12add8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12add4) {
            ctx->pc = 0x12B428u;
            goto label_12b428;
        }
    }
    ctx->pc = 0x12ADDCu;
    // 0x12addc: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x12addcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x12ade0: 0x54620192  bnel        $v1, $v0, . + 4 + (0x192 << 2)
    ctx->pc = 0x12ADE0u;
    {
        const bool branch_taken_0x12ade0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x12ade0) {
            ctx->pc = 0x12ADE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12ADE0u;
            // 0x12ade4: 0xdfb00130  ld          $s0, 0x130($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B42Cu;
            goto label_12b42c;
        }
    }
    ctx->pc = 0x12ADE8u;
    // 0x12ade8: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x12ade8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x12adec: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x12adecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12adf0: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x12adf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x12adf4: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x12adf4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x12adf8: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x12adf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x12adfc: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x12adfcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x12ae00: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x12ae00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12ae04: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x12ae04u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12ae08: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x12ae08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x12ae0c: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x12ae0cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12ae10: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x12ae10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x12ae14: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x12ae14u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12ae18: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x12ae18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x12ae1c: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x12ae1cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12ae20: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x12ae20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x12ae24: 0x86630008  lh          $v1, 0x8($s3)
    ctx->pc = 0x12ae24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x12ae28: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x12AE28u;
    {
        const bool branch_taken_0x12ae28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AE28u;
        // 0x12ae2c: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ae28) {
            ctx->pc = 0x12AE58u;
            goto label_12ae58;
        }
    }
    ctx->pc = 0x12AE30u;
    // 0x12ae30: 0x86630006  lh          $v1, 0x6($s3)
    ctx->pc = 0x12ae30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x12ae34: 0x5860000a  blezl       $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x12AE34u;
    {
        const bool branch_taken_0x12ae34 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x12ae34) {
            ctx->pc = 0x12AE38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12AE34u;
            // 0x12ae38: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12AE60u;
            goto label_12ae60;
        }
    }
    ctx->pc = 0x12AE3Cu;
    // 0x12ae3c: 0x93a200b3  lbu         $v0, 0xB3($sp)
    ctx->pc = 0x12ae3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 179)));
    // 0x12ae40: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12AE40u;
    {
        const bool branch_taken_0x12ae40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ae40) {
            ctx->pc = 0x12AE44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12AE40u;
            // 0x12ae44: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12AE48u;
            goto label_12ae48;
        }
    }
    ctx->pc = 0x12AE48u;
label_12ae48:
    // 0x12ae48: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x12ae48u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12ae4c: 0x1012  mflo        $v0
    ctx->pc = 0x12ae4cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x12ae50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12AE50u;
    {
        const bool branch_taken_0x12ae50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AE50u;
        // 0x12ae54: 0xafa200f0  sw          $v0, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ae50) {
            ctx->pc = 0x12AE5Cu;
            goto label_12ae5c;
        }
    }
    ctx->pc = 0x12AE58u;
label_12ae58:
    // 0x12ae58: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x12ae58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
label_12ae5c:
    // 0x12ae5c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x12ae5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
label_12ae60:
    // 0x12ae60: 0x2474d650  addiu       $s4, $v1, -0x29B0
    ctx->pc = 0x12ae60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956624));
    // 0x12ae64: 0x8e820094  lw          $v0, 0x94($s4)
    ctx->pc = 0x12ae64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 148)));
    // 0x12ae68: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12AE68u;
    {
        const bool branch_taken_0x12ae68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AE68u;
        // 0x12ae6c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ae68) {
            ctx->pc = 0x12AE90u;
            goto label_12ae90;
        }
    }
    ctx->pc = 0x12AE70u;
    // 0x12ae70: 0x8e820098  lw          $v0, 0x98($s4)
    ctx->pc = 0x12ae70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 152)));
    // 0x12ae74: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x12ae74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12ae78: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x12ae78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x12ae7c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x12ae7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x12ae80: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x12ae80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x12ae84: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x12AE84u;
    {
        const bool branch_taken_0x12ae84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AE84u;
        // 0x12ae88: 0xae830098  sw          $v1, 0x98($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ae84) {
            ctx->pc = 0x12AEC4u;
            goto label_12aec4;
        }
    }
    ctx->pc = 0x12AE8Cu;
    // 0x12ae8c: 0x0  nop
    ctx->pc = 0x12ae8cu;
    // NOP
label_12ae90:
    // 0x12ae90: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x12AE90u;
    SET_GPR_U32(ctx, 31, 0x12AE98u);
    ctx->pc = 0x12AE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AE90u;
    // 0x12ae94: 0x8e840084  lw          $a0, 0x84($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x12AE90u, 0x12AE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AE98u;
label_12ae98:
    // 0x12ae98: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x12AE98u;
    SET_GPR_U32(ctx, 31, 0x12AEA0u);
    ctx->pc = 0x12AE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AE98u;
    // 0x12ae9c: 0x8e840088  lw          $a0, 0x88($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x12AE98u, 0x12AEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AEA0u;
label_12aea0:
    // 0x12aea0: 0x8e90008c  lw          $s0, 0x8C($s4)
    ctx->pc = 0x12aea0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
    // 0x12aea4: 0x8e820080  lw          $v0, 0x80($s4)
    ctx->pc = 0x12aea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
    // 0x12aea8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x12aea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x12aeac: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x12aeacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x12aeb0: 0x8e840088  lw          $a0, 0x88($s4)
    ctx->pc = 0x12aeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x12aeb4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12aeb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12aeb8: 0xae85008c  sw          $a1, 0x8C($s4)
    ctx->pc = 0x12aeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 140), GPR_U32(ctx, 5));
    // 0x12aebc: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x12AEBCu;
    SET_GPR_U32(ctx, 31, 0x12AEC4u);
    ctx->pc = 0x12AEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AEBCu;
    // 0x12aec0: 0xae820080  sw          $v0, 0x80($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x12AEBCu, 0x12AEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AEC4u;
label_12aec4:
    // 0x12aec4: 0xafb000e8  sw          $s0, 0xE8($sp)
    ctx->pc = 0x12aec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 16));
    // 0x12aec8: 0x3c0a1000  lui         $t2, 0x1000
    ctx->pc = 0x12aec8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4096 << 16));
    // 0x12aecc: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x12aeccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x12aed0: 0x354a8005  ori         $t2, $t2, 0x8005
    ctx->pc = 0x12aed0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32773);
    // 0x12aed4: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x12aed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x12aed8: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x12aed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x12aedc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x12aedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12aee0: 0x3c0c0007  lui         $t4, 0x7
    ctx->pc = 0x12aee0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)7 << 16));
    // 0x12aee4: 0x358c000d  ori         $t4, $t4, 0xD
    ctx->pc = 0x12aee4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)13);
    // 0x12aee8: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x12aee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x12aeec: 0x24070047  addiu       $a3, $zero, 0x47
    ctx->pc = 0x12aeecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x12aef0: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x12aef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x12aef4: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x12aef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x12aef8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x12aef8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x12aefc: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x12aefcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x12af00: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x12af00u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x12af04: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x12af04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x12af08: 0xfc6a0000  sd          $t2, 0x0($v1)
    ctx->pc = 0x12af08u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 10));
    // 0x12af0c: 0x240a0060  addiu       $t2, $zero, 0x60
    ctx->pc = 0x12af0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x12af10: 0xfca70008  sd          $a3, 0x8($a1)
    ctx->pc = 0x12af10u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 7));
    // 0x12af14: 0x24470060  addiu       $a3, $v0, 0x60
    ctx->pc = 0x12af14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x12af18: 0xfcac0000  sd          $t4, 0x0($a1)
    ctx->pc = 0x12af18u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 12));
    // 0x12af1c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x12af1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x12af20: 0x24480030  addiu       $t0, $v0, 0x30
    ctx->pc = 0x12af20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12af24: 0x24490050  addiu       $t1, $v0, 0x50
    ctx->pc = 0x12af24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x12af28: 0xdf838c90  ld          $v1, -0x7370($gp)
    ctx->pc = 0x12af28u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
    // 0x12af2c: 0x240b004e  addiu       $t3, $zero, 0x4E
    ctx->pc = 0x12af2cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x12af30: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x12af30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x12af34: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x12af34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x12af38: 0xfd0b0008  sd          $t3, 0x8($t0)
    ctx->pc = 0x12af38u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 11));
    // 0x12af3c: 0x240d0040  addiu       $t5, $zero, 0x40
    ctx->pc = 0x12af3cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x12af40: 0xfd030000  sd          $v1, 0x0($t0)
    ctx->pc = 0x12af40u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 3));
    // 0x12af44: 0x240c0006  addiu       $t4, $zero, 0x6
    ctx->pc = 0x12af44u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x12af48: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x12af48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x12af4c: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x12af4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x12af50: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x12af50u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x12af54: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x12af54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x12af58: 0xac8d0004  sw          $t5, 0x4($a0)
    ctx->pc = 0x12af58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 13));
    // 0x12af5c: 0xfd250008  sd          $a1, 0x8($t1)
    ctx->pc = 0x12af5cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 5));
    // 0x12af60: 0xfd2a0000  sd          $t2, 0x0($t1)
    ctx->pc = 0x12af60u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 10));
    // 0x12af64: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x12af64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    // 0x12af68: 0x94430008  lhu         $v1, 0x8($v0)
    ctx->pc = 0x12af68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x12af6c: 0x94450030  lhu         $a1, 0x30($v0)
    ctx->pc = 0x12af6cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x12af70: 0xdc440038  ld          $a0, 0x38($v0)
    ctx->pc = 0x12af70u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x12af74: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x12af74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x12af78: 0xfcec0008  sd          $t4, 0x8($a3)
    ctx->pc = 0x12af78u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 12));
    // 0x12af7c: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x12af7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x12af80: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x12af80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x12af84: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x12af84u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x12af88: 0x86620006  lh          $v0, 0x6($s3)
    ctx->pc = 0x12af88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x12af8c: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12AF8Cu;
    {
        const bool branch_taken_0x12af8c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x12AF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AF8Cu;
        // 0x12af90: 0xc6740024  lwc1        $f20, 0x24($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12af8c) {
            ctx->pc = 0x12AFB0u;
            goto label_12afb0;
        }
    }
    ctx->pc = 0x12AF94u;
    // 0x12af94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12af94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12af98: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x12af98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x12af9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12af9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12afa0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12afa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12afa4: 0x0  nop
    ctx->pc = 0x12afa4u;
    // NOP
    // 0x12afa8: 0x0  nop
    ctx->pc = 0x12afa8u;
    // NOP
    // 0x12afac: 0x46010583  div.s       $f22, $f0, $f1
    ctx->pc = 0x12afacu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_12afb0:
    // 0x12afb0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x12afb0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12afb4: 0x184000c8  blez        $v0, . + 4 + (0xC8 << 2)
    ctx->pc = 0x12AFB4u;
    {
        const bool branch_taken_0x12afb4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x12AFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AFB4u;
        // 0x12afb8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12afb4) {
            ctx->pc = 0x12B2D8u;
            goto label_12b2d8;
        }
    }
    ctx->pc = 0x12AFBCu;
    // 0x12afbc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x12afbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x12afc0: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x12afc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x12afc4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12afc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12afc8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x12afc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x12afcc: 0x244beb70  addiu       $t3, $v0, -0x1490
    ctx->pc = 0x12afccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962032));
    // 0x12afd0: 0x8fb000e4  lw          $s0, 0xE4($sp)
    ctx->pc = 0x12afd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x12afd4: 0x246aebf0  addiu       $t2, $v1, -0x1410
    ctx->pc = 0x12afd4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962160));
    // 0x12afd8: 0x27a90090  addiu       $t1, $sp, 0x90
    ctx->pc = 0x12afd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x12afdc: 0x27be00a0  addiu       $fp, $sp, 0xA0
    ctx->pc = 0x12afdcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x12afe0: 0x27b20060  addiu       $s2, $sp, 0x60
    ctx->pc = 0x12afe0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12afe4: 0x27b70070  addiu       $s7, $sp, 0x70
    ctx->pc = 0x12afe4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_12afe8:
    // 0x12afe8: 0x26030240  addiu       $v1, $s0, 0x240
    ctx->pc = 0x12afe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
    // 0x12afec: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x12afecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12aff0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x12aff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12aff4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12aff4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12aff8: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x12aff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x12affc: 0xc6000244  lwc1        $f0, 0x244($s0)
    ctx->pc = 0x12affcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b000: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x12b000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12b004: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x12b004u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12b008: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x12b008u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x12b00c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x12b00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b010: 0xc6010248  lwc1        $f1, 0x248($s0)
    ctx->pc = 0x12b010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12b014: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12b014u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12b018: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x12b018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x12b01c: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x12b01cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12b020: 0x7d220000  sq          $v0, 0x0($t1)
    ctx->pc = 0x12b020u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    // 0x12b024: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x12b024u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12b028: 0x7fc20000  sq          $v0, 0x0($fp)
    ctx->pc = 0x12b028u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 0), GPR_VEC(ctx, 2));
    // 0x12b02c: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x12b02cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x12b030: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x12b030u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12b034: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x12b034u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x12b038: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x12b038u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x12b03c: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x12b03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12b040: 0xfba50020  sqc2        $vf5, 0x20($sp)
    ctx->pc = 0x12b040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12b044: 0xfba60010  sqc2        $vf6, 0x10($sp)
    ctx->pc = 0x12b044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x12b048: 0xfba70000  sqc2        $vf7, 0x0($sp)
    ctx->pc = 0x12b048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x12b04c: 0xd9640000  lqc2        $vf4, 0x0($t3)
    ctx->pc = 0x12b04cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x12b050: 0xd9650010  lqc2        $vf5, 0x10($t3)
    ctx->pc = 0x12b050u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x12b054: 0xd9660020  lqc2        $vf6, 0x20($t3)
    ctx->pc = 0x12b054u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 32)));
    // 0x12b058: 0xd9670030  lqc2        $vf7, 0x30($t3)
    ctx->pc = 0x12b058u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 48)));
    // 0x12b05c: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x12b05cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b060: 0xdba90010  lqc2        $vf9, 0x10($sp)
    ctx->pc = 0x12b060u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b064: 0xdbaa0020  lqc2        $vf10, 0x20($sp)
    ctx->pc = 0x12b064u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b068: 0xdbab0030  lqc2        $vf11, 0x30($sp)
    ctx->pc = 0x12b068u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12b06c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x12b06cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b070: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x12b070u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b074: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x12b074u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b078: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x12b078u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x12b07c: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x12b07cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b080: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x12b080u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b084: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x12b084u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b088: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x12b088u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x12b08c: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x12b08cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b090: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x12b090u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b094: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x12b094u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b098: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x12b098u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x12b09c: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x12b09cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b0a0: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x12b0a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b0a4: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x12b0a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b0a8: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x12b0a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x12b0ac: 0xfbac0000  sqc2        $vf12, 0x0($sp)
    ctx->pc = 0x12b0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x12b0b0: 0xfbad0010  sqc2        $vf13, 0x10($sp)
    ctx->pc = 0x12b0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x12b0b4: 0xfbae0020  sqc2        $vf14, 0x20($sp)
    ctx->pc = 0x12b0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x12b0b8: 0xfbaf0030  sqc2        $vf15, 0x30($sp)
    ctx->pc = 0x12b0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x12b0bc: 0xda080000  lqc2        $vf8, 0x0($s0)
    ctx->pc = 0x12b0bcu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12b0c0: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x12b0c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b0c4: 0xdba50010  lqc2        $vf5, 0x10($sp)
    ctx->pc = 0x12b0c4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b0c8: 0xdba60020  lqc2        $vf6, 0x20($sp)
    ctx->pc = 0x12b0c8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b0cc: 0xdba70030  lqc2        $vf7, 0x30($sp)
    ctx->pc = 0x12b0ccu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12b0d0: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x12b0d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b0d4: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x12b0d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b0d8: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x12b0d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b0dc: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x12b0dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x12b0e0: 0xfa4c0000  sqc2        $vf12, 0x0($s2)
    ctx->pc = 0x12b0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x12b0e4: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x12b0e4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12b0e8: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x12b0e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b0ec: 0xdba50010  lqc2        $vf5, 0x10($sp)
    ctx->pc = 0x12b0ecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b0f0: 0xdba60020  lqc2        $vf6, 0x20($sp)
    ctx->pc = 0x12b0f0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b0f4: 0xdba70030  lqc2        $vf7, 0x30($sp)
    ctx->pc = 0x12b0f4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12b0f8: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x12b0f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b0fc: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x12b0fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b100: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x12b100u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b104: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x12b104u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x12b108: 0xfaec0000  sqc2        $vf12, 0x0($s7)
    ctx->pc = 0x12b108u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x12b10c: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x12b10cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x12b110: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x12b110u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12b114: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x12b114u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x12b118: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x12b118u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x12b11c: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x12b11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12b120: 0xfba50020  sqc2        $vf5, 0x20($sp)
    ctx->pc = 0x12b120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12b124: 0xfba60010  sqc2        $vf6, 0x10($sp)
    ctx->pc = 0x12b124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x12b128: 0xfba70000  sqc2        $vf7, 0x0($sp)
    ctx->pc = 0x12b128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x12b12c: 0xd9440000  lqc2        $vf4, 0x0($t2)
    ctx->pc = 0x12b12cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x12b130: 0xd9450010  lqc2        $vf5, 0x10($t2)
    ctx->pc = 0x12b130u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x12b134: 0xd9460020  lqc2        $vf6, 0x20($t2)
    ctx->pc = 0x12b134u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x12b138: 0xd9470030  lqc2        $vf7, 0x30($t2)
    ctx->pc = 0x12b138u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 48)));
    // 0x12b13c: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x12b13cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b140: 0xdba90010  lqc2        $vf9, 0x10($sp)
    ctx->pc = 0x12b140u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b144: 0xdbaa0020  lqc2        $vf10, 0x20($sp)
    ctx->pc = 0x12b144u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b148: 0xdbab0030  lqc2        $vf11, 0x30($sp)
    ctx->pc = 0x12b148u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12b14c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x12b14cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b150: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x12b150u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b154: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x12b154u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b158: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x12b158u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x12b15c: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x12b15cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b160: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x12b160u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b164: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x12b164u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b168: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x12b168u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x12b16c: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x12b16cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b170: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x12b170u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b174: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x12b174u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b178: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x12b178u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x12b17c: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x12b17cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b180: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x12b180u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b184: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x12b184u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12b188: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x12b188u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x12b18c: 0xfbac0000  sqc2        $vf12, 0x0($sp)
    ctx->pc = 0x12b18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x12b190: 0xfbad0010  sqc2        $vf13, 0x10($sp)
    ctx->pc = 0x12b190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x12b194: 0xfbae0020  sqc2        $vf14, 0x20($sp)
    ctx->pc = 0x12b194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x12b198: 0xfbaf0030  sqc2        $vf15, 0x30($sp)
    ctx->pc = 0x12b198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x12b19c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x12b19cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12b1a0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x12b1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12b1a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12b1a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b1a8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x12b1a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b1ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x12b1acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b1b0: 0x7fa90100  sq          $t1, 0x100($sp)
    ctx->pc = 0x12b1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 9));
    // 0x12b1b4: 0x7faa0110  sq          $t2, 0x110($sp)
    ctx->pc = 0x12b1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 10));
    // 0x12b1b8: 0xc06f120  jal         func_1BC480
    ctx->pc = 0x12B1B8u;
    SET_GPR_U32(ctx, 31, 0x12B1C0u);
    ctx->pc = 0x12B1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B1B8u;
    // 0x12b1bc: 0x7fab0120  sq          $t3, 0x120($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC480u, 0x12B1B8u, 0x12B1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B1C0u;
label_12b1c0:
    // 0x12b1c0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12b1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b1c4: 0x3c030007  lui         $v1, 0x7
    ctx->pc = 0x12b1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7 << 16));
    // 0x12b1c8: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x12b1c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x12b1cc: 0x7bab0120  lq          $t3, 0x120($sp)
    ctx->pc = 0x12b1ccu;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x12b1d0: 0x2442f000  addiu       $v0, $v0, -0x1000
    ctx->pc = 0x12b1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
    // 0x12b1d4: 0x7baa0110  lq          $t2, 0x110($sp)
    ctx->pc = 0x12b1d4u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x12b1d8: 0x7ba90100  lq          $t1, 0x100($sp)
    ctx->pc = 0x12b1d8u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x12b1dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12b1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b1e0: 0x62282b  sltu        $a1, $v1, $v0
    ctx->pc = 0x12b1e0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12b1e4: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x12b1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_12b1e8:
    // 0x12b1e8: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x12b1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x12b1ec: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x12b1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12b1f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12b1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12b1f4: 0x2442a000  addiu       $v0, $v0, -0x6000
    ctx->pc = 0x12b1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942720));
    // 0x12b1f8: 0x2c424001  sltiu       $v0, $v0, 0x4001
    ctx->pc = 0x12b1f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16385) ? 1 : 0);
    // 0x12b1fc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12B1FCu;
    {
        const bool branch_taken_0x12b1fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b1fc) {
            ctx->pc = 0x12B200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B1FCu;
            // 0x12b200: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B210u;
            goto label_12b210;
        }
    }
    ctx->pc = 0x12B204u;
    // 0x12b204: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x12b204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12b208: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12B208u;
    {
        const bool branch_taken_0x12b208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B208u;
        // 0x12b20c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b208) {
            ctx->pc = 0x12B228u;
            goto label_12b228;
        }
    }
    ctx->pc = 0x12B210u;
label_12b210:
    // 0x12b210: 0x24429c00  addiu       $v0, $v0, -0x6400
    ctx->pc = 0x12b210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941696));
    // 0x12b214: 0x2c423801  sltiu       $v0, $v0, 0x3801
    ctx->pc = 0x12b214u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14337) ? 1 : 0);
    // 0x12b218: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12B218u;
    {
        const bool branch_taken_0x12b218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B218u;
        // 0x12b21c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b218) {
            ctx->pc = 0x12B22Cu;
            goto label_12b22c;
        }
    }
    ctx->pc = 0x12B220u;
    // 0x12b220: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12b220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b224: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x12b224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_12b228:
    // 0x12b228: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x12b228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_12b22c:
    // 0x12b22c: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x12b22cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x12b230: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x12B230u;
    {
        const bool branch_taken_0x12b230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B230u;
        // 0x12b234: 0x27a20040  addiu       $v0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b230) {
            ctx->pc = 0x12B1E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b1e8;
        }
    }
    ctx->pc = 0x12B238u;
    // 0x12b238: 0x14a0001e  bnez        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x12B238u;
    {
        const bool branch_taken_0x12b238 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B238u;
        // 0x12b23c: 0x93a300b3  lbu         $v1, 0xB3($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 179)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b238) {
            ctx->pc = 0x12B2B4u;
            goto label_12b2b4;
        }
    }
    ctx->pc = 0x12B240u;
    // 0x12b240: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x12b240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b244: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x12b244u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b248: 0xe4550008  swc1        $f21, 0x8($v0)
    ctx->pc = 0x12b248u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x12b24c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x12b24cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x12b250: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x12b250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x12b254: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12b254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b258: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x12b258u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x12b25c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12b25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b260: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x12b260u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x12b264: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x12b264u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x12b268: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x12b268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x12b26c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12b26cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b270: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x12b270u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x12b274: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x12b274u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x12b278: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x12b278u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x12b27c: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x12b27cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b280: 0xe4950004  swc1        $f21, 0x4($a0)
    ctx->pc = 0x12b280u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x12b284: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x12b284u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x12b288: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12b288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b28c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x12b28cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x12b290: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x12b290u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12b294: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x12b294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b298: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x12b298u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x12b29c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x12b29cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x12b2a0: 0xe4750008  swc1        $f21, 0x8($v1)
    ctx->pc = 0x12b2a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x12b2a4: 0xe4740000  swc1        $f20, 0x0($v1)
    ctx->pc = 0x12b2a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x12b2a8: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x12b2a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12b2ac: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x12b2acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x12b2b0: 0x93a300b3  lbu         $v1, 0xB3($sp)
    ctx->pc = 0x12b2b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 179)));
label_12b2b4:
    // 0x12b2b4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x12b2b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x12b2b8: 0x86620006  lh          $v0, 0x6($s3)
    ctx->pc = 0x12b2b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x12b2bc: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x12b2bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x12b2c0: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x12b2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x12b2c4: 0x4616a500  add.s       $f20, $f20, $f22
    ctx->pc = 0x12b2c4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
    // 0x12b2c8: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x12b2c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x12b2cc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x12b2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12b2d0: 0x1440ff45  bnez        $v0, . + 4 + (-0xBB << 2)
    ctx->pc = 0x12B2D0u;
    {
        const bool branch_taken_0x12b2d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B2D0u;
        // 0x12b2d4: 0xa3a300b3  sb          $v1, 0xB3($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 179), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b2d0) {
            ctx->pc = 0x12AFE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12afe8;
        }
    }
    ctx->pc = 0x12B2D8u;
label_12b2d8:
    // 0x12b2d8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x12b2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12b2dc: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x12b2dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x12b2e0: 0x31bfc  dsll32      $v1, $v1, 15
    ctx->pc = 0x12b2e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 15));
    // 0x12b2e4: 0x2c21025  or          $v0, $s6, $v0
    ctx->pc = 0x12b2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
    // 0x12b2e8: 0x3404a800  ori         $a0, $zero, 0xA800
    ctx->pc = 0x12b2e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43008);
    // 0x12b2ec: 0x421bc  dsll32      $a0, $a0, 6
    ctx->pc = 0x12b2ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 6));
    // 0x12b2f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12b2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12b2f4: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x12b2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x12b2f8: 0x346324e2  ori         $v1, $v1, 0x24E2
    ctx->pc = 0x12b2f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9442);
    // 0x12b2fc: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x12b2fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12b300: 0x52ff8  dsll        $a1, $a1, 31
    ctx->pc = 0x12b300u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 31);
    // 0x12b304: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x12b304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x12b308: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x12b308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x12b30c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x12b30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x12b310: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x12b310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x12b314: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x12b314u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x12b318: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x12b318u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x12b31c: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x12b31cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x12b320: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x12b320u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x12b324: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x12b324u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b328: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x12b328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x12b32c: 0x8fb000e8  lw          $s0, 0xE8($sp)
    ctx->pc = 0x12b32cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x12b330: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x12b330u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12b334: 0x2261023  subu        $v0, $s1, $a2
    ctx->pc = 0x12b334u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x12b338: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x12b338u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x12b33c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12b33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12b340: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x12b340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x12b344: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x12b344u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12b348: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x12b348u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x12b34c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x12b34cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x12b350: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x12b350u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x12b354: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x12b354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12b358: 0xaca70008  sw          $a3, 0x8($a1)
    ctx->pc = 0x12b358u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 7));
    // 0x12b35c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x12b35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12b360: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x12b360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12b364: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x12b364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x12b368: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x12b368u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x12b36c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x12B36Cu;
    SET_GPR_U32(ctx, 31, 0x12B374u);
    ctx->pc = 0x12B370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B36Cu;
    // 0x12b370: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x12B36Cu, 0x12B374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B374u;
label_12b374:
    // 0x12b374: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x12b374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x12b378: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x12b378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x12b37c: 0x0  nop
    ctx->pc = 0x12b37cu;
    // NOP
label_12b380:
    // 0x12b380: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12b380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12b384: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x12b384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x12b388: 0x0  nop
    ctx->pc = 0x12b388u;
    // NOP
    // 0x12b38c: 0x0  nop
    ctx->pc = 0x12b38cu;
    // NOP
    // 0x12b390: 0x0  nop
    ctx->pc = 0x12b390u;
    // NOP
    // 0x12b394: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12B394u;
    {
        const bool branch_taken_0x12b394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b394) {
            ctx->pc = 0x12B380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b380;
        }
    }
    ctx->pc = 0x12B39Cu;
    // 0x12b39c: 0x0  nop
    ctx->pc = 0x12b39cu;
    // NOP
label_12b3a0:
    // 0x12b3a0: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x12B3A0u;
    SET_GPR_U32(ctx, 31, 0x12B3A8u);
    ctx->pc = 0x12B3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B3A0u;
    // 0x12b3a4: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x12B3A0u, 0x12B3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B3A8u;
label_12b3a8:
    // 0x12b3a8: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x12b3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x12b3ac: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x12B3ACu;
    {
        const bool branch_taken_0x12b3ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x12B3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3ACu;
        // 0x12b3b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b3ac) {
            ctx->pc = 0x12B3A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b3a0;
        }
    }
    ctx->pc = 0x12B3B4u;
    // 0x12b3b4: 0x8e430094  lw          $v1, 0x94($s2)
    ctx->pc = 0x12b3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x12b3b8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x12b3b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12b3bc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12B3BCu;
    {
        const bool branch_taken_0x12b3bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3BCu;
        // 0x12b3c0: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b3bc) {
            ctx->pc = 0x12B3D0u;
            goto label_12b3d0;
        }
    }
    ctx->pc = 0x12B3C4u;
    // 0x12b3c4: 0x8e4400b0  lw          $a0, 0xB0($s2)
    ctx->pc = 0x12b3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
    // 0x12b3c8: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x12B3C8u;
    SET_GPR_U32(ctx, 31, 0x12B3D0u);
    ctx->pc = 0x12B3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B3C8u;
    // 0x12b3cc: 0xae500090  sw          $s0, 0x90($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x12B3C8u, 0x12B3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B3D0u;
label_12b3d0:
    // 0x12b3d0: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x12b3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x12b3d4: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x12b3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x12b3d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12b3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12b3dc: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x12b3dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x12b3e0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x12b3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12b3e4: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x12b3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x12b3e8: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x12b3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x12b3ec: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x12b3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x12b3f0: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x12b3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x12b3f4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x12b3f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x12b3f8: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x12b3f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x12b3fc: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x12b3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x12b400: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x12b400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    // 0x12b404: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x12b404u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x12b408: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x12b408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x12b40c: 0x8c450480  lw          $a1, 0x480($v0)
    ctx->pc = 0x12b40cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1152)));
    // 0x12b410: 0x86620006  lh          $v0, 0x6($s3)
    ctx->pc = 0x12b410u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x12b414: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x12b414u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x12b418: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12B418u;
    {
        const bool branch_taken_0x12b418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B418u;
        // 0x12b41c: 0x96630006  lhu         $v1, 0x6($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b418) {
            ctx->pc = 0x12B428u;
            goto label_12b428;
        }
    }
    ctx->pc = 0x12B420u;
    // 0x12b420: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x12b420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12b424: 0xa6620006  sh          $v0, 0x6($s3)
    ctx->pc = 0x12b424u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 6), (uint16_t)GPR_U32(ctx, 2));
label_12b428:
    // 0x12b428: 0xdfb00130  ld          $s0, 0x130($sp)
    ctx->pc = 0x12b428u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_12b42c:
    // 0x12b42c: 0xdfb10138  ld          $s1, 0x138($sp)
    ctx->pc = 0x12b42cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x12b430: 0xdfb20140  ld          $s2, 0x140($sp)
    ctx->pc = 0x12b430u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x12b434: 0xdfb30148  ld          $s3, 0x148($sp)
    ctx->pc = 0x12b434u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x12b438: 0xdfb40150  ld          $s4, 0x150($sp)
    ctx->pc = 0x12b438u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x12b43c: 0xdfb50158  ld          $s5, 0x158($sp)
    ctx->pc = 0x12b43cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x12b440: 0xdfb60160  ld          $s6, 0x160($sp)
    ctx->pc = 0x12b440u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x12b444: 0xdfb70168  ld          $s7, 0x168($sp)
    ctx->pc = 0x12b444u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x12b448: 0xdfbe0170  ld          $fp, 0x170($sp)
    ctx->pc = 0x12b448u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x12b44c: 0xdfbf0178  ld          $ra, 0x178($sp)
    ctx->pc = 0x12b44cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x12b450: 0xc7b60190  lwc1        $f22, 0x190($sp)
    ctx->pc = 0x12b450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x12b454: 0xc7b50188  lwc1        $f21, 0x188($sp)
    ctx->pc = 0x12b454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x12b458: 0xc7b40180  lwc1        $f20, 0x180($sp)
    ctx->pc = 0x12b458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12b45c: 0x3e00008  jr          $ra
    ctx->pc = 0x12B45Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B45Cu;
        // 0x12b460: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B45Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B464u;
}
