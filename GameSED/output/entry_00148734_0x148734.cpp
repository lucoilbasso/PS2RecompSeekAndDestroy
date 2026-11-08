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

// Function: entry_00148734
// Address: 0x148734 - 0x148738
void entry_00148734_0x148734(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148734_0x148734");
#endif

    ctx->pc = 0x148734u;

    // 0x148734: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x148734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    ctx->pc = 0x148738u;
}
