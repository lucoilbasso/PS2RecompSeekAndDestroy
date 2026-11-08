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

// Function: entry_0019ec9c
// Address: 0x19ec9c - 0x19eca0
void entry_0019ec9c_0x19ec9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ec9c_0x19ec9c");
#endif

    ctx->pc = 0x19ec9cu;

    // 0x19ec9c: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x19ec9cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
    ctx->pc = 0x19eca0u;
}
