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

// Function: entry_001306d0
// Address: 0x1306d0 - 0x1306d8
void entry_001306d0_0x1306d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001306d0_0x1306d0");
#endif

    ctx->pc = 0x1306d0u;

    // 0x1306d0: 0x8d020014  lw          $v0, 0x14($t0)
    ctx->pc = 0x1306d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x1306d4: 0xae2200e4  sw          $v0, 0xE4($s1)
    ctx->pc = 0x1306d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 2));
    ctx->pc = 0x1306d8u;
}
