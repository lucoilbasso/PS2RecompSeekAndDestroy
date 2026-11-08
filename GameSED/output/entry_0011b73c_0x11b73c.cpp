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

// Function: entry_0011b73c
// Address: 0x11b73c - 0x11b740
void entry_0011b73c_0x11b73c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b73c_0x11b73c");
#endif

    ctx->pc = 0x11b73cu;

    // 0x11b73c: 0x261120a0  addiu       $s1, $s0, 0x20A0
    ctx->pc = 0x11b73cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8352));
    ctx->pc = 0x11b740u;
}
