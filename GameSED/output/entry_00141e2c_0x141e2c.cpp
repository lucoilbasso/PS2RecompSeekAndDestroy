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

// Function: entry_00141e2c
// Address: 0x141e2c - 0x141e34
void entry_00141e2c_0x141e2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141e2c_0x141e2c");
#endif

    ctx->pc = 0x141e2cu;

    // 0x141e2c: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x141e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x141e30: 0x2442ee48  addiu       $v0, $v0, -0x11B8
    ctx->pc = 0x141e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962760));
    ctx->pc = 0x141e34u;
}
