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

// Function: SearchCoordHitPoint__7WcActorP9FVector32
// Address: 0x19a848 - 0x19a888
void SearchCoordHitPoint__7WcActorP9FVector32_0x19a848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchCoordHitPoint__7WcActorP9FVector32_0x19a848");
#endif

    switch (ctx->pc) {
        case 0x19a858u: goto label_19a858;
        default: break;
    }

    ctx->pc = 0x19a848u;

    // 0x19a848: 0x8c840104  lw          $a0, 0x104($a0)
    ctx->pc = 0x19a848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x19a84c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x19A84Cu;
    {
        const bool branch_taken_0x19a84c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A84Cu;
        // 0x19a850: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a84c) {
            ctx->pc = 0x19A880u;
            goto label_19a880;
        }
    }
    ctx->pc = 0x19A854u;
    // 0x19a854: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x19a854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19a858:
    // 0x19a858: 0x10650009  beq         $v1, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x19A858u;
    {
        const bool branch_taken_0x19a858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x19A85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A858u;
        // 0x19a85c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a858) {
            ctx->pc = 0x19A880u;
            goto label_19a880;
        }
    }
    ctx->pc = 0x19A860u;
    // 0x19a860: 0x8c840018  lw          $a0, 0x18($a0)
    ctx->pc = 0x19a860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x19a864: 0x0  nop
    ctx->pc = 0x19a864u;
    // NOP
    // 0x19a868: 0x0  nop
    ctx->pc = 0x19a868u;
    // NOP
    // 0x19a86c: 0x0  nop
    ctx->pc = 0x19a86cu;
    // NOP
    // 0x19a870: 0x0  nop
    ctx->pc = 0x19a870u;
    // NOP
    // 0x19a874: 0x5480fff8  bnel        $a0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x19A874u;
    {
        const bool branch_taken_0x19a874 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a874) {
            ctx->pc = 0x19A878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A874u;
            // 0x19a878: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19a858;
        }
    }
    ctx->pc = 0x19A87Cu;
    // 0x19a87c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19a87cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19a880:
    // 0x19a880: 0x3e00008  jr          $ra
    ctx->pc = 0x19A880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A888u;
}
