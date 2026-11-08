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

// Function: entry_0016be60
// Address: 0x16be60 - 0x16be64
void entry_0016be60_0x16be60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016be60_0x16be60");
#endif

    ctx->pc = 0x16be60u;

    // 0x16be60: 0x1040009f  beqz        $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x16BE60u;
    {
        const bool branch_taken_0x16be60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16be60) {
            ctx->pc = 0x16C0E0u;
            return;
        }
    }
    ctx->pc = 0x16BE68u;
}
