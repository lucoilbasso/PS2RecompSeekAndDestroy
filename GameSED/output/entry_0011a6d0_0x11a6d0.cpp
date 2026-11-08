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

// Function: entry_0011a6d0
// Address: 0x11a6d0 - 0x11a6d4
void entry_0011a6d0_0x11a6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a6d0_0x11a6d0");
#endif

    ctx->pc = 0x11a6d0u;

    // 0x11a6d0: 0x3c11001f  lui         $s1, 0x1F
    ctx->pc = 0x11a6d0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)31 << 16));
    ctx->pc = 0x11a6d4u;
}
