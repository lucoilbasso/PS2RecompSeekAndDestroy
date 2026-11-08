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

// Function: entry_0016b07c
// Address: 0x16b07c - 0x16b084
void entry_0016b07c_0x16b07c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b07c_0x16b07c");
#endif

    ctx->pc = 0x16b07cu;

    // 0x16b07c: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x16B07Cu;
    {
        const bool branch_taken_0x16b07c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b07c) {
            ctx->pc = 0x16B094u;
            return;
        }
    }
    ctx->pc = 0x16B084u;
}
