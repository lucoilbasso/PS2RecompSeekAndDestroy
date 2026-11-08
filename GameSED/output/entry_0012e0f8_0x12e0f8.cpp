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

// Function: entry_0012e0f8
// Address: 0x12e0f8 - 0x12e0fc
void entry_0012e0f8_0x12e0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e0f8_0x12e0f8");
#endif

    ctx->pc = 0x12e0f8u;

    // 0x12e0f8: 0x8ce30114  lw          $v1, 0x114($a3)
    ctx->pc = 0x12e0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 276)));
    ctx->pc = 0x12e0fcu;
}
