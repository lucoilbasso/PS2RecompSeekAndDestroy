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

// Function: entry_001b88d8
// Address: 0x1b88d8 - 0x1b88e0
void entry_001b88d8_0x1b88d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b88d8_0x1b88d8");
#endif

    ctx->pc = 0x1b88d8u;

    // 0x1b88d8: 0x3ffffcd  break       1023, 1023
    ctx->pc = 0x1b88d8u;
    runtime->handleBreak(rdram, ctx);
    // 0x1b88dc: 0x0  nop
    ctx->pc = 0x1b88dcu;
    // NOP
    ctx->pc = 0x1b88e0u;
}
