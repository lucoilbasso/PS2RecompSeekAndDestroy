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

// Function: entry_001d6300
// Address: 0x1d6300 - 0x1d6308
void entry_001d6300_0x1d6300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6300_0x1d6300");
#endif

    ctx->pc = 0x1d6300u;

    // 0x1d6300: 0x1a000008  blez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D6300u;
    {
        const bool branch_taken_0x1d6300 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x1d6300) {
            ctx->pc = 0x1D6324u;
            return;
        }
    }
    ctx->pc = 0x1D6308u;
}
