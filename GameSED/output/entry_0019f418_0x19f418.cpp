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

// Function: entry_0019f418
// Address: 0x19f418 - 0x19f41c
void entry_0019f418_0x19f418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f418_0x19f418");
#endif

    ctx->pc = 0x19f418u;

    // 0x19f418: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x19f418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    ctx->pc = 0x19f41cu;
}
