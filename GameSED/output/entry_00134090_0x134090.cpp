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

// Function: entry_00134090
// Address: 0x134090 - 0x1340a4
void entry_00134090_0x134090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134090_0x134090");
#endif

    ctx->pc = 0x134090u;

    // 0x134090: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x134090u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x134094: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x134094u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x134098: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x134098u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x13409c: 0x48302800  qmfc2.ni    $s0, $vf5
    ctx->pc = 0x13409cu;
    SET_GPR_VEC(ctx, 16, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1340a0: 0x108000  sll         $s0, $s0, 0
    ctx->pc = 0x1340a0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 0));
    ctx->pc = 0x1340a4u;
}
