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
// Address: 0x1a1f60 - 0x1a1f70
void caseD_1_0x1a1f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1a1f60");
#endif

    ctx->pc = 0x1a1f60u;

    // 0x1a1f60: 0x4ac21b3c  vmove.yz    $vf2, $vf3
    ctx->pc = 0x1a1f60u;
    { __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x1a1f64: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1A1F64u;
    {
        const bool branch_taken_0x1a1f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1f64) {
            ctx->pc = 0x1A1FB4u;
            return;
        }
    }
    ctx->pc = 0x1A1F6Cu;
    // 0x1a1f6c: 0x0  nop
    ctx->pc = 0x1a1f6cu;
    // NOP
    ctx->pc = 0x1a1f70u;
}
