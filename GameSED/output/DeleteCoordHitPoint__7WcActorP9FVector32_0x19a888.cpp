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

// Function: DeleteCoordHitPoint__7WcActorP9FVector32
// Address: 0x19a888 - 0x19a8e8
void DeleteCoordHitPoint__7WcActorP9FVector32_0x19a888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeleteCoordHitPoint__7WcActorP9FVector32_0x19a888");
#endif

    switch (ctx->pc) {
        case 0x19a8a8u: goto label_19a8a8;
        case 0x19a8c4u: goto label_19a8c4;
        default: break;
    }

    ctx->pc = 0x19a888u;

    // 0x19a888: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19a888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19a88c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x19a88cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a890: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19a890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19a894: 0x24c30104  addiu       $v1, $a2, 0x104
    ctx->pc = 0x19a894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 260));
    // 0x19a898: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19a898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19a89c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x19A89Cu;
    {
        const bool branch_taken_0x19a89c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A89Cu;
        // 0x19a8a0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a89c) {
            ctx->pc = 0x19A8E0u;
            goto label_19a8e0;
        }
    }
    ctx->pc = 0x19A8A4u;
    // 0x19a8a4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x19a8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19a8a8:
    // 0x19a8a8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19a8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19a8ac: 0x54450008  bnel        $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x19A8ACu;
    {
        const bool branch_taken_0x19a8ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x19a8ac) {
            ctx->pc = 0x19A8B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A8ACu;
            // 0x19a8b0: 0x24830018  addiu       $v1, $a0, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A8D0u;
            goto label_19a8d0;
        }
    }
    ctx->pc = 0x19A8B4u;
    // 0x19a8b4: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x19a8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x19a8b8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x19a8b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a8bc: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x19A8BCu;
    SET_GPR_U32(ctx, 31, 0x19A8C4u);
    ctx->pc = 0x19A8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A8BCu;
    // 0x19a8c0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x19A8BCu, 0x19A8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A8C4u;
label_19a8c4:
    // 0x19a8c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19A8C4u;
    {
        const bool branch_taken_0x19a8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A8C4u;
        // 0x19a8c8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a8c4) {
            ctx->pc = 0x19A8E0u;
            goto label_19a8e0;
        }
    }
    ctx->pc = 0x19A8CCu;
    // 0x19a8cc: 0x0  nop
    ctx->pc = 0x19a8ccu;
    // NOP
label_19a8d0:
    // 0x19a8d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19a8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19a8d4: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x19A8D4u;
    {
        const bool branch_taken_0x19a8d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a8d4) {
            ctx->pc = 0x19A8D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A8D4u;
            // 0x19a8d8: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A8A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19a8a8;
        }
    }
    ctx->pc = 0x19A8DCu;
    // 0x19a8dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19a8dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19a8e0:
    // 0x19a8e0: 0x3e00008  jr          $ra
    ctx->pc = 0x19A8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A8E0u;
        // 0x19a8e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A8E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A8E8u;
}
