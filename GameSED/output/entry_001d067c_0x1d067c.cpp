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

// Function: entry_001d067c
// Address: 0x1d067c - 0x1d0680
void entry_001d067c_0x1d067c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d067c_0x1d067c");
#endif

    ctx->pc = 0x1d067cu;

    // 0x1d067c: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1d067cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    ctx->pc = 0x1d0680u;
}
