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

// Function: entry_0014ca80
// Address: 0x14ca80 - 0x14ca84
void entry_0014ca80_0x14ca80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ca80_0x14ca80");
#endif

    ctx->pc = 0x14ca80u;

    // 0x14ca80: 0x8e0301b8  lw          $v1, 0x1B8($s0)
    ctx->pc = 0x14ca80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
    ctx->pc = 0x14ca84u;
}
