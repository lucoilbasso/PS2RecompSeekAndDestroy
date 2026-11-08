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

// Function: entry_001cf414
// Address: 0x1cf414 - 0x1cf418
void entry_001cf414_0x1cf414(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf414_0x1cf414");
#endif

    ctx->pc = 0x1cf414u;

    // 0x1cf414: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x1cf414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    ctx->pc = 0x1cf418u;
}
