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

// Function: caseD_4
// Address: 0x1a2038 - 0x1a2048
void caseD_4_0x1a2038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1a2038");
#endif

    ctx->pc = 0x1a2038u;

    // 0x1a2038: 0x4a42033c  vmove.z     $vf2, $vf0
    ctx->pc = 0x1a2038u;
    { __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a203c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A203Cu;
    {
        const bool branch_taken_0x1a203c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a203c) {
            ctx->pc = 0x1A206Cu;
            return;
        }
    }
    ctx->pc = 0x1A2044u;
    // 0x1a2044: 0x0  nop
    ctx->pc = 0x1a2044u;
    // NOP
    ctx->pc = 0x1a2048u;
}
