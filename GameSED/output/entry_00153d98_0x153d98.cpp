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

// Function: entry_00153d98
// Address: 0x153d98 - 0x153dcc
void entry_00153d98_0x153d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153d98_0x153d98");
#endif

    ctx->pc = 0x153d98u;

    // 0x153d98: 0x8e220854  lw          $v0, 0x854($s1)
    ctx->pc = 0x153d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2132)));
    // 0x153d9c: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x153d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x153da0: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x153da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x153da4: 0x3844001e  xori        $a0, $v0, 0x1E
    ctx->pc = 0x153da4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)30);
    // 0x153da8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x153da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x153dac: 0xa4180a  movz        $v1, $a1, $a0
    ctx->pc = 0x153dacu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x153db0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x153db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x153db4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x153db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x153db8: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x153db8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x153dbc: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x153dbcu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x153dc0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x153dc0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x153dc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x153dc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153dc8: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x153dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    ctx->pc = 0x153dccu;
}
