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

// Function: entry_001108f8
// Address: 0x1108f8 - 0x1108fc
void entry_001108f8_0x1108f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001108f8_0x1108f8");
#endif

    ctx->pc = 0x1108f8u;

    // 0x1108f8: 0x8f829118  lw          $v0, -0x6EE8($gp)
    ctx->pc = 0x1108f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938904)));
    ctx->pc = 0x1108fcu;
}
