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

// Function: entry_00142da0
// Address: 0x142da0 - 0x142db4
void entry_00142da0_0x142da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142da0_0x142da0");
#endif

    ctx->pc = 0x142da0u;

    // 0x142da0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x142da0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x142da4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x142da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142da8: 0x24a56930  addiu       $a1, $a1, 0x6930
    ctx->pc = 0x142da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26928));
    // 0x142dac: 0xc068186  jal         func_1A0618
    ctx->pc = 0x142DACu;
    SET_GPR_U32(ctx, 31, 0x142DB4u);
    ctx->pc = 0x142DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142DACu;
    // 0x142db0: 0x24060035  addiu       $a2, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x142DACu, 0x142DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142DB4u;
}
