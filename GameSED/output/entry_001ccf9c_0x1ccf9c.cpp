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

// Function: entry_001ccf9c
// Address: 0x1ccf9c - 0x1ccfa0
void entry_001ccf9c_0x1ccf9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ccf9c_0x1ccf9c");
#endif

    ctx->pc = 0x1ccf9cu;

    // 0x1ccf9c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1ccf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    ctx->pc = 0x1ccfa0u;
}
