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

// Function: entry_001a8f04
// Address: 0x1a8f04 - 0x1a8f28
void entry_001a8f04_0x1a8f04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8f04_0x1a8f04");
#endif

    ctx->pc = 0x1a8f04u;

    // 0x1a8f04: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x1a8f04u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1a8f08: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1a8f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a8f0c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1a8f0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a8f10: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A8F10u;
    {
        const bool branch_taken_0x1a8f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F10u;
        // 0x1a8f14: 0x8e440028  lw          $a0, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8f10) {
            ctx->pc = 0x1A8F28u;
            return;
        }
    }
    ctx->pc = 0x1A8F18u;
    // 0x1a8f18: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a8f18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a8f1c: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x1a8f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1a8f20: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A8F20u;
    SET_GPR_U32(ctx, 31, 0x1A8F28u);
    ctx->pc = 0x1A8F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8F20u;
    // 0x1a8f24: 0x24a593c8  addiu       $a1, $a1, -0x6C38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A8F20u, 0x1A8F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8F28u;
}
