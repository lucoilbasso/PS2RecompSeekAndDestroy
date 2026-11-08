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

// Function: entry_001a9010
// Address: 0x1a9010 - 0x1a9034
void entry_001a9010_0x1a9010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9010_0x1a9010");
#endif

    ctx->pc = 0x1a9010u;

    // 0x1a9010: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x1a9010u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a9014: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1a9014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a9018: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1a9018u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a901c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A901Cu;
    {
        const bool branch_taken_0x1a901c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A901Cu;
        // 0x1a9020: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a901c) {
            ctx->pc = 0x1A9034u;
            return;
        }
    }
    ctx->pc = 0x1A9024u;
    // 0x1a9024: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a9024u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a9028: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x1a9028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1a902c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A902Cu;
    SET_GPR_U32(ctx, 31, 0x1A9034u);
    ctx->pc = 0x1A9030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A902Cu;
    // 0x1a9030: 0x24a593c8  addiu       $a1, $a1, -0x6C38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A902Cu, 0x1A9034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9034u;
}
