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

// Function: entry_0012c51c
// Address: 0x12c51c - 0x12c520
void entry_0012c51c_0x12c51c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c51c_0x12c51c");
#endif

    ctx->pc = 0x12c51cu;

    // 0x12c51c: 0x249001b0  addiu       $s0, $a0, 0x1B0
    ctx->pc = 0x12c51cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    ctx->pc = 0x12c520u;
}
