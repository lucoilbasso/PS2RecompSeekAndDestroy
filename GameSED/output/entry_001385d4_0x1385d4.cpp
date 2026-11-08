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

// Function: entry_001385d4
// Address: 0x1385d4 - 0x1385d8
void entry_001385d4_0x1385d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001385d4_0x1385d4");
#endif

    ctx->pc = 0x1385d4u;

    // 0x1385d4: 0x8f828a2c  lw          $v0, -0x75D4($gp)
    ctx->pc = 0x1385d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937132)));
    ctx->pc = 0x1385d8u;
}
