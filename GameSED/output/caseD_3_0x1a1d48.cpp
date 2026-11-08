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
// Address: 0x1a1d48 - 0x1a1d58
void caseD_3_0x1a1d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1a1d48");
#endif

    ctx->pc = 0x1a1d48u;

    // 0x1a1d48: 0x4b82033c  vmove.xy    $vf2, $vf0
    ctx->pc = 0x1a1d48u;
    { __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a1d4c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1A1D4Cu;
    {
        const bool branch_taken_0x1a1d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1d4c) {
            ctx->pc = 0x1A1D8Cu;
            return;
        }
    }
    ctx->pc = 0x1A1D54u;
    // 0x1a1d54: 0x0  nop
    ctx->pc = 0x1a1d54u;
    // NOP
    ctx->pc = 0x1a1d58u;
}
