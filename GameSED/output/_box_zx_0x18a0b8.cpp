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

// Function: _box_zx
// Address: 0x18a0b8 - 0x18a0cc
void _box_zx_0x18a0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_box_zx_0x18a0b8");
#endif

    ctx->pc = 0x18a0b8u;

    // 0x18a0b8: 0x4a486268  vadd.z      $vf9, $vf12, $vf8
    ctx->pc = 0x18a0b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x18a0bc: 0x4b0862a8  vadd.x      $vf10, $vf12, $vf8
    ctx->pc = 0x18a0bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x18a0c0: 0x8062835  j           func_18A0D4
    ctx->pc = 0x18A0C0u;
    ctx->pc = 0x18A0D4u;
    _box_draw_0x18a0d4(rdram, ctx, runtime); return;
    ctx->pc = 0x18A0C8u;
    // 0x18a0c8: 0x0  nop
    ctx->pc = 0x18a0c8u;
    // NOP
    ctx->pc = 0x18a0ccu;
}
