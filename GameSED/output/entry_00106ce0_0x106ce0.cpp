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

// Function: entry_00106ce0
// Address: 0x106ce0 - 0x106ce4
void entry_00106ce0_0x106ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106ce0_0x106ce0");
#endif

    ctx->pc = 0x106ce0u;

    // 0x106ce0: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x106ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x106ce4u;
}
