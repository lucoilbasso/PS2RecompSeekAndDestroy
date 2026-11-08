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

// Function: entry_001535dc
// Address: 0x1535dc - 0x1535e0
void entry_001535dc_0x1535dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001535dc_0x1535dc");
#endif

    ctx->pc = 0x1535dcu;

    // 0x1535dc: 0x8e220264  lw          $v0, 0x264($s1)
    ctx->pc = 0x1535dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
    ctx->pc = 0x1535e0u;
}
