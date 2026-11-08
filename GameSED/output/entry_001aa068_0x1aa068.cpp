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

// Function: entry_001aa068
// Address: 0x1aa068 - 0x1aa08c
void entry_001aa068_0x1aa068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa068_0x1aa068");
#endif

    ctx->pc = 0x1aa068u;

    // 0x1aa068: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1aa068u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1aa06c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1aa06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1aa070: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1aa070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1aa074: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1aa074u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1aa078: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1aa078u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1aa07c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1aa07cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1aa080: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aa080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aa084: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1aa084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1aa088: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x1aa088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    ctx->pc = 0x1aa08cu;
}
