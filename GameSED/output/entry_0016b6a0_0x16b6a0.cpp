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

// Function: entry_0016b6a0
// Address: 0x16b6a0 - 0x16b6a8
void entry_0016b6a0_0x16b6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b6a0_0x16b6a0");
#endif

    ctx->pc = 0x16b6a0u;

    // 0x16b6a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16b6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16b6a4: 0xad030130  sw          $v1, 0x130($t0)
    ctx->pc = 0x16b6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 304), GPR_U32(ctx, 3));
    ctx->pc = 0x16b6a8u;
}
