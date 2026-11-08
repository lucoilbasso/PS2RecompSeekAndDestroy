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

// Function: _sequenceScalableExtension
// Address: 0x1beb48 - 0x1beb54
void _sequenceScalableExtension_0x1beb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sequenceScalableExtension_0x1beb48");
#endif

    ctx->pc = 0x1beb48u;

    // 0x1beb48: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1beb48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1beb4c: 0x806f8a0  j           func_1BE280
    ctx->pc = 0x1BEB4Cu;
    ctx->pc = 0x1BEB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEB4Cu;
    // 0x1beb50: 0x24a5b398  addiu       $a1, $a1, -0x4C68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE280u;
    ps2__Error_0x1be280(rdram, ctx, runtime); return;
    ctx->pc = 0x1BEB54u;
}
