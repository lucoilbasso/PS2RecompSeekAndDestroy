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

// Function: _box_xy
// Address: 0x18a0cc - 0x18a0d4
void _box_xy_0x18a0cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_box_xy_0x18a0cc");
#endif

    ctx->pc = 0x18a0ccu;

    // 0x18a0cc: 0x4b086268  vadd.x      $vf9, $vf12, $vf8
    ctx->pc = 0x18a0ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x18a0d0: 0x4a8862a8  vadd.y      $vf10, $vf12, $vf8
    ctx->pc = 0x18a0d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    ctx->pc = 0x18a0d4u;
}
