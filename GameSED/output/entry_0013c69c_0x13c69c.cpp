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

// Function: entry_0013c69c
// Address: 0x13c69c - 0x13c6a0
void entry_0013c69c_0x13c69c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c69c_0x13c69c");
#endif

    ctx->pc = 0x13c69cu;

    // 0x13c69c: 0x260201b4  addiu       $v0, $s0, 0x1B4
    ctx->pc = 0x13c69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    ctx->pc = 0x13c6a0u;
}
