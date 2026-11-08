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

// Function: entry_001cbd9c
// Address: 0x1cbd9c - 0x1cbda0
void entry_001cbd9c_0x1cbd9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbd9c_0x1cbd9c");
#endif

    ctx->pc = 0x1cbd9cu;

    // 0x1cbd9c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1cbd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1cbda0u;
}
