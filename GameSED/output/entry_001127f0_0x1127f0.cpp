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

// Function: entry_001127f0
// Address: 0x1127f0 - 0x1127f8
void entry_001127f0_0x1127f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001127f0_0x1127f0");
#endif

    ctx->pc = 0x1127f0u;

    // 0x1127f0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1127f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1127f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1127f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->pc = 0x1127f8u;
}
