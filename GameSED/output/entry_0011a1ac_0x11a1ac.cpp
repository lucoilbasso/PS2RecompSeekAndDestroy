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

// Function: entry_0011a1ac
// Address: 0x11a1ac - 0x11a1b0
void entry_0011a1ac_0x11a1ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a1ac_0x11a1ac");
#endif

    ctx->pc = 0x11a1acu;

    // 0x11a1ac: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x11a1acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    ctx->pc = 0x11a1b0u;
}
