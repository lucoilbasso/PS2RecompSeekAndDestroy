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

// Function: entry_00199b5c
// Address: 0x199b5c - 0x199b60
void entry_00199b5c_0x199b5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199b5c_0x199b5c");
#endif

    ctx->pc = 0x199b5cu;

    // 0x199b5c: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x199b5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->pc = 0x199b60u;
}
