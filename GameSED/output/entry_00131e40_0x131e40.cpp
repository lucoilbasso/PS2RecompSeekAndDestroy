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

// Function: entry_00131e40
// Address: 0x131e40 - 0x131e50
void entry_00131e40_0x131e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131e40_0x131e40");
#endif

    ctx->pc = 0x131e40u;

    // 0x131e40: 0x48a52000  qmtc2.ni    $a1, $vf4
    ctx->pc = 0x131e40u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x131e44: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x131e44u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x131e48: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x131e48u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x131e4c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x131e4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    ctx->pc = 0x131e50u;
}
