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

// Function: entry_001c1da0
// Address: 0x1c1da0 - 0x1c1da4
void entry_001c1da0_0x1c1da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1da0_0x1c1da0");
#endif

    ctx->pc = 0x1c1da0u;

    // 0x1c1da0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1c1da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x1c1da4u;
}
