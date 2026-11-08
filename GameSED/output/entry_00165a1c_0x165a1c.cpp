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

// Function: entry_00165a1c
// Address: 0x165a1c - 0x165a28
void entry_00165a1c_0x165a1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165a1c_0x165a1c");
#endif

    ctx->pc = 0x165a1cu;

    // 0x165a1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x165A1Cu;
    {
        const bool branch_taken_0x165a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165a1c) {
            ctx->pc = 0x165A30u;
            return;
        }
    }
    ctx->pc = 0x165A24u;
    // 0x165a24: 0x0  nop
    ctx->pc = 0x165a24u;
    // NOP
    ctx->pc = 0x165a28u;
}
