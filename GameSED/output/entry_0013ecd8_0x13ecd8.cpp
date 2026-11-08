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

// Function: entry_0013ecd8
// Address: 0x13ecd8 - 0x13ece0
void entry_0013ecd8_0x13ecd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ecd8_0x13ecd8");
#endif

    ctx->pc = 0x13ecd8u;

    // 0x13ecd8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13ecd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13ecdc: 0xac830130  sw          $v1, 0x130($a0)
    ctx->pc = 0x13ecdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 304), GPR_U32(ctx, 3));
    ctx->pc = 0x13ece0u;
}
