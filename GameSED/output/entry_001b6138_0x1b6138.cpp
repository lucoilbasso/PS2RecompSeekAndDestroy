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

// Function: entry_001b6138
// Address: 0x1b6138 - 0x1b6140
void entry_001b6138_0x1b6138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6138_0x1b6138");
#endif

    ctx->pc = 0x1b6138u;

    // 0x1b6138: 0x8e82b400  lw          $v0, -0x4C00($s4)
    ctx->pc = 0x1b6138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294947840)));
    // 0x1b613c: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x1b613cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1b6140u;
}
