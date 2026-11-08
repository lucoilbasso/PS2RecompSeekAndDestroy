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

// Function: entry_001cf48c
// Address: 0x1cf48c - 0x1cf490
void entry_001cf48c_0x1cf48c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf48c_0x1cf48c");
#endif

    ctx->pc = 0x1cf48cu;

    // 0x1cf48c: 0x2450e1b0  addiu       $s0, $v0, -0x1E50
    ctx->pc = 0x1cf48cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959536));
    ctx->pc = 0x1cf490u;
}
