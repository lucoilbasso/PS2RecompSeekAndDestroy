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

// Function: entry_001a615c
// Address: 0x1a615c - 0x1a6168
void entry_001a615c_0x1a615c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a615c_0x1a615c");
#endif

    ctx->pc = 0x1a615cu;

    // 0x1a615c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A615Cu;
    {
        const bool branch_taken_0x1a615c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a615c) {
            ctx->pc = 0x1A6178u;
            return;
        }
    }
    ctx->pc = 0x1A6164u;
    // 0x1a6164: 0x0  nop
    ctx->pc = 0x1a6164u;
    // NOP
    ctx->pc = 0x1a6168u;
}
