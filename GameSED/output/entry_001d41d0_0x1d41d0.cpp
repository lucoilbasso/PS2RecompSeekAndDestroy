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

// Function: entry_001d41d0
// Address: 0x1d41d0 - 0x1d41d4
void entry_001d41d0_0x1d41d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d41d0_0x1d41d0");
#endif

    ctx->pc = 0x1d41d0u;

    // 0x1d41d0: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x1d41d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    ctx->pc = 0x1d41d4u;
}
