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

// Function: entry_0013eb70
// Address: 0x13eb70 - 0x13eb74
void entry_0013eb70_0x13eb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013eb70_0x13eb70");
#endif

    ctx->pc = 0x13eb70u;

    // 0x13eb70: 0x3c100026  lui         $s0, 0x26
    ctx->pc = 0x13eb70u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    ctx->pc = 0x13eb74u;
}
