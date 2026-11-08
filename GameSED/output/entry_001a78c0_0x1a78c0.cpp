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

// Function: entry_001a78c0
// Address: 0x1a78c0 - 0x1a78e0
void entry_001a78c0_0x1a78c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a78c0_0x1a78c0");
#endif

    ctx->pc = 0x1a78c0u;

    // 0x1a78c0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1a78c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a78c4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1a78c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a78c8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A78C8u;
    {
        const bool branch_taken_0x1a78c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A78CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A78C8u;
        // 0x1a78cc: 0x8e440028  lw          $a0, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a78c8) {
            ctx->pc = 0x1A78E0u;
            return;
        }
    }
    ctx->pc = 0x1A78D0u;
    // 0x1a78d0: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a78d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a78d4: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x1a78d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1a78d8: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A78D8u;
    SET_GPR_U32(ctx, 31, 0x1A78E0u);
    ctx->pc = 0x1A78DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A78D8u;
    // 0x1a78dc: 0x24a593c8  addiu       $a1, $a1, -0x6C38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A78D8u, 0x1A78E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A78E0u;
}
