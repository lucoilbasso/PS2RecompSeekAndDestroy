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

// Function: caseD_68
// Address: 0x1d15b0 - 0x1d15b8
void caseD_68_0x1d15b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_68_0x1d15b0");
#endif

    ctx->pc = 0x1d15b0u;

    // 0x1d15b0: 0x1000ffaa  b           . + 4 + (-0x56 << 2)
    ctx->pc = 0x1D15B0u;
    {
        const bool branch_taken_0x1d15b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D15B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D15B0u;
        // 0x1d15b4: 0x36f70040  ori         $s7, $s7, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d15b0) {
            ctx->pc = 0x1D145Cu;
            return;
        }
    }
    ctx->pc = 0x1D15B8u;
}
