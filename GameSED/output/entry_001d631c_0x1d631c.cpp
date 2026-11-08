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

// Function: entry_001d631c
// Address: 0x1d631c - 0x1d6324
void entry_001d631c_0x1d631c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d631c_0x1d631c");
#endif

    ctx->pc = 0x1d631cu;

    // 0x1d631c: 0x1e00fffa  bgtz        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D631Cu;
    {
        const bool branch_taken_0x1d631c = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x1d631c) {
            ctx->pc = 0x1D6308u;
            return;
        }
    }
    ctx->pc = 0x1D6324u;
}
