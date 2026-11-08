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

// Function: entry_00152e3c
// Address: 0x152e3c - 0x152e40
void entry_00152e3c_0x152e3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152e3c_0x152e3c");
#endif

    ctx->pc = 0x152e3cu;

    // 0x152e3c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x152e3cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    ctx->pc = 0x152e40u;
}
