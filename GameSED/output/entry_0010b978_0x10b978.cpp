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

// Function: entry_0010b978
// Address: 0x10b978 - 0x10ba24
void entry_0010b978_0x10b978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b978_0x10b978");
#endif

    ctx->pc = 0x10b978u;

    // 0x10b978: 0xe4e00064  swc1        $f0, 0x64($a3)
    ctx->pc = 0x10b978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 100), bits); }
    // 0x10b97c: 0x94e20054  lhu         $v0, 0x54($a3)
    ctx->pc = 0x10b97cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 84)));
    // 0x10b980: 0x94e30056  lhu         $v1, 0x56($a3)
    ctx->pc = 0x10b980u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 86)));
    // 0x10b984: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10b984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10b988: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x10b988u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x10b98c: 0xc4e40064  lwc1        $f4, 0x64($a3)
    ctx->pc = 0x10b98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x10b990: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x10b990u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x10b994: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x10b994u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x10b998: 0xc4e10060  lwc1        $f1, 0x60($a3)
    ctx->pc = 0x10b998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10b99c: 0xa4e0000e  sh          $zero, 0xE($a3)
    ctx->pc = 0x10b99cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x10b9a0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x10b9a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x10b9a4: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x10b9a4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x10b9a8: 0x46060882  mul.s       $f2, $f1, $f6
    ctx->pc = 0x10b9a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x10b9ac: 0xe4e10028  swc1        $f1, 0x28($a3)
    ctx->pc = 0x10b9acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
    // 0x10b9b0: 0x46061802  mul.s       $f0, $f3, $f6
    ctx->pc = 0x10b9b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x10b9b4: 0xe4e3002c  swc1        $f3, 0x2C($a3)
    ctx->pc = 0x10b9b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 44), bits); }
    // 0x10b9b8: 0xe4e20020  swc1        $f2, 0x20($a3)
    ctx->pc = 0x10b9b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x10b9bc: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x10b9bcu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x10b9c0: 0xe4e00024  swc1        $f0, 0x24($a3)
    ctx->pc = 0x10b9c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
    // 0x10b9c4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x10b9c4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x10b9c8: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x10b9c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x10b9cc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x10b9ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x10b9d0: 0x44042800  mfc1        $a0, $f5
    ctx->pc = 0x10b9d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x10b9d4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x10b9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x10b9d8: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x10b9d8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x10b9dc: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x10b9dcu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x10b9e0: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x10b9e0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x10b9e4: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x10b9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x10b9e8: 0xc4e1002c  lwc1        $f1, 0x2C($a3)
    ctx->pc = 0x10b9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10b9ec: 0x24e60040  addiu       $a2, $a3, 0x40
    ctx->pc = 0x10b9ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x10b9f0: 0xc4e00028  lwc1        $f0, 0x28($a3)
    ctx->pc = 0x10b9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10b9f4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x10b9f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x10b9f8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x10b9f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x10b9fc: 0x44042800  mfc1        $a0, $f5
    ctx->pc = 0x10b9fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x10ba00: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x10ba00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x10ba04: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x10ba04u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x10ba08: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x10ba08u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x10ba0c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x10ba0cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x10ba10: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x10ba10u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x10ba14: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x10ba14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10ba18: 0xd9030000  lqc2        $vf3, 0x0($t0)
    ctx->pc = 0x10ba18u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x10ba1c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x10ba1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10ba20: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x10ba20u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    ctx->pc = 0x10ba24u;
}
