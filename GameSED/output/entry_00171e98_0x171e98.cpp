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

// Function: entry_00171e98
// Address: 0x171e98 - 0x171e9c
void entry_00171e98_0x171e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171e98_0x171e98");
#endif

    ctx->pc = 0x171e98u;

    // 0x171e98: 0x25083600  addiu       $t0, $t0, 0x3600
    ctx->pc = 0x171e98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13824));
    ctx->pc = 0x171e9cu;
}
