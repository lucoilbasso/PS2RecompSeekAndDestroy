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

// Function: caseD_50
// Address: 0x19b230 - 0x19b24c
void caseD_50_0x19b230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_50_0x19b230");
#endif

    ctx->pc = 0x19b230u;

    // 0x19b230: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x19b230u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b234: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x19b234u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x19b238: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x19b238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19b23c: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x19b23cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x19b240: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x19b240u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19b244: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x19b244u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x19b248: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19b248u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    ctx->pc = 0x19b24cu;
}
