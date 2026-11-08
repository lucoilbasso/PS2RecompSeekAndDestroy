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

// Function: entry_001d3e20
// Address: 0x1d3e20 - 0x1d3e24
void entry_001d3e20_0x1d3e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3e20_0x1d3e20");
#endif

    ctx->pc = 0x1d3e20u;

    // 0x1d3e20: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x1d3e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    ctx->pc = 0x1d3e24u;
}
