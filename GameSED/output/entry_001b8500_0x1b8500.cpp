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

// Function: entry_001b8500
// Address: 0x1b8500 - 0x1b8504
void entry_001b8500_0x1b8500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8500_0x1b8500");
#endif

    ctx->pc = 0x1b8500u;

    // 0x1b8500: 0x320802d  daddu       $s0, $t9, $zero
    ctx->pc = 0x1b8500u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b8504u;
}
