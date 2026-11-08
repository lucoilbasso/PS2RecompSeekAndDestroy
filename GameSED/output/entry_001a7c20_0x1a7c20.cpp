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

// Function: entry_001a7c20
// Address: 0x1a7c20 - 0x1a7c4c
void entry_001a7c20_0x1a7c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7c20_0x1a7c20");
#endif

    ctx->pc = 0x1a7c20u;

    // 0x1a7c20: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A7C20u;
    {
        const bool branch_taken_0x1a7c20 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7C20u;
        // 0x1a7c24: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7c20) {
            ctx->pc = 0x1A7C68u;
            return;
        }
    }
    ctx->pc = 0x1A7C28u;
    // 0x1a7c28: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x1a7c28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a7c2c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a7c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a7c30: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1a7c30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a7c34: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7C34u;
    {
        const bool branch_taken_0x1a7c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7C34u;
        // 0x1a7c38: 0x8e240028  lw          $a0, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7c34) {
            ctx->pc = 0x1A7C4Cu;
            return;
        }
    }
    ctx->pc = 0x1A7C3Cu;
    // 0x1a7c3c: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a7c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a7c40: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x1a7c40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1a7c44: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A7C44u;
    SET_GPR_U32(ctx, 31, 0x1A7C4Cu);
    ctx->pc = 0x1A7C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7C44u;
    // 0x1a7c48: 0x24a593c8  addiu       $a1, $a1, -0x6C38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A7C44u, 0x1A7C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7C4Cu;
}
