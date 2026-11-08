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

// Function: entry_0011a5a0
// Address: 0x11a5a0 - 0x11a5a4
void entry_0011a5a0_0x11a5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a5a0_0x11a5a0");
#endif

    ctx->pc = 0x11a5a0u;

    // 0x11a5a0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x11a5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    ctx->pc = 0x11a5a4u;
}
