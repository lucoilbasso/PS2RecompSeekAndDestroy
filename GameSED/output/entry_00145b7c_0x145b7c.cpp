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

// Function: entry_00145b7c
// Address: 0x145b7c - 0x145b80
void entry_00145b7c_0x145b7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145b7c_0x145b7c");
#endif

    ctx->pc = 0x145b7cu;

    // 0x145b7c: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x145b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    ctx->pc = 0x145b80u;
}
