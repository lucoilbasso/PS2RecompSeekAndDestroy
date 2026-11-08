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

// Function: entry_001cbc7c
// Address: 0x1cbc7c - 0x1cbc80
void entry_001cbc7c_0x1cbc7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbc7c_0x1cbc7c");
#endif

    ctx->pc = 0x1cbc7cu;

    // 0x1cbc7c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CBC7Cu;
    {
        const bool branch_taken_0x1cbc7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbc7c) {
            ctx->pc = 0x1CBC90u;
            return;
        }
    }
    ctx->pc = 0x1CBC84u;
}
