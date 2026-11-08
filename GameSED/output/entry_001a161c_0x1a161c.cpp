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

// Function: entry_001a161c
// Address: 0x1a161c - 0x1a1620
void entry_001a161c_0x1a161c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a161c_0x1a161c");
#endif

    ctx->pc = 0x1a161cu;

    // 0x1a161c: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x1a161cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->pc = 0x1a1620u;
}
