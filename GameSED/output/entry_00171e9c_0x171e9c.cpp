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

// Function: entry_00171e9c
// Address: 0x171e9c - 0x171ea0
void entry_00171e9c_0x171e9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171e9c_0x171e9c");
#endif

    ctx->pc = 0x171e9cu;

    // 0x171e9c: 0x24423f00  addiu       $v0, $v0, 0x3F00
    ctx->pc = 0x171e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16128));
    ctx->pc = 0x171ea0u;
}
