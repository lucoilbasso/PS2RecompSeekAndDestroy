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

// Function: entry_001bed90
// Address: 0x1bed90 - 0x1bed9c
void entry_001bed90_0x1bed90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bed90_0x1bed90");
#endif

    ctx->pc = 0x1bed90u;

    // 0x1bed90: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BED90u;
    {
        const bool branch_taken_0x1bed90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bed90) {
            ctx->pc = 0x1BED94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BED90u;
            // 0x1bed94: 0x8e0201d0  lw          $v0, 0x1D0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BED9Cu;
            return;
        }
    }
    ctx->pc = 0x1BED98u;
    // 0x1bed98: 0x8e0201e0  lw          $v0, 0x1E0($s0)
    ctx->pc = 0x1bed98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
    ctx->pc = 0x1bed9cu;
}
