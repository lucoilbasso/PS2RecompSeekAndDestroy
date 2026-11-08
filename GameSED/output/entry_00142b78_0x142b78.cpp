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

// Function: entry_00142b78
// Address: 0x142b78 - 0x142b88
void entry_00142b78_0x142b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142b78_0x142b78");
#endif

    ctx->pc = 0x142b78u;

    // 0x142b78: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x142b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x142b7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x142b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142b80: 0xac62362c  sw          $v0, 0x362C($v1)
    ctx->pc = 0x142b80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 13868), GPR_U32(ctx, 2));
    // 0x142b84: 0xac603628  sw          $zero, 0x3628($v1)
    ctx->pc = 0x142b84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 13864), GPR_U32(ctx, 0));
    ctx->pc = 0x142b88u;
}
