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

// Function: entry_001d62d4
// Address: 0x1d62d4 - 0x1d62d8
void entry_001d62d4_0x1d62d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d62d4_0x1d62d4");
#endif

    ctx->pc = 0x1d62d4u;

    // 0x1d62d4: 0x2a020018  slti        $v0, $s0, 0x18
    ctx->pc = 0x1d62d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)24) ? 1 : 0);
    ctx->pc = 0x1d62d8u;
}
