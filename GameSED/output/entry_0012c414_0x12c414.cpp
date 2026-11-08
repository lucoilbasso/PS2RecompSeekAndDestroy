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

// Function: entry_0012c414
// Address: 0x12c414 - 0x12c418
void entry_0012c414_0x12c414(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c414_0x12c414");
#endif

    ctx->pc = 0x12c414u;

    // 0x12c414: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x12c414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    ctx->pc = 0x12c418u;
}
