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

// Function: entry_001a2748
// Address: 0x1a2748 - 0x1a2758
void entry_001a2748_0x1a2748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2748_0x1a2748");
#endif

    ctx->pc = 0x1a2748u;

    // 0x1a2748: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a2748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a274c: 0x24a59238  addiu       $a1, $a1, -0x6DC8
    ctx->pc = 0x1a274cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939192));
    // 0x1a2750: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A2750u;
    SET_GPR_U32(ctx, 31, 0x1A2758u);
    ctx->pc = 0x1A2754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2750u;
    // 0x1a2754: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A2750u, 0x1A2758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2758u;
}
