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

// Function: entry_001c13d0
// Address: 0x1c13d0 - 0x1c13d4
void entry_001c13d0_0x1c13d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c13d0_0x1c13d0");
#endif

    ctx->pc = 0x1c13d0u;

    // 0x1c13d0: 0x8e060174  lw          $a2, 0x174($s0)
    ctx->pc = 0x1c13d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    ctx->pc = 0x1c13d4u;
}
