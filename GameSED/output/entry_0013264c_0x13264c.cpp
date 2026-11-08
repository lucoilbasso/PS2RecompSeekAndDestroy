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

// Function: entry_0013264c
// Address: 0x13264c - 0x132650
void entry_0013264c_0x13264c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013264c_0x13264c");
#endif

    ctx->pc = 0x13264cu;

    // 0x13264c: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x13264cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->pc = 0x132650u;
}
