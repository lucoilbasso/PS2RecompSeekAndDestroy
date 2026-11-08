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

// Function: entry_00150b20
// Address: 0x150b20 - 0x150b74
void entry_00150b20_0x150b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150b20_0x150b20");
#endif

    ctx->pc = 0x150b20u;

    // 0x150b20: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x150b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150b24: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x150b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x150b28: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x150b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x150b2c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x150b2cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x150b30: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x150b30u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x150b34: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x150b34u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x150b38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x150b38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x150b3c: 0xc7828238  lwc1        $f2, -0x7DC8($gp)
    ctx->pc = 0x150b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x150b40: 0xc6400620  lwc1        $f0, 0x620($s2)
    ctx->pc = 0x150b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150b44: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x150b44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x150b48: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x150b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x150b4c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x150b4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x150b50: 0xe6400620  swc1        $f0, 0x620($s2)
    ctx->pc = 0x150b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1568), bits); }
    // 0x150b54: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x150b54u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x150b58: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x150b58u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x150b5c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x150b5cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x150b60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x150b60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x150b64: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x150b64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x150b68: 0xc6400628  lwc1        $f0, 0x628($s2)
    ctx->pc = 0x150b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150b6c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x150b6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x150b70: 0xe6400628  swc1        $f0, 0x628($s2)
    ctx->pc = 0x150b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1576), bits); }
    ctx->pc = 0x150b74u;
}
