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

// Function: entry_0011a6c8
// Address: 0x11a6c8 - 0x11a6cc
void entry_0011a6c8_0x11a6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a6c8_0x11a6c8");
#endif

    ctx->pc = 0x11a6c8u;

    // 0x11a6c8: 0x3c10001f  lui         $s0, 0x1F
    ctx->pc = 0x11a6c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)31 << 16));
    ctx->pc = 0x11a6ccu;
}
