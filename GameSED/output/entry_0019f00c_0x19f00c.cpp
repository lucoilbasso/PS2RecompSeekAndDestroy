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

// Function: entry_0019f00c
// Address: 0x19f00c - 0x19f010
void entry_0019f00c_0x19f00c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f00c_0x19f00c");
#endif

    ctx->pc = 0x19f00cu;

    // 0x19f00c: 0x460d6329  min.s       $f12, $f12, $f13
    ctx->pc = 0x19f00cu;
    ctx->f[12] = std::min(ctx->f[12], ctx->f[13]);
    ctx->pc = 0x19f010u;
}
