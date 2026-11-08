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

// Function: entry_001b0a74
// Address: 0x1b0a74 - 0x1b0a78
void entry_001b0a74_0x1b0a74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0a74_0x1b0a74");
#endif

    ctx->pc = 0x1b0a74u;

    // 0x1b0a74: 0x26500001  addiu       $s0, $s2, 0x1
    ctx->pc = 0x1b0a74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x1b0a78u;
}
