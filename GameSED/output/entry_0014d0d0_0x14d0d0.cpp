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

// Function: entry_0014d0d0
// Address: 0x14d0d0 - 0x14d0dc
void entry_0014d0d0_0x14d0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d0d0_0x14d0d0");
#endif

    ctx->pc = 0x14d0d0u;

    // 0x14d0d0: 0x8ce801b4  lw          $t0, 0x1B4($a3)
    ctx->pc = 0x14d0d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
    // 0x14d0d4: 0xc041228  jal         func_1048A0
    ctx->pc = 0x14D0D4u;
    SET_GPR_U32(ctx, 31, 0x14D0DCu);
    ctx->pc = 0x14D0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D0D4u;
    // 0x14d0d8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1048A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1048A0u, 0x14D0D4u, 0x14D0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D0DCu;
}
