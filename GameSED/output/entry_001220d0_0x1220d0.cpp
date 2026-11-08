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

// Function: entry_001220d0
// Address: 0x1220d0 - 0x122140
void entry_001220d0_0x1220d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001220d0_0x1220d0");
#endif

    ctx->pc = 0x1220d0u;

    // 0x1220d0: 0xc6000170  lwc1        $f0, 0x170($s0)
    ctx->pc = 0x1220d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1220d4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1220d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1220d8: 0xe601016c  swc1        $f1, 0x16C($s0)
    ctx->pc = 0x1220d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 364), bits); }
    // 0x1220dc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1220dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1220e0: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x1220e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1220e4: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x1220e4u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1220e8: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x1220e8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1220ec: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x1220ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x1220f0: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1220f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1220f4: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x1220f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x1220f8: 0x2484f640  addiu       $a0, $a0, -0x9C0
    ctx->pc = 0x1220f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964800));
    // 0x1220fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1220fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x122100: 0x3c012000  lui         $at, 0x2000
    ctx->pc = 0x122100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8192 << 16));
    // 0x122104: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x122104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x122108: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x122108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12210c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x12210cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x122110: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x122110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x122114: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x122114u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x122118: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x122118u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x12211c: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x12211cu;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x122120: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x122120u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x122124: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x122124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x122128: 0x24632000  addiu       $v1, $v1, 0x2000
    ctx->pc = 0x122128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8192));
    // 0x12212c: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x12212cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x122130: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x122130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x122134: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x122134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x122138: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x122138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12213c: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x12213cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    ctx->pc = 0x122140u;
}
