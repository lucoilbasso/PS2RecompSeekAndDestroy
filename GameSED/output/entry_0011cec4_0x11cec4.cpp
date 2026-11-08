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

// Function: entry_0011cec4
// Address: 0x11cec4 - 0x11cec8
void entry_0011cec4_0x11cec4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cec4_0x11cec4");
#endif

    ctx->pc = 0x11cec4u;

    // 0x11cec4: 0x1064025  or          $t0, $t0, $a2
    ctx->pc = 0x11cec4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    ctx->pc = 0x11cec8u;
}
