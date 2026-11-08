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

// Function: entry_0013259c
// Address: 0x13259c - 0x1325a0
void entry_0013259c_0x13259c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013259c_0x13259c");
#endif

    ctx->pc = 0x13259cu;

    // 0x13259c: 0x8c430154  lw          $v1, 0x154($v0)
    ctx->pc = 0x13259cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
    ctx->pc = 0x1325a0u;
}
