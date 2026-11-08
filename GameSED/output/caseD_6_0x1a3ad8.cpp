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

// Function: caseD_6
// Address: 0x1a3ad8 - 0x1a3ae8
void caseD_6_0x1a3ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x1a3ad8");
#endif

    ctx->pc = 0x1a3ad8u;

    // 0x1a3ad8: 0x4ac2033c  vmove.yz    $vf2, $vf0
    ctx->pc = 0x1a3ad8u;
    { __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a3adc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A3ADCu;
    {
        const bool branch_taken_0x1a3adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3adc) {
            ctx->pc = 0x1A3AECu;
            return;
        }
    }
    ctx->pc = 0x1A3AE4u;
    // 0x1a3ae4: 0x0  nop
    ctx->pc = 0x1a3ae4u;
    // NOP
    ctx->pc = 0x1a3ae8u;
}
