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

// Function: entry_001903b0
// Address: 0x1903b0 - 0x1903b4
void entry_001903b0_0x1903b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001903b0_0x1903b0");
#endif

    ctx->pc = 0x1903b0u;

    // 0x1903b0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1903b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->pc = 0x1903b4u;
}
