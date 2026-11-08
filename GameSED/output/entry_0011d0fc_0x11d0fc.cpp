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

// Function: entry_0011d0fc
// Address: 0x11d0fc - 0x11d100
void entry_0011d0fc_0x11d0fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d0fc_0x11d0fc");
#endif

    ctx->pc = 0x11d0fcu;

    // 0x11d0fc: 0x3c120024  lui         $s2, 0x24
    ctx->pc = 0x11d0fcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)36 << 16));
    ctx->pc = 0x11d100u;
}
