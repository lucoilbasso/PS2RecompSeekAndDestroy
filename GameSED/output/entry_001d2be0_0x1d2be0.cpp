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

// Function: entry_001d2be0
// Address: 0x1d2be0 - 0x1d2be4
void entry_001d2be0_0x1d2be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2be0_0x1d2be0");
#endif

    ctx->pc = 0x1d2be0u;

    // 0x1d2be0: 0x8c48e1b0  lw          $t0, -0x1E50($v0)
    ctx->pc = 0x1d2be0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959536)));
    ctx->pc = 0x1d2be4u;
}
