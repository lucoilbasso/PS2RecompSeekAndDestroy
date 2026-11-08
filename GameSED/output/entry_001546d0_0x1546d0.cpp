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

// Function: entry_001546d0
// Address: 0x1546d0 - 0x1546e8
void entry_001546d0_0x1546d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001546d0_0x1546d0");
#endif

    ctx->pc = 0x1546d0u;

    // 0x1546d0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1546d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1546d4: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x1546d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1546d8: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x1546d8u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1546dc: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x1546dcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1546e0: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x1546e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x1546e4: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1546e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1546e8u;
}
