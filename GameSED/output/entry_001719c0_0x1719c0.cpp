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

// Function: entry_001719c0
// Address: 0x1719c0 - 0x1719c4
void entry_001719c0_0x1719c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001719c0_0x1719c0");
#endif

    ctx->pc = 0x1719c0u;

    // 0x1719c0: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x1719c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    ctx->pc = 0x1719c4u;
}
