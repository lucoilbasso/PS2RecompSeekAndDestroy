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
// Address: 0x1a1d58 - 0x1a1d68
void caseD_4_0x1a1d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1a1d58");
#endif

    ctx->pc = 0x1a1d58u;

    // 0x1a1d58: 0x4a42033c  vmove.z     $vf2, $vf0
    ctx->pc = 0x1a1d58u;
    { __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a1d5c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A1D5Cu;
    {
        const bool branch_taken_0x1a1d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1d5c) {
            ctx->pc = 0x1A1D8Cu;
            return;
        }
    }
    ctx->pc = 0x1A1D64u;
    // 0x1a1d64: 0x0  nop
    ctx->pc = 0x1a1d64u;
    // NOP
    ctx->pc = 0x1a1d68u;
}
