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

// Function: caseD_2
// Address: 0x1a1c98 - 0x1a1ca8
void caseD_2_0x1a1c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x1a1c98");
#endif

    ctx->pc = 0x1a1c98u;

    // 0x1a1c98: 0x4b421b3c  vmove.xz    $vf2, $vf3
    ctx->pc = 0x1a1c98u;
    { __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x1a1c9c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1A1C9Cu;
    {
        const bool branch_taken_0x1a1c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1c9c) {
            ctx->pc = 0x1A1CDCu;
            return;
        }
    }
    ctx->pc = 0x1A1CA4u;
    // 0x1a1ca4: 0x0  nop
    ctx->pc = 0x1a1ca4u;
    // NOP
    ctx->pc = 0x1a1ca8u;
}
