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

// Function: entry_00174164
// Address: 0x174164 - 0x174168
void entry_00174164_0x174164(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174164_0x174164");
#endif

    ctx->pc = 0x174164u;

    // 0x174164: 0x3c100027  lui         $s0, 0x27
    ctx->pc = 0x174164u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)39 << 16));
    ctx->pc = 0x174168u;
}
