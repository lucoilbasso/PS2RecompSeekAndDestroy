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

// Function: entry_0018dd9c
// Address: 0x18dd9c - 0x18dda0
void entry_0018dd9c_0x18dd9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018dd9c_0x18dd9c");
#endif

    ctx->pc = 0x18dd9cu;

    // 0x18dd9c: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x18dd9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x18dda0u;
}
