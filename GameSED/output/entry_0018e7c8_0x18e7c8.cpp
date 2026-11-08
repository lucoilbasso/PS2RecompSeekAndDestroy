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

// Function: entry_0018e7c8
// Address: 0x18e7c8 - 0x18e7d8
void entry_0018e7c8_0x18e7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e7c8_0x18e7c8");
#endif

    ctx->pc = 0x18e7c8u;

    // 0x18e7c8: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x18e7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x18e7cc: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x18e7ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x18e7d0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x18E7D0u;
    SET_GPR_U32(ctx, 31, 0x18E7D8u);
    ctx->pc = 0x18E7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E7D0u;
    // 0x18e7d4: 0x24a580d0  addiu       $a1, $a1, -0x7F30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x18E7D0u, 0x18E7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E7D8u;
}
