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

// Function: entry_0019ea08
// Address: 0x19ea08 - 0x19ea0c
void entry_0019ea08_0x19ea08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ea08_0x19ea08");
#endif

    ctx->pc = 0x19ea08u;

    // 0x19ea08: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x19ea08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->pc = 0x19ea0cu;
}
