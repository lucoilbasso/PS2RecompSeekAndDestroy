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

// Function: entry_0012c434
// Address: 0x12c434 - 0x12c43c
void entry_0012c434_0x12c434(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c434_0x12c434");
#endif

    ctx->pc = 0x12c434u;

    // 0x12c434: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C434u;
    {
        const bool branch_taken_0x12c434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c434) {
            ctx->pc = 0x12C444u;
            return;
        }
    }
    ctx->pc = 0x12C43Cu;
}
