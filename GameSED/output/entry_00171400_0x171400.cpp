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

// Function: entry_00171400
// Address: 0x171400 - 0x171410
void entry_00171400_0x171400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171400_0x171400");
#endif

    ctx->pc = 0x171400u;

    // 0x171400: 0x8d03004c  lw          $v1, 0x4C($t0)
    ctx->pc = 0x171400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 76)));
    // 0x171404: 0x8d020048  lw          $v0, 0x48($t0)
    ctx->pc = 0x171404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 72)));
    // 0x171408: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x171408u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17140c: 0x1221023  subu        $v0, $t1, $v0
    ctx->pc = 0x17140cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    ctx->pc = 0x171410u;
}
