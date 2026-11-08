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

// Function: entry_001127fc
// Address: 0x1127fc - 0x112800
void entry_001127fc_0x1127fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001127fc_0x1127fc");
#endif

    ctx->pc = 0x1127fcu;

    // 0x1127fc: 0x46000004  c1          0x4
    ctx->pc = 0x1127fcu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    ctx->pc = 0x112800u;
}
