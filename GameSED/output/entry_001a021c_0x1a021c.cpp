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

// Function: entry_001a021c
// Address: 0x1a021c - 0x1a0220
void entry_001a021c_0x1a021c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a021c_0x1a021c");
#endif

    ctx->pc = 0x1a021cu;

    // 0x1a021c: 0x8f828dd8  lw          $v0, -0x7228($gp)
    ctx->pc = 0x1a021cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
    ctx->pc = 0x1a0220u;
}
