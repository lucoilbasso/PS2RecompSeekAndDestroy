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

// Function: entry_001a64a0
// Address: 0x1a64a0 - 0x1a64c8
void entry_001a64a0_0x1a64a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a64a0_0x1a64a0");
#endif

    ctx->pc = 0x1a64a0u;

    // 0x1a64a0: 0x30a37fff  andi        $v1, $a1, 0x7FFF
    ctx->pc = 0x1a64a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32767);
    // 0x1a64a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a64a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a64a8: 0x3c012022  lui         $at, 0x2022
    ctx->pc = 0x1a64a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8226 << 16));
    // 0x1a64ac: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x1a64acu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x1a64b0: 0xc420f640  lwc1        $f0, -0x9C0($at)
    ctx->pc = 0x1a64b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294964800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a64b4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1a64b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1a64b8: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x1a64b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1a64bc: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x1a64bcu;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1a64c0: 0x48242800  qmfc2.ni    $a0, $vf5
    ctx->pc = 0x1a64c0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1a64c4: 0x42000  sll         $a0, $a0, 0
    ctx->pc = 0x1a64c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 0));
    ctx->pc = 0x1a64c8u;
}
