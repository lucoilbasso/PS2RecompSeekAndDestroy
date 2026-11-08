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

// Function: entry_0015a30c
// Address: 0x15a30c - 0x15a310
void entry_0015a30c_0x15a30c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a30c_0x15a30c");
#endif

    ctx->pc = 0x15a30cu;

    // 0x15a30c: 0x501fff2  bgez        $t0, . + 4 + (-0xE << 2)
    ctx->pc = 0x15A30Cu;
    {
        const bool branch_taken_0x15a30c = (GPR_S32(ctx, 8) >= 0);
        if (branch_taken_0x15a30c) {
            ctx->pc = 0x15A2D8u;
            return;
        }
    }
    ctx->pc = 0x15A314u;
}
