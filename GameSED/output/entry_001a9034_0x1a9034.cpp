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

// Function: entry_001a9034
// Address: 0x1a9034 - 0x1a9044
void entry_001a9034_0x1a9034(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9034_0x1a9034");
#endif

    ctx->pc = 0x1a9034u;

    // 0x1a9034: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1a9034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1a9038: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1a9038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1a903c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x1a903cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1a9040: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1a9040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    ctx->pc = 0x1a9044u;
}
