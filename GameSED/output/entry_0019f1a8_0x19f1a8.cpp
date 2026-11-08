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

// Function: entry_0019f1a8
// Address: 0x19f1a8 - 0x19f1b0
void entry_0019f1a8_0x19f1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f1a8_0x19f1a8");
#endif

    ctx->pc = 0x19f1a8u;

    // 0x19f1a8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x19F1A8u;
    {
        const bool branch_taken_0x19f1a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f1a8) {
            ctx->pc = 0x19F1D0u;
            return;
        }
    }
    ctx->pc = 0x19F1B0u;
}
