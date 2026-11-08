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

// Function: entry_001a205c
// Address: 0x1a205c - 0x1a2068
void entry_001a205c_0x1a205c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a205c_0x1a205c");
#endif

    ctx->pc = 0x1a205cu;

    // 0x1a205c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A205Cu;
    {
        const bool branch_taken_0x1a205c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a205c) {
            ctx->pc = 0x1A206Cu;
            return;
        }
    }
    ctx->pc = 0x1A2064u;
    // 0x1a2064: 0x0  nop
    ctx->pc = 0x1a2064u;
    // NOP
    ctx->pc = 0x1a2068u;
}
