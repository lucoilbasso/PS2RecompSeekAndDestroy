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

// Function: entry_0019ea28
// Address: 0x19ea28 - 0x19ea2c
void entry_0019ea28_0x19ea28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ea28_0x19ea28");
#endif

    ctx->pc = 0x19ea28u;

    // 0x19ea28: 0x3c110027  lui         $s1, 0x27
    ctx->pc = 0x19ea28u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)39 << 16));
    ctx->pc = 0x19ea2cu;
}
