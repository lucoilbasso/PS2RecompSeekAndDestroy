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

// Function: entry_001d55d0
// Address: 0x1d55d0 - 0x1d55d4
void entry_001d55d0_0x1d55d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d55d0_0x1d55d0");
#endif

    ctx->pc = 0x1d55d0u;

    // 0x1d55d0: 0x2610000a  addiu       $s0, $s0, 0xA
    ctx->pc = 0x1d55d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
    ctx->pc = 0x1d55d4u;
}
