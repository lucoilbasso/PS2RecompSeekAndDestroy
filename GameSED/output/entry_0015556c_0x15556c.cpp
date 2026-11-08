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

// Function: entry_0015556c
// Address: 0x15556c - 0x155570
void entry_0015556c_0x15556c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015556c_0x15556c");
#endif

    ctx->pc = 0x15556cu;

    // 0x15556c: 0x8cc20898  lw          $v0, 0x898($a2)
    ctx->pc = 0x15556cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2200)));
    ctx->pc = 0x155570u;
}
