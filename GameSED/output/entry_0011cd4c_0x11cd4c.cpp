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

// Function: entry_0011cd4c
// Address: 0x11cd4c - 0x11cd50
void entry_0011cd4c_0x11cd4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cd4c_0x11cd4c");
#endif

    ctx->pc = 0x11cd4cu;

    // 0x11cd4c: 0x8c624040  lw          $v0, 0x4040($v1)
    ctx->pc = 0x11cd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16448)));
    ctx->pc = 0x11cd50u;
}
