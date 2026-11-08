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

// Function: entry_001a2c9c
// Address: 0x1a2c9c - 0x1a2ca0
void entry_001a2c9c_0x1a2c9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2c9c_0x1a2c9c");
#endif

    ctx->pc = 0x1a2c9cu;

    // 0x1a2c9c: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x1a2c9cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1a2ca0u;
}
