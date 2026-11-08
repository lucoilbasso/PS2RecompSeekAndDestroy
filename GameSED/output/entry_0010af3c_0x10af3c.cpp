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

// Function: entry_0010af3c
// Address: 0x10af3c - 0x10b10c
void entry_0010af3c_0x10af3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010af3c_0x10af3c");
#endif

    ctx->pc = 0x10af3cu;

    // 0x10af3c: 0x17c20073  bne         $fp, $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x10AF3Cu;
    {
        const bool branch_taken_0x10af3c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x10AF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AF3Cu;
        // 0x10af40: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10af3c) {
            ctx->pc = 0x10B10Cu;
            return;
        }
    }
    ctx->pc = 0x10AF44u;
    // 0x10af44: 0x26470150  addiu       $a3, $s2, 0x150
    ctx->pc = 0x10af44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    // 0x10af48: 0xc7838040  lwc1        $f3, -0x7FC0($gp)
    ctx->pc = 0x10af48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x10af4c: 0x94e20050  lhu         $v0, 0x50($a3)
    ctx->pc = 0x10af4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x10af50: 0x24e80030  addiu       $t0, $a3, 0x30
    ctx->pc = 0x10af50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x10af54: 0x94e30052  lhu         $v1, 0x52($a3)
    ctx->pc = 0x10af54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 82)));
    // 0x10af58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10af58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10af5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x10af5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x10af60: 0x94e20056  lhu         $v0, 0x56($a3)
    ctx->pc = 0x10af60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 86)));
    // 0x10af64: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x10af64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x10af68: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x10af68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x10af6c: 0x94e40054  lhu         $a0, 0x54($a3)
    ctx->pc = 0x10af6cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 84)));
    // 0x10af70: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x10af70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x10af74: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x10af74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x10af78: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x10af78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x10af7c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x10af7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x10af80: 0x44843800  mtc1        $a0, $f7
    ctx->pc = 0x10af80u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x10af84: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x10af84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x10af88: 0xa4e0000e  sh          $zero, 0xE($a3)
    ctx->pc = 0x10af88u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x10af8c: 0x0  nop
    ctx->pc = 0x10af8cu;
    // NOP
    // 0x10af90: 0x0  nop
    ctx->pc = 0x10af90u;
    // NOP
    // 0x10af94: 0x46001843  div.s       $f1, $f3, $f0
    ctx->pc = 0x10af94u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x10af98: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x10af98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x10af9c: 0x0  nop
    ctx->pc = 0x10af9cu;
    // NOP
    // 0x10afa0: 0x0  nop
    ctx->pc = 0x10afa0u;
    // NOP
    // 0x10afa4: 0x460418c3  div.s       $f3, $f3, $f4
    ctx->pc = 0x10afa4u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[4]); }
    // 0x10afa8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x10afa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x10afac: 0xe4e10068  swc1        $f1, 0x68($a3)
    ctx->pc = 0x10afacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 104), bits); }
    // 0x10afb0: 0xe4e00060  swc1        $f0, 0x60($a3)
    ctx->pc = 0x10afb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 96), bits); }
    // 0x10afb4: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x10afb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x10afb8: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x10afb8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x10afbc: 0xe4e3006c  swc1        $f3, 0x6C($a3)
    ctx->pc = 0x10afbcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 108), bits); }
    // 0x10afc0: 0x46020042  mul.s       $f1, $f0, $f2
    ctx->pc = 0x10afc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x10afc4: 0xe4e00028  swc1        $f0, 0x28($a3)
    ctx->pc = 0x10afc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
    // 0x10afc8: 0x460020c6  mov.s       $f3, $f4
    ctx->pc = 0x10afc8u;
    ctx->f[3] = FPU_MOV_S(ctx->f[4]);
    // 0x10afcc: 0x46051942  mul.s       $f5, $f3, $f5
    ctx->pc = 0x10afccu;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x10afd0: 0xe4e30064  swc1        $f3, 0x64($a3)
    ctx->pc = 0x10afd0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 100), bits); }
    // 0x10afd4: 0xe4e10020  swc1        $f1, 0x20($a3)
    ctx->pc = 0x10afd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x10afd8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x10afd8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x10afdc: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x10afdcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x10afe0: 0xe4e5002c  swc1        $f5, 0x2C($a3)
    ctx->pc = 0x10afe0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 44), bits); }
    // 0x10afe4: 0xe4e20024  swc1        $f2, 0x24($a3)
    ctx->pc = 0x10afe4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
    // 0x10afe8: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x10afe8u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x10afec: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x10afecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x10aff0: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x10aff0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x10aff4: 0x44043000  mfc1        $a0, $f6
    ctx->pc = 0x10aff4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x10aff8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x10aff8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x10affc: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x10affcu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x10b000: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x10b000u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x10b004: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x10b004u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x10b008: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x10b008u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x10b00c: 0xc4e3002c  lwc1        $f3, 0x2C($a3)
    ctx->pc = 0x10b00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x10b010: 0x24e60040  addiu       $a2, $a3, 0x40
    ctx->pc = 0x10b010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x10b014: 0xc4e00028  lwc1        $f0, 0x28($a3)
    ctx->pc = 0x10b014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10b018: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x10b018u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x10b01c: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x10b01cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x10b020: 0x44043000  mfc1        $a0, $f6
    ctx->pc = 0x10b020u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x10b024: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x10b024u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x10b028: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x10b028u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x10b02c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x10b02cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x10b030: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x10b030u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x10b034: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x10b034u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x10b038: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x10b038u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10b03c: 0xd9030000  lqc2        $vf3, 0x0($t0)
    ctx->pc = 0x10b03cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x10b040: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x10b040u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10b044: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x10b044u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x10b048: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x10b048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
    // 0x10b04c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10b04cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10b050: 0x94e20054  lhu         $v0, 0x54($a3)
    ctx->pc = 0x10b050u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 84)));
    // 0x10b054: 0x94e30056  lhu         $v1, 0x56($a3)
    ctx->pc = 0x10b054u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 86)));
    // 0x10b058: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x10b058u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x10b05c: 0xe4e00064  swc1        $f0, 0x64($a3)
    ctx->pc = 0x10b05cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 100), bits); }
    // 0x10b060: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x10b060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x10b064: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x10b064u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x10b068: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x10b068u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x10b06c: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x10b06cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x10b070: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x10b070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x10b074: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x10b074u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x10b078: 0xc4e20064  lwc1        $f2, 0x64($a3)
    ctx->pc = 0x10b078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10b07c: 0xe4e00060  swc1        $f0, 0x60($a3)
    ctx->pc = 0x10b07cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 96), bits); }
    // 0x10b080: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x10b080u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x10b084: 0x46003106  mov.s       $f4, $f6
    ctx->pc = 0x10b084u;
    ctx->f[4] = FPU_MOV_S(ctx->f[6]);
    // 0x10b088: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x10b088u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x10b08c: 0xa4e0000e  sh          $zero, 0xE($a3)
    ctx->pc = 0x10b08cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x10b090: 0x46030802  mul.s       $f0, $f1, $f3
    ctx->pc = 0x10b090u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x10b094: 0xe4e10028  swc1        $f1, 0x28($a3)
    ctx->pc = 0x10b094u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
    // 0x10b098: 0x460310c2  mul.s       $f3, $f2, $f3
    ctx->pc = 0x10b098u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x10b09c: 0xe4e2002c  swc1        $f2, 0x2C($a3)
    ctx->pc = 0x10b09cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 44), bits); }
    // 0x10b0a0: 0xe4e00020  swc1        $f0, 0x20($a3)
    ctx->pc = 0x10b0a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x10b0a4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x10b0a4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x10b0a8: 0xe4e30024  swc1        $f3, 0x24($a3)
    ctx->pc = 0x10b0a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
    // 0x10b0ac: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x10b0acu;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x10b0b0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x10b0b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x10b0b4: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x10b0b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x10b0b8: 0x44042000  mfc1        $a0, $f4
    ctx->pc = 0x10b0b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x10b0bc: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x10b0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x10b0c0: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x10b0c0u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x10b0c4: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x10b0c4u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x10b0c8: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x10b0c8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x10b0cc: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x10b0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x10b0d0: 0xc4e1002c  lwc1        $f1, 0x2C($a3)
    ctx->pc = 0x10b0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10b0d4: 0xc4e00028  lwc1        $f0, 0x28($a3)
    ctx->pc = 0x10b0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10b0d8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x10b0d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x10b0dc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x10b0dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x10b0e0: 0x44042000  mfc1        $a0, $f4
    ctx->pc = 0x10b0e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x10b0e4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x10b0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x10b0e8: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x10b0e8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x10b0ec: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x10b0ecu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x10b0f0: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x10b0f0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x10b0f4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x10b0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x10b0f8: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x10b0f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10b0fc: 0xd9030000  lqc2        $vf3, 0x0($t0)
    ctx->pc = 0x10b0fcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x10b100: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x10b100u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10b104: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x10b104u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x10b108: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x10b108u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    ctx->pc = 0x10b10cu;
}
