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

// Function: entry_001b8048
// Address: 0x1b8048 - 0x1b804c
void entry_001b8048_0x1b8048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8048_0x1b8048");
#endif

    ctx->pc = 0x1b8048u;

    // 0x1b8048: 0x0  nop
    ctx->pc = 0x1b8048u;
    // NOP
    ctx->pc = 0x1b804cu;
}
