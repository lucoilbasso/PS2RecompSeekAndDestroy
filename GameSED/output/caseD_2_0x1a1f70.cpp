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
// Address: 0x1a1f70 - 0x1a1f80
void caseD_2_0x1a1f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x1a1f70");
#endif

    ctx->pc = 0x1a1f70u;

    // 0x1a1f70: 0x4b421b3c  vmove.xz    $vf2, $vf3
    ctx->pc = 0x1a1f70u;
    { __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x1a1f74: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1A1F74u;
    {
        const bool branch_taken_0x1a1f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1f74) {
            ctx->pc = 0x1A1FB4u;
            return;
        }
    }
    ctx->pc = 0x1A1F7Cu;
    // 0x1a1f7c: 0x0  nop
    ctx->pc = 0x1a1f7cu;
    // NOP
    ctx->pc = 0x1a1f80u;
}
