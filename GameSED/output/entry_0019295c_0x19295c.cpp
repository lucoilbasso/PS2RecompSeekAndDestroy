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

// Function: entry_0019295c
// Address: 0x19295c - 0x192968
void entry_0019295c_0x19295c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019295c_0x19295c");
#endif

    ctx->pc = 0x19295cu;

    // 0x19295c: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x19295cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x192960: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x192960u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x192964: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x192964u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    ctx->pc = 0x192968u;
}
