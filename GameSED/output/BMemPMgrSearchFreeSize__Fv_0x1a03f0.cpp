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

// Function: BMemPMgrSearchFreeSize__Fv
// Address: 0x1a03f0 - 0x1a0434
void BMemPMgrSearchFreeSize__Fv_0x1a03f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMemPMgrSearchFreeSize__Fv_0x1a03f0");
#endif

    switch (ctx->pc) {
        case 0x1a0408u: goto label_1a0408;
        default: break;
    }

    ctx->pc = 0x1a03f0u;

    // 0x1a03f0: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x1a03f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x1a03f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a03f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a03f8: 0x2444f640  addiu       $a0, $v0, -0x9C0
    ctx->pc = 0x1a03f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964800));
    // 0x1a03fc: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1a03fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a0400: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a0400u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x23F640u));
    // 0x1a0404: 0x0  nop
    ctx->pc = 0x1a0404u;
    // NOP
label_1a0408:
    // 0x1a0408: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0408u;
    {
        const bool branch_taken_0x1a0408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0408u;
        // 0x1a040c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0408) {
            ctx->pc = 0x1A0418u;
            goto label_1a0418;
        }
    }
    ctx->pc = 0x1A0410u;
    // 0x1a0410: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1a0410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1a0414: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1a0414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1a0418:
    // 0x1a0418: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a0418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a041c: 0x0  nop
    ctx->pc = 0x1a041cu;
    // NOP
    // 0x1a0420: 0x0  nop
    ctx->pc = 0x1a0420u;
    // NOP
    // 0x1a0424: 0x463fff8  bgezl       $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A0424u;
    {
        const bool branch_taken_0x1a0424 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1a0424) {
            ctx->pc = 0x1A0428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0424u;
            // 0x1a0428: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0408;
        }
    }
    ctx->pc = 0x1A042Cu;
    // 0x1a042c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A042Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A042Cu;
        // 0x1a0430: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A042Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0434u;
}
