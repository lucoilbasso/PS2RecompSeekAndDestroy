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

// Function: _box_yz
// Address: 0x18a0a4 - 0x18a0b8
void _box_yz_0x18a0a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_box_yz_0x18a0a4");
#endif

    ctx->pc = 0x18a0a4u;

    // 0x18a0a4: 0x4a886268  vadd.y      $vf9, $vf12, $vf8
    ctx->pc = 0x18a0a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x18a0a8: 0x4a4862a8  vadd.z      $vf10, $vf12, $vf8
    ctx->pc = 0x18a0a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x18a0ac: 0x8062835  j           func_18A0D4
    ctx->pc = 0x18A0ACu;
    ctx->pc = 0x18A0D4u;
    _box_draw_0x18a0d4(rdram, ctx, runtime); return;
    ctx->pc = 0x18A0B4u;
    // 0x18a0b4: 0x0  nop
    ctx->pc = 0x18a0b4u;
    // NOP
    ctx->pc = 0x18a0b8u;
}
