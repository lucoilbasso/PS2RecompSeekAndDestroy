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

// Function: entry_001d455c
// Address: 0x1d455c - 0x1d4560
void entry_001d455c_0x1d455c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d455c_0x1d455c");
#endif

    ctx->pc = 0x1d455cu;

    // 0x1d455c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1d455cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    ctx->pc = 0x1d4560u;
}
