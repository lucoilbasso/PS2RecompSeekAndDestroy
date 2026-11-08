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

// Function: entry_001d28f0
// Address: 0x1d28f0 - 0x1d28f4
void entry_001d28f0_0x1d28f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d28f0_0x1d28f0");
#endif

    ctx->pc = 0x1d28f0u;

    // 0x1d28f0: 0x8fa201e8  lw          $v0, 0x1E8($sp)
    ctx->pc = 0x1d28f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    ctx->pc = 0x1d28f4u;
}
