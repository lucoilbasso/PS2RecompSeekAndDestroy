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

// Function: entry_001da9c8
// Address: 0x1da9c8 - 0x1da9d8
void entry_001da9c8_0x1da9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da9c8_0x1da9c8");
#endif

    ctx->pc = 0x1da9c8u;

    // 0x1da9c8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1da9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1da9cc: 0x24060026  addiu       $a2, $zero, 0x26
    ctx->pc = 0x1da9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1da9d0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1DA9D0u;
    SET_GPR_U32(ctx, 31, 0x1DA9D8u);
    ctx->pc = 0x1DA9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA9D0u;
    // 0x1da9d4: 0x24a56e90  addiu       $a1, $a1, 0x6E90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1DA9D0u, 0x1DA9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA9D8u;
}
