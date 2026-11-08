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

// Function: entry_0019f014
// Address: 0x19f014 - 0x19f018
void entry_0019f014_0x19f014(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f014_0x19f014");
#endif

    ctx->pc = 0x19f014u;

    // 0x19f014: 0x46006328  max.s       $f12, $f12, $f0
    ctx->pc = 0x19f014u;
    ctx->f[12] = std::max(ctx->f[12], ctx->f[0]);
    ctx->pc = 0x19f018u;
}
