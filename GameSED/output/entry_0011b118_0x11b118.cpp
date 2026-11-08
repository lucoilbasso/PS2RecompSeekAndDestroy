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

// Function: entry_0011b118
// Address: 0x11b118 - 0x11b11c
void entry_0011b118_0x11b118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b118_0x11b118");
#endif

    ctx->pc = 0x11b118u;

    // 0x11b118: 0x261233f0  addiu       $s2, $s0, 0x33F0
    ctx->pc = 0x11b118u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 13296));
    ctx->pc = 0x11b11cu;
}
