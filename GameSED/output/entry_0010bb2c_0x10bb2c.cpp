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

// Function: entry_0010bb2c
// Address: 0x10bb2c - 0x10bb30
void entry_0010bb2c_0x10bb2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010bb2c_0x10bb2c");
#endif

    ctx->pc = 0x10bb2cu;

    // 0x10bb2c: 0x2453d650  addiu       $s3, $v0, -0x29B0
    ctx->pc = 0x10bb2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956624));
    ctx->pc = 0x10bb30u;
}
