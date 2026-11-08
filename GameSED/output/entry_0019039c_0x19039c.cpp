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

// Function: entry_0019039c
// Address: 0x19039c - 0x1903a0
void entry_0019039c_0x19039c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019039c_0x19039c");
#endif

    ctx->pc = 0x19039cu;

    // 0x19039c: 0x24830154  addiu       $v1, $a0, 0x154
    ctx->pc = 0x19039cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 340));
    ctx->pc = 0x1903a0u;
}
