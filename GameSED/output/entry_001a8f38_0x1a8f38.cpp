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

// Function: entry_001a8f38
// Address: 0x1a8f38 - 0x1a8f3c
void entry_001a8f38_0x1a8f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8f38_0x1a8f38");
#endif

    ctx->pc = 0x1a8f38u;

    // 0x1a8f38: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1a8f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->pc = 0x1a8f3cu;
}
