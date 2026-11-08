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

// Function: entry_001b7d5c
// Address: 0x1b7d5c - 0x1b7d60
void entry_001b7d5c_0x1b7d5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7d5c_0x1b7d5c");
#endif

    ctx->pc = 0x1b7d5cu;

    // 0x1b7d5c: 0x122900  sll         $a1, $s2, 4
    ctx->pc = 0x1b7d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    ctx->pc = 0x1b7d60u;
}
