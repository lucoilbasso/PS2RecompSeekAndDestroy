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

// Function: entry_001d4d58
// Address: 0x1d4d58 - 0x1d4d5c
void entry_001d4d58_0x1d4d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4d58_0x1d4d58");
#endif

    ctx->pc = 0x1d4d58u;

    // 0x1d4d58: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1d4d58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d4d5cu;
}
