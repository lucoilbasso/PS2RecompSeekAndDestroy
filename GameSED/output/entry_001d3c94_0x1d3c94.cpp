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

// Function: entry_001d3c94
// Address: 0x1d3c94 - 0x1d3c98
void entry_001d3c94_0x1d3c94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3c94_0x1d3c94");
#endif

    ctx->pc = 0x1d3c94u;

    // 0x1d3c94: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d3c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    ctx->pc = 0x1d3c98u;
}
