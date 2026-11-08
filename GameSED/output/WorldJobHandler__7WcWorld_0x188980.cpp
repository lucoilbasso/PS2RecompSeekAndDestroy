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

// Function: WorldJobHandler__7WcWorld
// Address: 0x188980 - 0x1889cc
void WorldJobHandler__7WcWorld_0x188980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WorldJobHandler__7WcWorld_0x188980");
#endif

    switch (ctx->pc) {
        case 0x1889a8u: goto label_1889a8;
        default: break;
    }

    ctx->pc = 0x188980u;

    // 0x188980: 0x8c84015c  lw          $a0, 0x15C($a0)
    ctx->pc = 0x188980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 348)));
    // 0x188984: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x188984u;
    {
        const bool branch_taken_0x188984 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x188984) {
            ctx->pc = 0x1889C4u;
            goto label_1889c4;
        }
    }
    ctx->pc = 0x18898Cu;
    // 0x18898c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x18898cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x188990: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x188990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188994: 0x621804  sllv        $v1, $v0, $v1
    ctx->pc = 0x188994u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x188998: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x188998u;
    {
        const bool branch_taken_0x188998 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x18899Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188998u;
        // 0x18899c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188998) {
            ctx->pc = 0x1889C4u;
            goto label_1889c4;
        }
    }
    ctx->pc = 0x1889A0u;
    // 0x1889a0: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1889a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1889a4: 0x2442d600  addiu       $v0, $v0, -0x2A00
    ctx->pc = 0x1889a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956544));
label_1889a8:
    // 0x1889a8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1889a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1889ac: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1889acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1889b0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1889b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1889b4: 0x0  nop
    ctx->pc = 0x1889b4u;
    // NOP
    // 0x1889b8: 0x0  nop
    ctx->pc = 0x1889b8u;
    // NOP
    // 0x1889bc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1889BCu;
    {
        const bool branch_taken_0x1889bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1889C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1889BCu;
        // 0x1889c0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1889bc) {
            ctx->pc = 0x1889A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1889a8;
        }
    }
    ctx->pc = 0x1889C4u;
label_1889c4:
    // 0x1889c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1889C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1889C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1889CCu;
}
