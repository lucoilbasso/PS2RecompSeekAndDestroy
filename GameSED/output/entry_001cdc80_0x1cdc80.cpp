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

// Function: entry_001cdc80
// Address: 0x1cdc80 - 0x1cdc84
void entry_001cdc80_0x1cdc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cdc80_0x1cdc80");
#endif

    ctx->pc = 0x1cdc80u;

    // 0x1cdc80: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1cdc80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->pc = 0x1cdc84u;
}
