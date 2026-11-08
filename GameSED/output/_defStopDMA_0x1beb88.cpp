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

// Function: _defStopDMA
// Address: 0x1beb88 - 0x1beb94
void _defStopDMA_0x1beb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_defStopDMA_0x1beb88");
#endif

    ctx->pc = 0x1beb88u;

    // 0x1beb88: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x1beb88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1beb8c: 0x80710b4  j           func_1C42D0
    ctx->pc = 0x1BEB8Cu;
    ctx->pc = 0x1BEB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEB8Cu;
    // 0x1beb90: 0x2484004c  addiu       $a0, $a0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42D0u;
    sceIpuStopDMA_0x1c42d0(rdram, ctx, runtime); return;
    ctx->pc = 0x1BEB94u;
}
