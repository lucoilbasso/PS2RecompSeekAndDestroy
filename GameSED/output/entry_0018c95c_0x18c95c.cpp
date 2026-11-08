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

// Function: entry_0018c95c
// Address: 0x18c95c - 0x18cb78
void entry_0018c95c_0x18c95c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c95c_0x18c95c");
#endif

    ctx->pc = 0x18c95cu;

    // 0x18c95c: 0x26070150  addiu       $a3, $s0, 0x150
    ctx->pc = 0x18c95cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x18c960: 0x94e40054  lhu         $a0, 0x54($a3)
    ctx->pc = 0x18c960u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 84)));
    // 0x18c964: 0x24e80030  addiu       $t0, $a3, 0x30
    ctx->pc = 0x18c964u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x18c968: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x18c968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x18c96c: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x18c96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x18c970: 0x44843000  mtc1        $a0, $f6
    ctx->pc = 0x18c970u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x18c974: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x18c974u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x18c978: 0xa4e20050  sh          $v0, 0x50($a3)
    ctx->pc = 0x18c978u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 80), (uint16_t)GPR_U32(ctx, 2));
    // 0x18c97c: 0xa4e30052  sh          $v1, 0x52($a3)
    ctx->pc = 0x18c97cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 82), (uint16_t)GPR_U32(ctx, 3));
    // 0x18c980: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x18c980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x18c984: 0x94e20050  lhu         $v0, 0x50($a3)
    ctx->pc = 0x18c984u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x18c988: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18c988u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c98c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18c98cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18c990: 0x94e40056  lhu         $a0, 0x56($a3)
    ctx->pc = 0x18c990u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 86)));
    // 0x18c994: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18c994u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18c998: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x18c998u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x18c99c: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x18c99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x18c9a0: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x18c9a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x18c9a4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x18c9a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x18c9a8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x18c9a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x18c9ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18c9acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18c9b0: 0x46000106  mov.s       $f4, $f0
    ctx->pc = 0x18c9b0u;
    ctx->f[4] = FPU_MOV_S(ctx->f[0]);
    // 0x18c9b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18c9b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18c9b8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x18c9b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x18c9bc: 0xace20058  sw          $v0, 0x58($a3)
    ctx->pc = 0x18c9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 88), GPR_U32(ctx, 2));
    // 0x18c9c0: 0xe4e20060  swc1        $f2, 0x60($a3)
    ctx->pc = 0x18c9c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 96), bits); }
    // 0x18c9c4: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x18c9c4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x18c9c8: 0xe4e5006c  swc1        $f5, 0x6C($a3)
    ctx->pc = 0x18c9c8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 108), bits); }
    // 0x18c9cc: 0xc4e20060  lwc1        $f2, 0x60($a3)
    ctx->pc = 0x18c9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18c9d0: 0xe4e50068  swc1        $f5, 0x68($a3)
    ctx->pc = 0x18c9d0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 104), bits); }
    // 0x18c9d4: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x18c9d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x18c9d8: 0xe4e40064  swc1        $f4, 0x64($a3)
    ctx->pc = 0x18c9d8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 100), bits); }
    // 0x18c9dc: 0xe4e3002c  swc1        $f3, 0x2C($a3)
    ctx->pc = 0x18c9dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 44), bits); }
    // 0x18c9e0: 0xa4e0000e  sh          $zero, 0xE($a3)
    ctx->pc = 0x18c9e0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x18c9e4: 0x46011002  mul.s       $f0, $f2, $f1
    ctx->pc = 0x18c9e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x18c9e8: 0xe4e20028  swc1        $f2, 0x28($a3)
    ctx->pc = 0x18c9e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
    // 0x18c9ec: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x18c9ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x18c9f0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x18c9f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18c9f4: 0xe4e00020  swc1        $f0, 0x20($a3)
    ctx->pc = 0x18c9f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x18c9f8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x18c9f8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x18c9fc: 0xe4e10024  swc1        $f1, 0x24($a3)
    ctx->pc = 0x18c9fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
    // 0x18ca00: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x18ca00u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x18ca04: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x18ca04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18ca08: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x18ca08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18ca0c: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x18ca0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x18ca10: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x18ca10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x18ca14: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x18ca14u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x18ca18: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x18ca18u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x18ca1c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x18ca1cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x18ca20: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x18ca20u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x18ca24: 0xc4e3002c  lwc1        $f3, 0x2C($a3)
    ctx->pc = 0x18ca24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18ca28: 0x24e60040  addiu       $a2, $a3, 0x40
    ctx->pc = 0x18ca28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x18ca2c: 0xc4e00028  lwc1        $f0, 0x28($a3)
    ctx->pc = 0x18ca2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ca30: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x18ca30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18ca34: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x18ca34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18ca38: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x18ca38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x18ca3c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x18ca3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x18ca40: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x18ca40u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x18ca44: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x18ca44u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x18ca48: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x18ca48u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x18ca4c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x18ca4cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x18ca50: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x18ca50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18ca54: 0xd9030000  lqc2        $vf3, 0x0($t0)
    ctx->pc = 0x18ca54u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18ca58: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x18ca58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x18ca5c: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x18ca5cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x18ca60: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x18ca60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x18ca64: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x18ca64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x18ca68: 0x94e20050  lhu         $v0, 0x50($a3)
    ctx->pc = 0x18ca68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x18ca6c: 0x94e30052  lhu         $v1, 0x52($a3)
    ctx->pc = 0x18ca6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 82)));
    // 0x18ca70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ca70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ca74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18ca74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18ca78: 0xc4e10068  lwc1        $f1, 0x68($a3)
    ctx->pc = 0x18ca78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ca7c: 0x8e050230  lw          $a1, 0x230($s0)
    ctx->pc = 0x18ca7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
    // 0x18ca80: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x18ca80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x18ca84: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x18ca84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x18ca88: 0x8e040234  lw          $a0, 0x234($s0)
    ctx->pc = 0x18ca88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x18ca8c: 0xa4e50054  sh          $a1, 0x54($a3)
    ctx->pc = 0x18ca8cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 84), (uint16_t)GPR_U32(ctx, 5));
    // 0x18ca90: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x18ca90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18ca94: 0xc4e2006c  lwc1        $f2, 0x6C($a3)
    ctx->pc = 0x18ca94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18ca98: 0x94e20054  lhu         $v0, 0x54($a3)
    ctx->pc = 0x18ca98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 84)));
    // 0x18ca9c: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x18ca9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x18caa0: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x18caa0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x18caa4: 0xa4e40056  sh          $a0, 0x56($a3)
    ctx->pc = 0x18caa4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 86), (uint16_t)GPR_U32(ctx, 4));
    // 0x18caa8: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x18caa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x18caac: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x18caacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x18cab0: 0x8e040214  lw          $a0, 0x214($s0)
    ctx->pc = 0x18cab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
    // 0x18cab4: 0xe4e00060  swc1        $f0, 0x60($a3)
    ctx->pc = 0x18cab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 96), bits); }
    // 0x18cab8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x18cab8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18cabc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x18cabcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x18cac0: 0xace4005c  sw          $a0, 0x5C($a3)
    ctx->pc = 0x18cac0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 92), GPR_U32(ctx, 4));
    // 0x18cac4: 0xc4e10060  lwc1        $f1, 0x60($a3)
    ctx->pc = 0x18cac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18cac8: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x18cac8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
    // 0x18cacc: 0xe4e30064  swc1        $f3, 0x64($a3)
    ctx->pc = 0x18caccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 100), bits); }
    // 0x18cad0: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x18cad0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x18cad4: 0xa4e0000e  sh          $zero, 0xE($a3)
    ctx->pc = 0x18cad4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x18cad8: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x18cad8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x18cadc: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x18cadcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x18cae0: 0xe4e2002c  swc1        $f2, 0x2C($a3)
    ctx->pc = 0x18cae0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 44), bits); }
    // 0x18cae4: 0x46040802  mul.s       $f0, $f1, $f4
    ctx->pc = 0x18cae4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x18cae8: 0xe4e10028  swc1        $f1, 0x28($a3)
    ctx->pc = 0x18cae8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
    // 0x18caec: 0x46041102  mul.s       $f4, $f2, $f4
    ctx->pc = 0x18caecu;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x18caf0: 0xe4e00020  swc1        $f0, 0x20($a3)
    ctx->pc = 0x18caf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x18caf4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x18caf4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x18caf8: 0xe4e40024  swc1        $f4, 0x24($a3)
    ctx->pc = 0x18caf8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
    // 0x18cafc: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x18cafcu;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
    // 0x18cb00: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x18cb00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18cb04: 0x44032000  mfc1        $v1, $f4
    ctx->pc = 0x18cb04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18cb08: 0x44041800  mfc1        $a0, $f3
    ctx->pc = 0x18cb08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x18cb0c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x18cb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x18cb10: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x18cb10u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x18cb14: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x18cb14u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x18cb18: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x18cb18u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x18cb1c: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x18cb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x18cb20: 0xc4e1002c  lwc1        $f1, 0x2C($a3)
    ctx->pc = 0x18cb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18cb24: 0xc4e00028  lwc1        $f0, 0x28($a3)
    ctx->pc = 0x18cb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18cb28: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x18cb28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18cb2c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x18cb2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18cb30: 0x44041800  mfc1        $a0, $f3
    ctx->pc = 0x18cb30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x18cb34: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x18cb34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x18cb38: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x18cb38u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x18cb3c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x18cb3cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x18cb40: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x18cb40u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x18cb44: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x18cb44u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x18cb48: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x18cb48u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18cb4c: 0xd9030000  lqc2        $vf3, 0x0($t0)
    ctx->pc = 0x18cb4cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18cb50: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x18cb50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x18cb54: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x18cb54u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x18cb58: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x18cb58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x18cb5c: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x18cb5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x18cb60: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x18cb60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x18cb64: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18CB64u;
    {
        const bool branch_taken_0x18cb64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x18CB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CB64u;
        // 0x18cb68: 0xae120228  sw          $s2, 0x228($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cb64) {
            ctx->pc = 0x18CB78u;
            return;
        }
    }
    ctx->pc = 0x18CB6Cu;
    // 0x18cb6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18cb6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cb70: 0xc063a80  jal         func_18EA00
    ctx->pc = 0x18CB70u;
    SET_GPR_U32(ctx, 31, 0x18CB78u);
    ctx->pc = 0x18CB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CB70u;
    // 0x18cb74: 0x3245ffff  andi        $a1, $s2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EA00u, 0x18CB70u, 0x18CB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CB78u;
}
