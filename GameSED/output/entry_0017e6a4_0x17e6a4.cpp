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

// Function: entry_0017e6a4
// Address: 0x17e6a4 - 0x17e6a8
void entry_0017e6a4_0x17e6a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e6a4_0x17e6a4");
#endif

    ctx->pc = 0x17e6a4u;

    // 0x17e6a4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x17e6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    ctx->pc = 0x17e6a8u;
}
