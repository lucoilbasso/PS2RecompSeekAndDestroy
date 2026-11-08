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

// Function: entry_001b09f0
// Address: 0x1b09f0 - 0x1b09f4
void entry_001b09f0_0x1b09f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b09f0_0x1b09f0");
#endif

    ctx->pc = 0x1b09f0u;

    // 0x1b09f0: 0x26120001  addiu       $s2, $s0, 0x1
    ctx->pc = 0x1b09f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x1b09f4u;
}
