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

// Function: entry_001b0700
// Address: 0x1b0700 - 0x1b0704
void entry_001b0700_0x1b0700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0700_0x1b0700");
#endif

    ctx->pc = 0x1b0700u;

    // 0x1b0700: 0x3c120041  lui         $s2, 0x41
    ctx->pc = 0x1b0700u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65 << 16));
    ctx->pc = 0x1b0704u;
}
