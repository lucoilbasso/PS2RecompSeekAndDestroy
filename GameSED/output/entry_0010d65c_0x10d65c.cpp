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

// Function: entry_0010d65c
// Address: 0x10d65c - 0x10d660
void entry_0010d65c_0x10d65c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d65c_0x10d65c");
#endif

    ctx->pc = 0x10d65cu;

    // 0x10d65c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x10d65cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->pc = 0x10d660u;
}
