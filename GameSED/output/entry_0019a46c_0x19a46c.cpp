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

// Function: entry_0019a46c
// Address: 0x19a46c - 0x19a470
void entry_0019a46c_0x19a46c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a46c_0x19a46c");
#endif

    ctx->pc = 0x19a46cu;

    // 0x19a46c: 0x8f828d90  lw          $v0, -0x7270($gp)
    ctx->pc = 0x19a46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938000)));
    ctx->pc = 0x19a470u;
}
