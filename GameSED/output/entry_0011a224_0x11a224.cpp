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

// Function: entry_0011a224
// Address: 0x11a224 - 0x11a22c
void entry_0011a224_0x11a224(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a224_0x11a224");
#endif

    ctx->pc = 0x11a224u;

    // 0x11a224: 0x3c10001f  lui         $s0, 0x1F
    ctx->pc = 0x11a224u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)31 << 16));
    // 0x11a228: 0x2610c540  addiu       $s0, $s0, -0x3AC0
    ctx->pc = 0x11a228u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952256));
    ctx->pc = 0x11a22cu;
}
