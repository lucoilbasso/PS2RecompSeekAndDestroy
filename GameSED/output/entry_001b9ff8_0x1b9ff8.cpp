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

// Function: entry_001b9ff8
// Address: 0x1b9ff8 - 0x1b9ffc
void entry_001b9ff8_0x1b9ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9ff8_0x1b9ff8");
#endif

    ctx->pc = 0x1b9ff8u;

    // 0x1b9ff8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1b9ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    ctx->pc = 0x1b9ffcu;
}
