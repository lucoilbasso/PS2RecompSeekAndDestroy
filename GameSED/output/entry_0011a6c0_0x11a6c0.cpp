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

// Function: entry_0011a6c0
// Address: 0x11a6c0 - 0x11a6c4
void entry_0011a6c0_0x11a6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a6c0_0x11a6c0");
#endif

    ctx->pc = 0x11a6c0u;

    // 0x11a6c0: 0x8f928d10  lw          $s2, -0x72F0($gp)
    ctx->pc = 0x11a6c0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    ctx->pc = 0x11a6c4u;
}
