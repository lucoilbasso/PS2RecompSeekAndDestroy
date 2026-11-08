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

// Function: entry_001cf64c
// Address: 0x1cf64c - 0x1cf650
void entry_001cf64c_0x1cf64c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf64c_0x1cf64c");
#endif

    ctx->pc = 0x1cf64cu;

    // 0x1cf64c: 0x2456e5d0  addiu       $s6, $v0, -0x1A30
    ctx->pc = 0x1cf64cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960592));
    ctx->pc = 0x1cf650u;
}
