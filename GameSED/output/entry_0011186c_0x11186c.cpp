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

// Function: entry_0011186c
// Address: 0x11186c - 0x111870
void entry_0011186c_0x11186c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011186c_0x11186c");
#endif

    ctx->pc = 0x11186cu;

    // 0x11186c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x11186cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x111870u;
}
