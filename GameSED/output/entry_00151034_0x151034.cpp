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

// Function: entry_00151034
// Address: 0x151034 - 0x151038
void entry_00151034_0x151034(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151034_0x151034");
#endif

    ctx->pc = 0x151034u;

    // 0x151034: 0x4602ad42  mul.s       $f21, $f21, $f2
    ctx->pc = 0x151034u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    ctx->pc = 0x151038u;
}
