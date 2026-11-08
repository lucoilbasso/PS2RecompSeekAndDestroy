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

// Function: entry_001a3d1c
// Address: 0x1a3d1c - 0x1a3d48
void entry_001a3d1c_0x1a3d1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3d1c_0x1a3d1c");
#endif

    ctx->pc = 0x1a3d1cu;

    // 0x1a3d1c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1a3d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a3d20: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1a3d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a3d24: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x1a3d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x1a3d28: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1a3d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1a3d2c: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x1a3d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x1a3d30: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x1a3d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1a3d34: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x1a3d34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    // 0x1a3d38: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1a3d38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a3d3c: 0x4bc2113f  vitof15.xyz $vf2, $vf2
    ctx->pc = 0x1a3d3cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1a3d40: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1a3d40u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a3d44: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1a3d44u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    ctx->pc = 0x1a3d48u;
}
