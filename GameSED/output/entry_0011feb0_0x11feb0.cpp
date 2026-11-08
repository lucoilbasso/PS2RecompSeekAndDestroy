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

// Function: entry_0011feb0
// Address: 0x11feb0 - 0x11feb4
void entry_0011feb0_0x11feb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011feb0_0x11feb0");
#endif

    ctx->pc = 0x11feb0u;

    // 0x11feb0: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x11feb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    ctx->pc = 0x11feb4u;
}
