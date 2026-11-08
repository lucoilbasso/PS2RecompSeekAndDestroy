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

// Function: entry_001d0318
// Address: 0x1d0318 - 0x1d0324
void entry_001d0318_0x1d0318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0318_0x1d0318");
#endif

    ctx->pc = 0x1d0318u;

    // 0x1d0318: 0x8d82e1b0  lw          $v0, -0x1E50($t4)
    ctx->pc = 0x1d0318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294959536)));
    // 0x1d031c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1d031cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d0320: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x1d0320u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
    ctx->pc = 0x1d0324u;
}
