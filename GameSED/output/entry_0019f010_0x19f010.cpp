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

// Function: entry_0019f010
// Address: 0x19f010 - 0x19f014
void entry_0019f010_0x19f010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f010_0x19f010");
#endif

    ctx->pc = 0x19f010u;

    // 0x19f010: 0x46006807  neg.s       $f0, $f13
    ctx->pc = 0x19f010u;
    ctx->f[0] = FPU_NEG_S(ctx->f[13]);
    ctx->pc = 0x19f014u;
}
