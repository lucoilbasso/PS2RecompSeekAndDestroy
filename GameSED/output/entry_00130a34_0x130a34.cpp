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

// Function: entry_00130a34
// Address: 0x130a34 - 0x130a38
void entry_00130a34_0x130a34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130a34_0x130a34");
#endif

    ctx->pc = 0x130a34u;

    // 0x130a34: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x130a34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->pc = 0x130a38u;
}
