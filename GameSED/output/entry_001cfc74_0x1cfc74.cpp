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

// Function: entry_001cfc74
// Address: 0x1cfc74 - 0x1cfc78
void entry_001cfc74_0x1cfc74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfc74_0x1cfc74");
#endif

    ctx->pc = 0x1cfc74u;

    // 0x1cfc74: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1cfc74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    ctx->pc = 0x1cfc78u;
}
