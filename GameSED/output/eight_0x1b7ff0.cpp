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

// Function: eight
// Address: 0x1b7ff0 - 0x1b7ff4
void eight_0x1b7ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eight_0x1b7ff0");
#endif

    ctx->pc = 0x1b7ff0u;

    // 0x1b7ff0: 0x11400014  beqz        $t2, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B7FF0u;
    {
        const bool branch_taken_0x1b7ff0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7ff0) {
            ctx->pc = 0x1B8044u;
            return;
        }
    }
    ctx->pc = 0x1B7FF8u;
}
