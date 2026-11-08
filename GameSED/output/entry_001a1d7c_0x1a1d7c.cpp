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

// Function: entry_001a1d7c
// Address: 0x1a1d7c - 0x1a1d88
void entry_001a1d7c_0x1a1d7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1d7c_0x1a1d7c");
#endif

    ctx->pc = 0x1a1d7cu;

    // 0x1a1d7c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1D7Cu;
    {
        const bool branch_taken_0x1a1d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1d7c) {
            ctx->pc = 0x1A1D8Cu;
            return;
        }
    }
    ctx->pc = 0x1A1D84u;
    // 0x1a1d84: 0x0  nop
    ctx->pc = 0x1a1d84u;
    // NOP
    ctx->pc = 0x1a1d88u;
}
