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

// Function: entry_001d021c
// Address: 0x1d021c - 0x1d0220
void entry_001d021c_0x1d021c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d021c_0x1d021c");
#endif

    ctx->pc = 0x1d021cu;

    // 0x1d021c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1d021cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    ctx->pc = 0x1d0220u;
}
