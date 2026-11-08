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

// Function: entry_001a7020
// Address: 0x1a7020 - 0x1a7040
void entry_001a7020_0x1a7020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7020_0x1a7020");
#endif

    ctx->pc = 0x1a7020u;

    // 0x1a7020: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1a7020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a7024: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1a7024u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a7028: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7028u;
    {
        const bool branch_taken_0x1a7028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A702Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7028u;
        // 0x1a702c: 0x8e440028  lw          $a0, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7028) {
            ctx->pc = 0x1A7040u;
            return;
        }
    }
    ctx->pc = 0x1A7030u;
    // 0x1a7030: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a7030u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a7034: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x1a7034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1a7038: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A7038u;
    SET_GPR_U32(ctx, 31, 0x1A7040u);
    ctx->pc = 0x1A703Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7038u;
    // 0x1a703c: 0x24a593c8  addiu       $a1, $a1, -0x6C38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A7038u, 0x1A7040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7040u;
}
