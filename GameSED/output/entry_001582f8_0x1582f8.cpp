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

// Function: entry_001582f8
// Address: 0x1582f8 - 0x1582fc
void entry_001582f8_0x1582f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001582f8_0x1582f8");
#endif

    ctx->pc = 0x1582f8u;

    // 0x1582f8: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x1582f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    ctx->pc = 0x1582fcu;
}
