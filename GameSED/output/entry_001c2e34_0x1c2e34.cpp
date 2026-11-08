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

// Function: entry_001c2e34
// Address: 0x1c2e34 - 0x1c2e38
void entry_001c2e34_0x1c2e34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2e34_0x1c2e34");
#endif

    ctx->pc = 0x1c2e34u;

    // 0x1c2e34: 0x8ce801e0  lw          $t0, 0x1E0($a3)
    ctx->pc = 0x1c2e34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 480)));
    ctx->pc = 0x1c2e38u;
}
