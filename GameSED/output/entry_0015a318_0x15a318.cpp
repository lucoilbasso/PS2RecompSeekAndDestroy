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

// Function: entry_0015a318
// Address: 0x15a318 - 0x15a31c
void entry_0015a318_0x15a318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a318_0x15a318");
#endif

    ctx->pc = 0x15a318u;

    // 0x15a318: 0x0  nop
    ctx->pc = 0x15a318u;
    // NOP
    ctx->pc = 0x15a31cu;
}
