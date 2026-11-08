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

// Function: entry_00177c9c
// Address: 0x177c9c - 0x177ca0
void entry_00177c9c_0x177c9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177c9c_0x177c9c");
#endif

    ctx->pc = 0x177c9cu;

    // 0x177c9c: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x177c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    ctx->pc = 0x177ca0u;
}
