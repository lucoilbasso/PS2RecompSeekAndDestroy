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

// Function: entry_001ad66c
// Address: 0x1ad66c - 0x1ad674
void entry_001ad66c_0x1ad66c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad66c_0x1ad66c");
#endif

    ctx->pc = 0x1ad66cu;

    // 0x1ad66c: 0x26970001  addiu       $s7, $s4, 0x1
    ctx->pc = 0x1ad66cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1ad670: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ad670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    ctx->pc = 0x1ad674u;
}
