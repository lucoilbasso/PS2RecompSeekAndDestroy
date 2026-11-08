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

// Function: entry_00190344
// Address: 0x190344 - 0x190350
void entry_00190344_0x190344(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190344_0x190344");
#endif

    ctx->pc = 0x190344u;

    // 0x190344: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x190344u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x190348: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x190348u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x19034c: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x19034cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    ctx->pc = 0x190350u;
}
