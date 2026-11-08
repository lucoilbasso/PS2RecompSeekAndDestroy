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

// Function: entry_001127f8
// Address: 0x1127f8 - 0x1127fc
void entry_001127f8_0x1127f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001127f8_0x1127f8");
#endif

    ctx->pc = 0x1127f8u;

    // 0x1127f8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1127f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    ctx->pc = 0x1127fcu;
}
