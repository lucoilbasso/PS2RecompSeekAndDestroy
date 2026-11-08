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

// Function: entry_0013895c
// Address: 0x13895c - 0x13896c
void entry_0013895c_0x13895c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013895c_0x13895c");
#endif

    ctx->pc = 0x13895cu;

    // 0x13895c: 0x26040400  addiu       $a0, $s0, 0x400
    ctx->pc = 0x13895cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1024));
    // 0x138960: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x138960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x138964: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x138964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x138968: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x138968u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x13896cu;
}
