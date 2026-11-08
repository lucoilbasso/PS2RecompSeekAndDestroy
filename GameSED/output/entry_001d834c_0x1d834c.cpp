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

// Function: entry_001d834c
// Address: 0x1d834c - 0x1d8350
void entry_001d834c_0x1d834c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d834c_0x1d834c");
#endif

    ctx->pc = 0x1d834cu;

    // 0x1d834c: 0x8c82015c  lw          $v0, 0x15C($a0)
    ctx->pc = 0x1d834cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 348)));
    ctx->pc = 0x1d8350u;
}
