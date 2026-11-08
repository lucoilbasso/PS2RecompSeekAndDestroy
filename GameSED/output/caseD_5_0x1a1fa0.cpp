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

// Function: caseD_5
// Address: 0x1a1fa0 - 0x1a1fb0
void caseD_5_0x1a1fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1a1fa0");
#endif

    ctx->pc = 0x1a1fa0u;

    // 0x1a1fa0: 0x4a821b3c  vmove.y     $vf2, $vf3
    ctx->pc = 0x1a1fa0u;
    { __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x1a1fa4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1FA4u;
    {
        const bool branch_taken_0x1a1fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1fa4) {
            ctx->pc = 0x1A1FB4u;
            return;
        }
    }
    ctx->pc = 0x1A1FACu;
    // 0x1a1fac: 0x0  nop
    ctx->pc = 0x1a1facu;
    // NOP
    ctx->pc = 0x1a1fb0u;
}
