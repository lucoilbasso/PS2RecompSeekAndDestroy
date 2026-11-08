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

// Function: entry_001a47bc
// Address: 0x1a47bc - 0x1a47cc
void entry_001a47bc_0x1a47bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a47bc_0x1a47bc");
#endif

    ctx->pc = 0x1a47bcu;

    // 0x1a47bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A47BCu;
    {
        const bool branch_taken_0x1a47bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a47bc) {
            ctx->pc = 0x1A47CCu;
            return;
        }
    }
    ctx->pc = 0x1A47C4u;
    // 0x1a47c4: 0x0  nop
    ctx->pc = 0x1a47c4u;
    // NOP
    // 0x1a47c8: 0x4b021b3c  vmove.x     $vf2, $vf3
    ctx->pc = 0x1a47c8u;
    { __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    ctx->pc = 0x1a47ccu;
}
