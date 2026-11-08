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

// Function: entry_001b701c
// Address: 0x1b701c - 0x1b7020
void entry_001b701c_0x1b701c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b701c_0x1b701c");
#endif

    ctx->pc = 0x1b701cu;

    // 0x1b701c: 0x0  nop
    ctx->pc = 0x1b701cu;
    // NOP
    ctx->pc = 0x1b7020u;
}
