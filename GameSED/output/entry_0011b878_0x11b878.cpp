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

// Function: entry_0011b878
// Address: 0x11b878 - 0x11b87c
void entry_0011b878_0x11b878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b878_0x11b878");
#endif

    ctx->pc = 0x11b878u;

    // 0x11b878: 0x8c45008c  lw          $a1, 0x8C($v0)
    ctx->pc = 0x11b878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    ctx->pc = 0x11b87cu;
}
