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
// Address: 0x1a4520 - 0x1a4530
void caseD_3_0x1a4520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1a4520");
#endif

    ctx->pc = 0x1a4520u;

    // 0x1a4520: 0x4b82033c  vmove.xy    $vf2, $vf0
    ctx->pc = 0x1a4520u;
    { __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a4524: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1A4524u;
    {
        const bool branch_taken_0x1a4524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4524) {
            ctx->pc = 0x1A4564u;
            return;
        }
    }
    ctx->pc = 0x1A452Cu;
    // 0x1a452c: 0x0  nop
    ctx->pc = 0x1a452cu;
    // NOP
    ctx->pc = 0x1a4530u;
}
