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

// Function: entry_00132fd0
// Address: 0x132fd0 - 0x132fd4
void entry_00132fd0_0x132fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132fd0_0x132fd0");
#endif

    ctx->pc = 0x132fd0u;

    // 0x132fd0: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x132fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    ctx->pc = 0x132fd4u;
}
