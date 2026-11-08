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

// Function: entry_001a442c
// Address: 0x1a442c - 0x1a4430
void entry_001a442c_0x1a442c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a442c_0x1a442c");
#endif

    ctx->pc = 0x1a442cu;

    // 0x1a442c: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x1a442cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    ctx->pc = 0x1a4430u;
}
