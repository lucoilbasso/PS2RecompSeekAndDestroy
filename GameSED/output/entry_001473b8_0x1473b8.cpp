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

// Function: entry_001473b8
// Address: 0x1473b8 - 0x1473bc
void entry_001473b8_0x1473b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001473b8_0x1473b8");
#endif

    ctx->pc = 0x1473b8u;

    // 0x1473b8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1473b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1473bcu;
}
