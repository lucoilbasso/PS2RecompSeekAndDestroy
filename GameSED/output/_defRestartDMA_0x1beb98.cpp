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

// Function: _defRestartDMA
// Address: 0x1beb98 - 0x1beba4
void _defRestartDMA_0x1beb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_defRestartDMA_0x1beb98");
#endif

    ctx->pc = 0x1beb98u;

    // 0x1beb98: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x1beb98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1beb9c: 0x80710ee  j           func_1C43B8
    ctx->pc = 0x1BEB9Cu;
    ctx->pc = 0x1BEBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEB9Cu;
    // 0x1beba0: 0x2484004c  addiu       $a0, $a0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C43B8u;
    sceIpuRestartDMA_0x1c43b8(rdram, ctx, runtime); return;
    ctx->pc = 0x1BEBA4u;
}
