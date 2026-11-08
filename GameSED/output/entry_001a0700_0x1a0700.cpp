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

// Function: entry_001a0700
// Address: 0x1a0700 - 0x1a0704
void entry_001a0700_0x1a0700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0700_0x1a0700");
#endif

    ctx->pc = 0x1a0700u;

    // 0x1a0700: 0x24468fc8  addiu       $a2, $v0, -0x7038
    ctx->pc = 0x1a0700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938568));
    ctx->pc = 0x1a0704u;
}
