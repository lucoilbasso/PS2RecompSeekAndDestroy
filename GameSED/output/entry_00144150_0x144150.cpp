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

// Function: entry_00144150
// Address: 0x144150 - 0x144154
void entry_00144150_0x144150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144150_0x144150");
#endif

    ctx->pc = 0x144150u;

    // 0x144150: 0x26102680  addiu       $s0, $s0, 0x2680
    ctx->pc = 0x144150u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9856));
    ctx->pc = 0x144154u;
}
