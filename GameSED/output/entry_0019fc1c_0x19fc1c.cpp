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

// Function: entry_0019fc1c
// Address: 0x19fc1c - 0x19fc20
void entry_0019fc1c_0x19fc1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fc1c_0x19fc1c");
#endif

    ctx->pc = 0x19fc1cu;

    // 0x19fc1c: 0x8f848e08  lw          $a0, -0x71F8($gp)
    ctx->pc = 0x19fc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938120)));
    ctx->pc = 0x19fc20u;
}
