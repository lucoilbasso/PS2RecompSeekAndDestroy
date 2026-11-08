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

// Function: _ErrMessage
// Address: 0x1be238 - 0x1be248
void ps2__ErrMessage_0x1be238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ErrMessage_0x1be238");
#endif

    ctx->pc = 0x1be238u;

    // 0x1be238: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1be238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be23c: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1be23cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1be240: 0x806c3f0  j           func_1B0FC0
    ctx->pc = 0x1BE240u;
    ctx->pc = 0x1BE244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE240u;
    // 0x1be244: 0x2484b328  addiu       $a0, $a0, -0x4CD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    scePrintf_0x1b0fc0(rdram, ctx, runtime); return;
    ctx->pc = 0x1BE248u;
}
