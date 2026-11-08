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

// Function: entry_00145504
// Address: 0x145504 - 0x14553c
void entry_00145504_0x145504(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145504_0x145504");
#endif

    ctx->pc = 0x145504u;

    // 0x145504: 0x46026329  min.s       $f12, $f12, $f2
    ctx->pc = 0x145504u;
    ctx->f[12] = std::min(ctx->f[12], ctx->f[2]);
    // 0x145508: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x145508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x14550c: 0x2463fcb0  addiu       $v1, $v1, -0x350
    ctx->pc = 0x14550cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966448));
    // 0x145510: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x145510u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x145514: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x145514u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x145518: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x145518u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x14551c: 0x48242800  qmfc2.ni    $a0, $vf5
    ctx->pc = 0x14551cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x145520: 0x42000  sll         $a0, $a0, 0
    ctx->pc = 0x145520u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 0));
    // 0x145524: 0xac640414  sw          $a0, 0x414($v1)
    ctx->pc = 0x145524u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1044), GPR_U32(ctx, 4));
    // 0x145528: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x145528u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14552c: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x14552cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x145530: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x145530u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x145534: 0x48252800  qmfc2.ni    $a1, $vf5
    ctx->pc = 0x145534u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x145538: 0x52800  sll         $a1, $a1, 0
    ctx->pc = 0x145538u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
    ctx->pc = 0x14553cu;
}
