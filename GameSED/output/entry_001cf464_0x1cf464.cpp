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

// Function: entry_001cf464
// Address: 0x1cf464 - 0x1cf468
void entry_001cf464_0x1cf464(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf464_0x1cf464");
#endif

    ctx->pc = 0x1cf464u;

    // 0x1cf464: 0x0  nop
    ctx->pc = 0x1cf464u;
    // NOP
    ctx->pc = 0x1cf468u;
}
