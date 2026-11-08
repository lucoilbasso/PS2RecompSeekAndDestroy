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

// Function: entry_00129f9c
// Address: 0x129f9c - 0x129fa0
void entry_00129f9c_0x129f9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129f9c_0x129f9c");
#endif

    ctx->pc = 0x129f9cu;

    // 0x129f9c: 0x245001b0  addiu       $s0, $v0, 0x1B0
    ctx->pc = 0x129f9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
    ctx->pc = 0x129fa0u;
}
