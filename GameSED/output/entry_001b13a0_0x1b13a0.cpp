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

// Function: entry_001b13a0
// Address: 0x1b13a0 - 0x1b13a4
void entry_001b13a0_0x1b13a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b13a0_0x1b13a0");
#endif

    ctx->pc = 0x1b13a0u;

    // 0x1b13a0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1b13a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x1b13a4u;
}
