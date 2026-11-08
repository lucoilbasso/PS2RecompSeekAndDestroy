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

// Function: entry_001b9d4c
// Address: 0x1b9d4c - 0x1b9d50
void entry_001b9d4c_0x1b9d4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9d4c_0x1b9d4c");
#endif

    ctx->pc = 0x1b9d4cu;

    // 0x1b9d4c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b9d4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b9d50u;
}
