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

// Function: entry_001d5eb0
// Address: 0x1d5eb0 - 0x1d5eb4
void entry_001d5eb0_0x1d5eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5eb0_0x1d5eb0");
#endif

    ctx->pc = 0x1d5eb0u;

    // 0x1d5eb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d5eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1d5eb4u;
}
