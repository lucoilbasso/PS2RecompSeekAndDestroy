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

// Function: BObjClassName__FP5BcObj
// Address: 0x1a14b8 - 0x1a150c
void BObjClassName__FP5BcObj_0x1a14b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BObjClassName__FP5BcObj_0x1a14b8");
#endif

    switch (ctx->pc) {
        case 0x1a14c8u: goto label_1a14c8;
        case 0x1a14e8u: goto label_1a14e8;
        default: break;
    }

    ctx->pc = 0x1a14b8u;

    // 0x1a14b8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A14B8u;
    {
        const bool branch_taken_0x1a14b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A14BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A14B8u;
        // 0x1a14bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a14b8) {
            ctx->pc = 0x1A14D0u;
            goto label_1a14d0;
        }
    }
    ctx->pc = 0x1A14C0u;
    // 0x1a14c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A14C0u;
    {
        const bool branch_taken_0x1a14c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A14C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A14C0u;
        // 0x1a14c4: 0x8c850000  lw          $a1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a14c0) {
            ctx->pc = 0x1A14D0u;
            goto label_1a14d0;
        }
    }
    ctx->pc = 0x1A14C8u;
label_1a14c8:
    // 0x1a14c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A14C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A14CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A14C8u;
        // 0x1a14cc: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A14C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A14D0u;
label_1a14d0:
    // 0x1a14d0: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x1a14d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x1a14d4: 0x2444f6a8  addiu       $a0, $v0, -0x958
    ctx->pc = 0x1a14d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964904));
    // 0x1a14d8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a14d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x23F6A8u));
    // 0x1a14dc: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A14DCu;
    {
        const bool branch_taken_0x1a14dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A14E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A14DCu;
        // 0x1a14e0: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a14dc) {
            ctx->pc = 0x1A1504u;
            goto label_1a1504;
        }
    }
    ctx->pc = 0x1A14E4u;
    // 0x1a14e4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1a14e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1a14e8:
    // 0x1a14e8: 0x1045fff7  beq         $v0, $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1A14E8u;
    {
        const bool branch_taken_0x1a14e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1a14e8) {
            ctx->pc = 0x1A14C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a14c8;
        }
    }
    ctx->pc = 0x1A14F0u;
    // 0x1a14f0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1a14f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1a14f4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a14f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a14f8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1A14F8u;
    {
        const bool branch_taken_0x1a14f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a14f8) {
            ctx->pc = 0x1A14FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A14F8u;
            // 0x1a14fc: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A14E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a14e8;
        }
    }
    ctx->pc = 0x1A1500u;
    // 0x1a1500: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1a1500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
label_1a1504:
    // 0x1a1504: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1504u;
        // 0x1a1508: 0x24428fc8  addiu       $v0, $v0, -0x7038 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938568));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A150Cu;
}
