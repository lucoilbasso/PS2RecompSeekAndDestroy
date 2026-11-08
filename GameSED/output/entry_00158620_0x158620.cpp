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

// Function: entry_00158620
// Address: 0x158620 - 0x158624
void entry_00158620_0x158620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158620_0x158620");
#endif

    ctx->pc = 0x158620u;

    // 0x158620: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x158620u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    ctx->pc = 0x158624u;
}
