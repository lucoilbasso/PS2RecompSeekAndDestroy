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

// Function: entry_001d4754
// Address: 0x1d4754 - 0x1d4758
void entry_001d4754_0x1d4754(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4754_0x1d4754");
#endif

    ctx->pc = 0x1d4754u;

    // 0x1d4754: 0x35020001  ori         $v0, $t0, 0x1
    ctx->pc = 0x1d4754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
    ctx->pc = 0x1d4758u;
}
