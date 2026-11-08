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

// Function: entry_0016f948
// Address: 0x16f948 - 0x16f94c
void entry_0016f948_0x16f948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f948_0x16f948");
#endif

    ctx->pc = 0x16f948u;

    // 0x16f948: 0x8f828b58  lw          $v0, -0x74A8($gp)
    ctx->pc = 0x16f948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937432)));
    ctx->pc = 0x16f94cu;
}
