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

// Function: entry_00142c24
// Address: 0x142c24 - 0x142c30
void entry_00142c24_0x142c24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142c24_0x142c24");
#endif

    ctx->pc = 0x142c24u;

    // 0x142c24: 0x26300034  addiu       $s0, $s1, 0x34
    ctx->pc = 0x142c24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
    // 0x142c28: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x142c28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x142c2c: 0x8e06fff0  lw          $a2, -0x10($s0)
    ctx->pc = 0x142c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967280)));
    ctx->pc = 0x142c30u;
}
