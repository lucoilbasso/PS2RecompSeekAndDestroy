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

// Function: entry_0010c8e0
// Address: 0x10c8e0 - 0x10c8e4
void entry_0010c8e0_0x10c8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c8e0_0x10c8e0");
#endif

    ctx->pc = 0x10c8e0u;

    // 0x10c8e0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x10c8e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    ctx->pc = 0x10c8e4u;
}
