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

// Function: InqMotionCtrl__8WcEntityi
// Address: 0x1dd368 - 0x1dd3b4
void InqMotionCtrl__8WcEntityi_0x1dd368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InqMotionCtrl__8WcEntityi_0x1dd368");
#endif

    switch (ctx->pc) {
        case 0x1dd378u: goto label_1dd378;
        default: break;
    }

    ctx->pc = 0x1dd368u;

    // 0x1dd368: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x1dd368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x1dd36c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1DD36Cu;
    {
        const bool branch_taken_0x1dd36c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD36Cu;
        // 0x1dd370: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd36c) {
            ctx->pc = 0x1DD3A0u;
            goto label_1dd3a0;
        }
    }
    ctx->pc = 0x1DD374u;
    // 0x1dd374: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dd374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1dd378:
    // 0x1dd378: 0x10450009  beq         $v0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DD378u;
    {
        const bool branch_taken_0x1dd378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1DD37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD378u;
        // 0x1dd37c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd378) {
            ctx->pc = 0x1DD3A0u;
            goto label_1dd3a0;
        }
    }
    ctx->pc = 0x1DD380u;
    // 0x1dd380: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1dd380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1dd384: 0x0  nop
    ctx->pc = 0x1dd384u;
    // NOP
    // 0x1dd388: 0x0  nop
    ctx->pc = 0x1dd388u;
    // NOP
    // 0x1dd38c: 0x0  nop
    ctx->pc = 0x1dd38cu;
    // NOP
    // 0x1dd390: 0x0  nop
    ctx->pc = 0x1dd390u;
    // NOP
    // 0x1dd394: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1DD394u;
    {
        const bool branch_taken_0x1dd394 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd394) {
            ctx->pc = 0x1DD398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD394u;
            // 0x1dd398: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd378;
        }
    }
    ctx->pc = 0x1DD39Cu;
    // 0x1dd39c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1dd39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd3a0:
    // 0x1dd3a0: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DD3A0u;
    {
        const bool branch_taken_0x1dd3a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD3A0u;
        // 0x1dd3a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd3a0) {
            ctx->pc = 0x1DD3ACu;
            goto label_1dd3ac;
        }
    }
    ctx->pc = 0x1DD3A8u;
    // 0x1dd3a8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1dd3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1dd3ac:
    // 0x1dd3ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD3ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD3ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD3B4u;
}
