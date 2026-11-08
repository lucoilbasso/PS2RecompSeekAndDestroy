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

// Function: entry_0011ba9c
// Address: 0x11ba9c - 0x11baa0
void entry_0011ba9c_0x11ba9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ba9c_0x11ba9c");
#endif

    ctx->pc = 0x11ba9cu;

    // 0x11ba9c: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x11ba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    ctx->pc = 0x11baa0u;
}
