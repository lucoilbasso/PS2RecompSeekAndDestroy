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

// Function: entry_0013adf0
// Address: 0x13adf0 - 0x13adf4
void entry_0013adf0_0x13adf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013adf0_0x13adf0");
#endif

    ctx->pc = 0x13adf0u;

    // 0x13adf0: 0x8c500020  lw          $s0, 0x20($v0)
    ctx->pc = 0x13adf0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->pc = 0x13adf4u;
}
