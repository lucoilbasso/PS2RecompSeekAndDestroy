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

// Function: entry_0014b158
// Address: 0x14b158 - 0x14b170
void entry_0014b158_0x14b158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b158_0x14b158");
#endif

    ctx->pc = 0x14b158u;

    // 0x14b158: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x14b158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x14b15c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x14b15cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x14b160: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x14b160u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x14b164: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x14b164u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x14b168: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x14b168u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x14b16c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14b16cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    ctx->pc = 0x14b170u;
}
