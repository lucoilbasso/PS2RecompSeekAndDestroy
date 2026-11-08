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

// Function: entry_001060f8
// Address: 0x1060f8 - 0x10611c
void entry_001060f8_0x1060f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001060f8_0x1060f8");
#endif

    ctx->pc = 0x1060f8u;

    // 0x1060f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1060f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1060fc: 0x8f8388a0  lw          $v1, -0x7760($gp)
    ctx->pc = 0x1060fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936736)));
    // 0x106100: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x106100u;
    {
        const bool branch_taken_0x106100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x106104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106100u;
        // 0x106104: 0x8c900024  lw          $s0, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106100) {
            ctx->pc = 0x10611Cu;
            return;
        }
    }
    ctx->pc = 0x106108u;
    // 0x106108: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x106108u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x10610c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10610cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106110: 0x24a5d0a8  addiu       $a1, $a1, -0x2F58
    ctx->pc = 0x106110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955176));
    // 0x106114: 0xc068186  jal         func_1A0618
    ctx->pc = 0x106114u;
    SET_GPR_U32(ctx, 31, 0x10611Cu);
    ctx->pc = 0x106118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106114u;
    // 0x106118: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x106114u, 0x10611Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10611Cu;
}
