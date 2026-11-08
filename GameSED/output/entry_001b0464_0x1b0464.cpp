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

// Function: entry_001b0464
// Address: 0x1b0464 - 0x1b0468
void entry_001b0464_0x1b0464(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0464_0x1b0464");
#endif

    ctx->pc = 0x1b0464u;

    // 0x1b0464: 0x26b07ed0  addiu       $s0, $s5, 0x7ED0
    ctx->pc = 0x1b0464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 32464));
    ctx->pc = 0x1b0468u;
}
