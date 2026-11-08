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

// Function: entry_001a2c94
// Address: 0x1a2c94 - 0x1a2c9c
void entry_001a2c94_0x1a2c94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2c94_0x1a2c94");
#endif

    ctx->pc = 0x1a2c94u;

label_1a2c94:
    // 0x1a2c94: 0x40f809  jalr        $v0
label_1a2c98:
    if (ctx->pc == 0x1A2C98u) {
        ctx->pc = 0x1A2C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C94u;
        // 0x1a2c98: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C9Cu;
        goto label_fallthrough_0x1a2c94;
    }
    ctx->pc = 0x1A2C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A2C9Cu);
        ctx->pc = 0x1A2C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C94u;
        // 0x1a2c98: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2C94u, 0x1A2C9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1a2c94:
    ctx->pc = 0x1A2C9Cu;
}
