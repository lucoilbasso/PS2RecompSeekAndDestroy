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

// Function: entry_001aa2b0
// Address: 0x1aa2b0 - 0x1aa2b4
void entry_001aa2b0_0x1aa2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa2b0_0x1aa2b0");
#endif

    ctx->pc = 0x1aa2b0u;

    // 0x1aa2b0: 0x46052802  mul.s       $f0, $f5, $f5
    ctx->pc = 0x1aa2b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    ctx->pc = 0x1aa2b4u;
}
