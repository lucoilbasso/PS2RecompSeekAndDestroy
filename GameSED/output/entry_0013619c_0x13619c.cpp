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

// Function: entry_0013619c
// Address: 0x13619c - 0x1361a0
void entry_0013619c_0x13619c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013619c_0x13619c");
#endif

    ctx->pc = 0x13619cu;

    // 0x13619c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x13619cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->pc = 0x1361a0u;
}
