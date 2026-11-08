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

// Function: caseD_0
// Address: 0x1a1c78 - 0x1a1c88
void caseD_0_0x1a1c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1a1c78");
#endif

    ctx->pc = 0x1a1c78u;

    // 0x1a1c78: 0x4bc21b3c  vmove.xyz   $vf2, $vf3
    ctx->pc = 0x1a1c78u;
    { __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x1a1c7c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1A1C7Cu;
    {
        const bool branch_taken_0x1a1c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1c7c) {
            ctx->pc = 0x1A1CDCu;
            return;
        }
    }
    ctx->pc = 0x1A1C84u;
    // 0x1a1c84: 0x0  nop
    ctx->pc = 0x1a1c84u;
    // NOP
    ctx->pc = 0x1a1c88u;
}
