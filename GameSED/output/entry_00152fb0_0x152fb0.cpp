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

// Function: entry_00152fb0
// Address: 0x152fb0 - 0x152fb4
void entry_00152fb0_0x152fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152fb0_0x152fb0");
#endif

    ctx->pc = 0x152fb0u;

    // 0x152fb0: 0x8e220264  lw          $v0, 0x264($s1)
    ctx->pc = 0x152fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
    ctx->pc = 0x152fb4u;
}
