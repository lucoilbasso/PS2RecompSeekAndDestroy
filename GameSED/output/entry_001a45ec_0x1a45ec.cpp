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

// Function: entry_001a45ec
// Address: 0x1a45ec - 0x1a45fc
void entry_001a45ec_0x1a45ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a45ec_0x1a45ec");
#endif

    ctx->pc = 0x1a45ecu;

    // 0x1a45ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A45ECu;
    {
        const bool branch_taken_0x1a45ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a45ec) {
            ctx->pc = 0x1A45FCu;
            return;
        }
    }
    ctx->pc = 0x1A45F4u;
    // 0x1a45f4: 0x0  nop
    ctx->pc = 0x1a45f4u;
    // NOP
    // 0x1a45f8: 0x4b021b3c  vmove.x     $vf2, $vf3
    ctx->pc = 0x1a45f8u;
    { __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    ctx->pc = 0x1a45fcu;
}
