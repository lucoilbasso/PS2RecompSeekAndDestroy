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

// Function: entry_001aa2b4
// Address: 0x1aa2b4 - 0x1aa2b8
void entry_001aa2b4_0x1aa2b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa2b4_0x1aa2b4");
#endif

    ctx->pc = 0x1aa2b4u;

    // 0x1aa2b4: 0x46000004  c1          0x4
    ctx->pc = 0x1aa2b4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    ctx->pc = 0x1aa2b8u;
}
