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

// Function: entry_0012c304
// Address: 0x12c304 - 0x12c308
void entry_0012c304_0x12c304(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c304_0x12c304");
#endif

    ctx->pc = 0x12c304u;

    // 0x12c304: 0x248501bc  addiu       $a1, $a0, 0x1BC
    ctx->pc = 0x12c304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 444));
    ctx->pc = 0x12c308u;
}
