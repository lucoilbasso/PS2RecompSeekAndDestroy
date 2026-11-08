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

// Function: entry_00138ff0
// Address: 0x138ff0 - 0x138ff4
void entry_00138ff0_0x138ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138ff0_0x138ff0");
#endif

    ctx->pc = 0x138ff0u;

    // 0x138ff0: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x138ff0u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    ctx->pc = 0x138ff4u;
}
