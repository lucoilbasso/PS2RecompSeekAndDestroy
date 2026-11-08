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

// Function: entry_001d1638
// Address: 0x1d1638 - 0x1d1640
void entry_001d1638_0x1d1638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1638_0x1d1638");
#endif

    ctx->pc = 0x1d1638u;

    // 0x1d1638: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x1d1638u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x1d163c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1d163cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1d1640u;
}
