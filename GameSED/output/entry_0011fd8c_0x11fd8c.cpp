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

// Function: entry_0011fd8c
// Address: 0x11fd8c - 0x11fd90
void entry_0011fd8c_0x11fd8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fd8c_0x11fd8c");
#endif

    ctx->pc = 0x11fd8cu;

    // 0x11fd8c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x11fd8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->pc = 0x11fd90u;
}
