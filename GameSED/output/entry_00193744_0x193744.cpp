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

// Function: entry_00193744
// Address: 0x193744 - 0x193748
void entry_00193744_0x193744(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193744_0x193744");
#endif

    ctx->pc = 0x193744u;

    // 0x193744: 0x8c82012c  lw          $v0, 0x12C($a0)
    ctx->pc = 0x193744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 300)));
    ctx->pc = 0x193748u;
}
