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

// Function: entry_001a10dc
// Address: 0x1a10dc - 0x1a10e0
void entry_001a10dc_0x1a10dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a10dc_0x1a10dc");
#endif

    ctx->pc = 0x1a10dcu;

    // 0x1a10dc: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x1a10dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    ctx->pc = 0x1a10e0u;
}
