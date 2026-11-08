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

// Function: entry_0011def0
// Address: 0x11def0 - 0x11def4
void entry_0011def0_0x11def0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011def0_0x11def0");
#endif

    ctx->pc = 0x11def0u;

    // 0x11def0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x11def0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    ctx->pc = 0x11def4u;
}
