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

// Function: entry_0011a11c
// Address: 0x11a11c - 0x11a120
void entry_0011a11c_0x11a11c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a11c_0x11a11c");
#endif

    ctx->pc = 0x11a11cu;

    // 0x11a11c: 0x3c050024  lui         $a1, 0x24
    ctx->pc = 0x11a11cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
    ctx->pc = 0x11a120u;
}
