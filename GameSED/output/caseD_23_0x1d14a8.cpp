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

// Function: caseD_23
// Address: 0x1d14a8 - 0x1d14b0
void caseD_23_0x1d14a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_23_0x1d14a8");
#endif

    ctx->pc = 0x1d14a8u;

    // 0x1d14a8: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x1D14A8u;
    {
        const bool branch_taken_0x1d14a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D14ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D14A8u;
        // 0x1d14ac: 0x36f70001  ori         $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d14a8) {
            ctx->pc = 0x1D145Cu;
            return;
        }
    }
    ctx->pc = 0x1D14B0u;
}
