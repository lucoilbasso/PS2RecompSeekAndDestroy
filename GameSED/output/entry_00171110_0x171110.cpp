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

// Function: entry_00171110
// Address: 0x171110 - 0x171120
void entry_00171110_0x171110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171110_0x171110");
#endif

    ctx->pc = 0x171110u;

    // 0x171110: 0x8d230034  lw          $v1, 0x34($t1)
    ctx->pc = 0x171110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 52)));
    // 0x171114: 0x8d22003c  lw          $v0, 0x3C($t1)
    ctx->pc = 0x171114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 60)));
    // 0x171118: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x171118u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17111c: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x17111cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->pc = 0x171120u;
}
