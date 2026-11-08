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

// Function: caseD_3
// Address: 0x1a1ca8 - 0x1a1cb8
void caseD_3_0x1a1ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1a1ca8");
#endif

    ctx->pc = 0x1a1ca8u;

    // 0x1a1ca8: 0x4a421b3c  vmove.z     $vf2, $vf3
    ctx->pc = 0x1a1ca8u;
    { __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x1a1cac: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A1CACu;
    {
        const bool branch_taken_0x1a1cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1cac) {
            ctx->pc = 0x1A1CDCu;
            return;
        }
    }
    ctx->pc = 0x1A1CB4u;
    // 0x1a1cb4: 0x0  nop
    ctx->pc = 0x1a1cb4u;
    // NOP
    ctx->pc = 0x1a1cb8u;
}
