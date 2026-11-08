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

// Function: entry_00108598
// Address: 0x108598 - 0x1085a8
void entry_00108598_0x108598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108598_0x108598");
#endif

    ctx->pc = 0x108598u;

    // 0x108598: 0x48a62000  qmtc2.ni    $a2, $vf4
    ctx->pc = 0x108598u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x10859c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x10859cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1085a0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1085a0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1085a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1085a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    ctx->pc = 0x1085a8u;
}
