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

// Function: entry_001197a0
// Address: 0x1197a0 - 0x1197a4
void entry_001197a0_0x1197a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001197a0_0x1197a0");
#endif

    ctx->pc = 0x1197a0u;

    // 0x1197a0: 0x27b00004  addiu       $s0, $sp, 0x4
    ctx->pc = 0x1197a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x1197a4u;
}
