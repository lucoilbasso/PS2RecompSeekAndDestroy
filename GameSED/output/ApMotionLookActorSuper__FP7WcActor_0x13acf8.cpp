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

// Function: ApMotionLookActorSuper__FP7WcActor
// Address: 0x13acf8 - 0x13ad58
void ApMotionLookActorSuper__FP7WcActor_0x13acf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApMotionLookActorSuper__FP7WcActor_0x13acf8");
#endif

    switch (ctx->pc) {
        case 0x13ad1cu: goto label_13ad1c;
        default: break;
    }

    ctx->pc = 0x13acf8u;

    // 0x13acf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13acf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13acfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13acfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13ad00: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x13ad00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x13ad04: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13ad04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13ad08: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x13ad08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x13ad0c: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x13ad0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x13ad10: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x13ad10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13ad14: 0xc061a46  jal         func_186918
    ctx->pc = 0x13AD14u;
    SET_GPR_U32(ctx, 31, 0x13AD1Cu);
    ctx->pc = 0x13AD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AD14u;
    // 0x13ad18: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x13AD14u, 0x13AD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AD1Cu;
label_13ad1c:
    // 0x13ad1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13ad1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ad20: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13AD20u;
    {
        const bool branch_taken_0x13ad20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AD20u;
        // 0x13ad24: 0x3c020014  lui         $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ad20) {
            ctx->pc = 0x13AD38u;
            goto label_13ad38;
        }
    }
    ctx->pc = 0x13AD28u;
    // 0x13ad28: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x13ad28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x13ad2c: 0x2442a0b0  addiu       $v0, $v0, -0x5F50
    ctx->pc = 0x13ad2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942896));
    // 0x13ad30: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13AD30u;
    {
        const bool branch_taken_0x13ad30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13ad30) {
            ctx->pc = 0x13AD3Cu;
            goto label_13ad3c;
        }
    }
    ctx->pc = 0x13AD38u;
label_13ad38:
    // 0x13ad38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13ad38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13ad3c:
    // 0x13ad3c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13AD3Cu;
    {
        const bool branch_taken_0x13ad3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AD3Cu;
        // 0x13ad40: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ad3c) {
            ctx->pc = 0x13AD4Cu;
            goto label_13ad4c;
        }
    }
    ctx->pc = 0x13AD44u;
    // 0x13ad44: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x13ad44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x13ad48: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x13ad48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
label_13ad4c:
    // 0x13ad4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13ad4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ad50: 0x3e00008  jr          $ra
    ctx->pc = 0x13AD50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13AD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AD50u;
        // 0x13ad54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13AD50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13AD58u;
}
