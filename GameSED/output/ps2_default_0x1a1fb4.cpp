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

// Function: default
// Address: 0x1a1fb4 - 0x1a1fc0
void ps2_default_0x1a1fb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x1a1fb4");
#endif

    ctx->pc = 0x1a1fb4u;

    // 0x1a1fb4: 0xf8a20000  sqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1a1fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1a1fb8: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1A1FB8u;
    {
        const bool branch_taken_0x1a1fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1fb8) {
            ctx->pc = 0x1A2070u;
            return;
        }
    }
    ctx->pc = 0x1A1FC0u;
}
