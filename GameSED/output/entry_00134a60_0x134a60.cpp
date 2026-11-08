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

// Function: entry_00134a60
// Address: 0x134a60 - 0x134a64
void entry_00134a60_0x134a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134a60_0x134a60");
#endif

    ctx->pc = 0x134a60u;

    // 0x134a60: 0x8c45b830  lw          $a1, -0x47D0($v0)
    ctx->pc = 0x134a60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    ctx->pc = 0x134a64u;
}
