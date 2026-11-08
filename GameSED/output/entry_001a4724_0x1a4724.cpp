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

// Function: entry_001a4724
// Address: 0x1a4724 - 0x1a4734
void entry_001a4724_0x1a4724(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4724_0x1a4724");
#endif

    ctx->pc = 0x1a4724u;

    // 0x1a4724: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4724u;
    {
        const bool branch_taken_0x1a4724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4724) {
            ctx->pc = 0x1A4734u;
            return;
        }
    }
    ctx->pc = 0x1A472Cu;
    // 0x1a472c: 0x0  nop
    ctx->pc = 0x1a472cu;
    // NOP
    // 0x1a4730: 0x4b021b3c  vmove.x     $vf2, $vf3
    ctx->pc = 0x1a4730u;
    { __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    ctx->pc = 0x1a4734u;
}
