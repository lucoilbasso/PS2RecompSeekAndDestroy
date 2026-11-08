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

// Function: entry_0011b9d4
// Address: 0x11b9d4 - 0x11b9d8
void entry_0011b9d4_0x11b9d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b9d4_0x11b9d4");
#endif

    ctx->pc = 0x11b9d4u;

    // 0x11b9d4: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x11b9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    ctx->pc = 0x11b9d8u;
}
