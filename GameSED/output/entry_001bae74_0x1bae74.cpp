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

// Function: entry_001bae74
// Address: 0x1bae74 - 0x1bae7c
void entry_001bae74_0x1bae74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bae74_0x1bae74");
#endif

    ctx->pc = 0x1bae74u;

    // 0x1bae74: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x1bae74u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
    // 0x1bae78: 0x3c170025  lui         $s7, 0x25
    ctx->pc = 0x1bae78u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)37 << 16));
    ctx->pc = 0x1bae7cu;
}
