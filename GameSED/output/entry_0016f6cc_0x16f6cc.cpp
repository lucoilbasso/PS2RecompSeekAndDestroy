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

// Function: entry_0016f6cc
// Address: 0x16f6cc - 0x16f6d0
void entry_0016f6cc_0x16f6cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f6cc_0x16f6cc");
#endif

    ctx->pc = 0x16f6ccu;

    // 0x16f6cc: 0x0  nop
    ctx->pc = 0x16f6ccu;
    // NOP
    ctx->pc = 0x16f6d0u;
}
