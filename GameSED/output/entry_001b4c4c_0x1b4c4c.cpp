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

// Function: entry_001b4c4c
// Address: 0x1b4c4c - 0x1b4c50
void entry_001b4c4c_0x1b4c4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4c4c_0x1b4c4c");
#endif

    ctx->pc = 0x1b4c4cu;

    // 0x1b4c4c: 0x2a270401  slti        $a3, $s1, 0x401
    ctx->pc = 0x1b4c4cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1025) ? 1 : 0);
    ctx->pc = 0x1b4c50u;
}
