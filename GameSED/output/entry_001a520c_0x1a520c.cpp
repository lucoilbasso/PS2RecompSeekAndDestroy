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

// Function: entry_001a520c
// Address: 0x1a520c - 0x1a5210
void entry_001a520c_0x1a520c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a520c_0x1a520c");
#endif

    ctx->pc = 0x1a520cu;

    // 0x1a520c: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x1a520cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    ctx->pc = 0x1a5210u;
}
