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

// Function: entry_0011a1cc
// Address: 0x11a1cc - 0x11a1d4
void entry_0011a1cc_0x11a1cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a1cc_0x11a1cc");
#endif

    ctx->pc = 0x11a1ccu;

    // 0x11a1cc: 0x3c10001f  lui         $s0, 0x1F
    ctx->pc = 0x11a1ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)31 << 16));
    // 0x11a1d0: 0x2610c540  addiu       $s0, $s0, -0x3AC0
    ctx->pc = 0x11a1d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952256));
    ctx->pc = 0x11a1d4u;
}
