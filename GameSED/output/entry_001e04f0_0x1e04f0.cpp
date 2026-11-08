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

// Function: entry_001e04f0
// Address: 0x1e04f0 - 0x1e04f4
void entry_001e04f0_0x1e04f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e04f0_0x1e04f0");
#endif

    ctx->pc = 0x1e04f0u;

    // 0x1e04f0: 0x2462fff0  addiu       $v0, $v1, -0x10
    ctx->pc = 0x1e04f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    ctx->pc = 0x1e04f4u;
}
