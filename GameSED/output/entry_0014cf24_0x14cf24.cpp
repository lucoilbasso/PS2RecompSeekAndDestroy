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

// Function: entry_0014cf24
// Address: 0x14cf24 - 0x14cf28
void entry_0014cf24_0x14cf24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014cf24_0x14cf24");
#endif

    ctx->pc = 0x14cf24u;

    // 0x14cf24: 0x8ce201f0  lw          $v0, 0x1F0($a3)
    ctx->pc = 0x14cf24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 496)));
    ctx->pc = 0x14cf28u;
}
