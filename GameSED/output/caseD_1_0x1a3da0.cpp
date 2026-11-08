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

// Function: caseD_1
// Address: 0x1a3da0 - 0x1a3db0
void caseD_1_0x1a3da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1a3da0");
#endif

    ctx->pc = 0x1a3da0u;

    // 0x1a3da0: 0x4b02033c  vmove.x     $vf2, $vf0
    ctx->pc = 0x1a3da0u;
    { __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a3da4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1A3DA4u;
    {
        const bool branch_taken_0x1a3da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3da4) {
            ctx->pc = 0x1A3E04u;
            return;
        }
    }
    ctx->pc = 0x1A3DACu;
    // 0x1a3dac: 0x0  nop
    ctx->pc = 0x1a3dacu;
    // NOP
    ctx->pc = 0x1a3db0u;
}
