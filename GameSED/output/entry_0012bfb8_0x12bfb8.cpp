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

// Function: entry_0012bfb8
// Address: 0x12bfb8 - 0x12bfc0
void entry_0012bfb8_0x12bfb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012bfb8_0x12bfb8");
#endif

    ctx->pc = 0x12bfb8u;

    // 0x12bfb8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12BFB8u;
    {
        const bool branch_taken_0x12bfb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12bfb8) {
            ctx->pc = 0x12BFC8u;
            return;
        }
    }
    ctx->pc = 0x12BFC0u;
}
