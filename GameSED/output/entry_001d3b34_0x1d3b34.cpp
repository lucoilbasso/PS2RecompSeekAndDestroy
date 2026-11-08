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

// Function: entry_001d3b34
// Address: 0x1d3b34 - 0x1d3b38
void entry_001d3b34_0x1d3b34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3b34_0x1d3b34");
#endif

    ctx->pc = 0x1d3b34u;

    // 0x1d3b34: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d3b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    ctx->pc = 0x1d3b38u;
}
