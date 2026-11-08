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

// Function: entry_00153190
// Address: 0x153190 - 0x1531a8
void entry_00153190_0x153190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153190_0x153190");
#endif

    ctx->pc = 0x153190u;

    // 0x153190: 0x8e230370  lw          $v1, 0x370($s1)
    ctx->pc = 0x153190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 880)));
    // 0x153194: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x153194u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x153198: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x153198u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15319c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x15319cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1531a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1531a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1531a4: 0xc620032c  lwc1        $f0, 0x32C($s1)
    ctx->pc = 0x1531a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x1531a8u;
}
