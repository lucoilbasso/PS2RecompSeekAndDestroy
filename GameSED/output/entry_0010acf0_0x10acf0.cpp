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

// Function: entry_0010acf0
// Address: 0x10acf0 - 0x10af3c
void entry_0010acf0_0x10acf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010acf0_0x10acf0");
#endif

    switch (ctx->pc) {
        case 0x10ad5cu: goto label_10ad5c;
        case 0x10ad6cu: goto label_10ad6c;
        default: break;
    }

    ctx->pc = 0x10acf0u;

    // 0x10acf0: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x10acf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x10acf4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x10acf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10acf8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x10acf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10acfc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10acfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ad00: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x10ad00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x10ad04: 0x8c47002c  lw          $a3, 0x2C($v0)
    ctx->pc = 0x10ad04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x10ad08: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x10ad08u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x10ad0c: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x10ad0cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
    // 0x10ad10: 0xdce20008  ld          $v0, 0x8($a3)
    ctx->pc = 0x10ad10u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x10ad14: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x10ad14u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x10ad18: 0xdce30010  ld          $v1, 0x10($a3)
    ctx->pc = 0x10ad18u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x10ad1c: 0xfe830010  sd          $v1, 0x10($s4)
    ctx->pc = 0x10ad1cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 3));
    // 0x10ad20: 0xdce20018  ld          $v0, 0x18($a3)
    ctx->pc = 0x10ad20u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x10ad24: 0xfe820018  sd          $v0, 0x18($s4)
    ctx->pc = 0x10ad24u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 2));
    // 0x10ad28: 0xdce30020  ld          $v1, 0x20($a3)
    ctx->pc = 0x10ad28u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x10ad2c: 0xfe830020  sd          $v1, 0x20($s4)
    ctx->pc = 0x10ad2cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 3));
    // 0x10ad30: 0xdce20028  ld          $v0, 0x28($a3)
    ctx->pc = 0x10ad30u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x10ad34: 0xfe820028  sd          $v0, 0x28($s4)
    ctx->pc = 0x10ad34u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 40), GPR_U64(ctx, 2));
    // 0x10ad38: 0xdce30030  ld          $v1, 0x30($a3)
    ctx->pc = 0x10ad38u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x10ad3c: 0xfe830030  sd          $v1, 0x30($s4)
    ctx->pc = 0x10ad3cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 48), GPR_U64(ctx, 3));
    // 0x10ad40: 0xdce20038  ld          $v0, 0x38($a3)
    ctx->pc = 0x10ad40u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x10ad44: 0xae900048  sw          $s0, 0x48($s4)
    ctx->pc = 0x10ad44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 16));
    // 0x10ad48: 0xfe820038  sd          $v0, 0x38($s4)
    ctx->pc = 0x10ad48u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 56), GPR_U64(ctx, 2));
    // 0x10ad4c: 0xae91004c  sw          $s1, 0x4C($s4)
    ctx->pc = 0x10ad4cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 17));
    // 0x10ad50: 0xae800040  sw          $zero, 0x40($s4)
    ctx->pc = 0x10ad50u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 64), GPR_U32(ctx, 0));
    // 0x10ad54: 0xc0631a2  jal         func_18C688
    ctx->pc = 0x10AD54u;
    SET_GPR_U32(ctx, 31, 0x10AD5Cu);
    ctx->pc = 0x10AD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AD54u;
    // 0x10ad58: 0xae800044  sw          $zero, 0x44($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C688u, 0x10AD54u, 0x10AD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AD5Cu;
label_10ad5c:
    // 0x10ad5c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x10ad5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ad60: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x10ad60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ad64: 0xc040ce8  jal         func_1033A0
    ctx->pc = 0x10AD64u;
    SET_GPR_U32(ctx, 31, 0x10AD6Cu);
    ctx->pc = 0x10AD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AD64u;
    // 0x10ad68: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1033A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1033A0u, 0x10AD64u, 0x10AD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AD6Cu;
label_10ad6c:
    // 0x10ad6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10ad6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ad70: 0x14400072  bnez        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x10AD70u;
    {
        const bool branch_taken_0x10ad70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10AD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD70u;
        // 0x10ad74: 0x26470150  addiu       $a3, $s2, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ad70) {
            ctx->pc = 0x10AF3Cu;
            return;
        }
    }
    ctx->pc = 0x10AD78u;
    // 0x10ad78: 0xc783803c  lwc1        $f3, -0x7FC4($gp)
    ctx->pc = 0x10ad78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x10ad7c: 0x94e20050  lhu         $v0, 0x50($a3)
    ctx->pc = 0x10ad7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x10ad80: 0x24e80030  addiu       $t0, $a3, 0x30
    ctx->pc = 0x10ad80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x10ad84: 0x94e30052  lhu         $v1, 0x52($a3)
    ctx->pc = 0x10ad84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 82)));
    // 0x10ad88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10ad88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10ad8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x10ad8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x10ad90: 0x94e20056  lhu         $v0, 0x56($a3)
    ctx->pc = 0x10ad90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 86)));
    // 0x10ad94: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x10ad94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x10ad98: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x10ad98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x10ad9c: 0x94e40054  lhu         $a0, 0x54($a3)
    ctx->pc = 0x10ad9cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 84)));
    // 0x10ada0: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x10ada0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x10ada4: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x10ada4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x10ada8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x10ada8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x10adac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x10adacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x10adb0: 0x44843800  mtc1        $a0, $f7
    ctx->pc = 0x10adb0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x10adb4: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x10adb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x10adb8: 0xa4e0000e  sh          $zero, 0xE($a3)
    ctx->pc = 0x10adb8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x10adbc: 0x0  nop
    ctx->pc = 0x10adbcu;
    // NOP
    // 0x10adc0: 0x0  nop
    ctx->pc = 0x10adc0u;
    // NOP
    // 0x10adc4: 0x46001843  div.s       $f1, $f3, $f0
    ctx->pc = 0x10adc4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x10adc8: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x10adc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x10adcc: 0x0  nop
    ctx->pc = 0x10adccu;
    // NOP
    // 0x10add0: 0x0  nop
    ctx->pc = 0x10add0u;
    // NOP
    // 0x10add4: 0x460418c3  div.s       $f3, $f3, $f4
    ctx->pc = 0x10add4u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[4]); }
    // 0x10add8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x10add8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x10addc: 0xe4e10068  swc1        $f1, 0x68($a3)
    ctx->pc = 0x10addcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 104), bits); }
    // 0x10ade0: 0xe4e00060  swc1        $f0, 0x60($a3)
    ctx->pc = 0x10ade0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 96), bits); }
    // 0x10ade4: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x10ade4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x10ade8: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x10ade8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x10adec: 0xe4e3006c  swc1        $f3, 0x6C($a3)
    ctx->pc = 0x10adecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 108), bits); }
    // 0x10adf0: 0x46020042  mul.s       $f1, $f0, $f2
    ctx->pc = 0x10adf0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x10adf4: 0xe4e00028  swc1        $f0, 0x28($a3)
    ctx->pc = 0x10adf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
    // 0x10adf8: 0x460020c6  mov.s       $f3, $f4
    ctx->pc = 0x10adf8u;
    ctx->f[3] = FPU_MOV_S(ctx->f[4]);
    // 0x10adfc: 0x46051942  mul.s       $f5, $f3, $f5
    ctx->pc = 0x10adfcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x10ae00: 0xe4e30064  swc1        $f3, 0x64($a3)
    ctx->pc = 0x10ae00u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 100), bits); }
    // 0x10ae04: 0xe4e10020  swc1        $f1, 0x20($a3)
    ctx->pc = 0x10ae04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x10ae08: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x10ae08u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x10ae0c: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x10ae0cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x10ae10: 0xe4e5002c  swc1        $f5, 0x2C($a3)
    ctx->pc = 0x10ae10u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 44), bits); }
    // 0x10ae14: 0xe4e20024  swc1        $f2, 0x24($a3)
    ctx->pc = 0x10ae14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
    // 0x10ae18: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x10ae18u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x10ae1c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x10ae1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x10ae20: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x10ae20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x10ae24: 0x44043000  mfc1        $a0, $f6
    ctx->pc = 0x10ae24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x10ae28: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x10ae28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x10ae2c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x10ae2cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x10ae30: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x10ae30u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x10ae34: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x10ae34u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x10ae38: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x10ae38u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x10ae3c: 0xc4e3002c  lwc1        $f3, 0x2C($a3)
    ctx->pc = 0x10ae3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x10ae40: 0x24e60040  addiu       $a2, $a3, 0x40
    ctx->pc = 0x10ae40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x10ae44: 0xc4e00028  lwc1        $f0, 0x28($a3)
    ctx->pc = 0x10ae44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10ae48: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x10ae48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x10ae4c: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x10ae4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x10ae50: 0x44043000  mfc1        $a0, $f6
    ctx->pc = 0x10ae50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x10ae54: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x10ae54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x10ae58: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x10ae58u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x10ae5c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x10ae5cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x10ae60: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x10ae60u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x10ae64: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x10ae64u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x10ae68: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x10ae68u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10ae6c: 0xd9030000  lqc2        $vf3, 0x0($t0)
    ctx->pc = 0x10ae6cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x10ae70: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x10ae70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10ae74: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x10ae74u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x10ae78: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x10ae78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x10ae7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10ae7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10ae80: 0x94e20054  lhu         $v0, 0x54($a3)
    ctx->pc = 0x10ae80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 84)));
    // 0x10ae84: 0x94e30056  lhu         $v1, 0x56($a3)
    ctx->pc = 0x10ae84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 86)));
    // 0x10ae88: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x10ae88u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x10ae8c: 0xe4e00064  swc1        $f0, 0x64($a3)
    ctx->pc = 0x10ae8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 100), bits); }
    // 0x10ae90: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x10ae90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x10ae94: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x10ae94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x10ae98: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x10ae98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x10ae9c: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x10ae9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x10aea0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x10aea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x10aea4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x10aea4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x10aea8: 0xc4e20064  lwc1        $f2, 0x64($a3)
    ctx->pc = 0x10aea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10aeac: 0xe4e00060  swc1        $f0, 0x60($a3)
    ctx->pc = 0x10aeacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 96), bits); }
    // 0x10aeb0: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x10aeb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x10aeb4: 0x46003106  mov.s       $f4, $f6
    ctx->pc = 0x10aeb4u;
    ctx->f[4] = FPU_MOV_S(ctx->f[6]);
    // 0x10aeb8: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x10aeb8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x10aebc: 0xa4e0000e  sh          $zero, 0xE($a3)
    ctx->pc = 0x10aebcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x10aec0: 0x46030802  mul.s       $f0, $f1, $f3
    ctx->pc = 0x10aec0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x10aec4: 0xe4e10028  swc1        $f1, 0x28($a3)
    ctx->pc = 0x10aec4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
    // 0x10aec8: 0x460310c2  mul.s       $f3, $f2, $f3
    ctx->pc = 0x10aec8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x10aecc: 0xe4e2002c  swc1        $f2, 0x2C($a3)
    ctx->pc = 0x10aeccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 44), bits); }
    // 0x10aed0: 0xe4e00020  swc1        $f0, 0x20($a3)
    ctx->pc = 0x10aed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x10aed4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x10aed4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x10aed8: 0xe4e30024  swc1        $f3, 0x24($a3)
    ctx->pc = 0x10aed8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
    // 0x10aedc: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x10aedcu;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x10aee0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x10aee0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x10aee4: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x10aee4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x10aee8: 0x44042000  mfc1        $a0, $f4
    ctx->pc = 0x10aee8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x10aeec: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x10aeecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x10aef0: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x10aef0u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x10aef4: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x10aef4u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x10aef8: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x10aef8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x10aefc: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x10aefcu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x10af00: 0xc4e1002c  lwc1        $f1, 0x2C($a3)
    ctx->pc = 0x10af00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10af04: 0xc4e00028  lwc1        $f0, 0x28($a3)
    ctx->pc = 0x10af04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10af08: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x10af08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x10af0c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x10af0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x10af10: 0x44042000  mfc1        $a0, $f4
    ctx->pc = 0x10af10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x10af14: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x10af14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x10af18: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x10af18u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x10af1c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x10af1cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x10af20: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x10af20u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x10af24: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x10af24u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x10af28: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x10af28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10af2c: 0xd9030000  lqc2        $vf3, 0x0($t0)
    ctx->pc = 0x10af2cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x10af30: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x10af30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10af34: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x10af34u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x10af38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10af38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x10af3cu;
}
