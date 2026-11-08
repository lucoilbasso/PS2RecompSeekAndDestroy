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

// Function: ApMotionLookActorOffset__FP7WcActorP9FVector32b
// Address: 0x13ac68 - 0x13acf8
void ApMotionLookActorOffset__FP7WcActorP9FVector32b_0x13ac68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApMotionLookActorOffset__FP7WcActorP9FVector32b_0x13ac68");
#endif

    switch (ctx->pc) {
        case 0x13ac9cu: goto label_13ac9c;
        default: break;
    }

    ctx->pc = 0x13ac68u;

    // 0x13ac68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13ac68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13ac6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13ac6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13ac70: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13ac70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ac74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13ac74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13ac78: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x13ac78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ac7c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13ac7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13ac80: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x13ac80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x13ac84: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13ac84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13ac88: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x13ac88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x13ac8c: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x13ac8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x13ac90: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x13ac90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13ac94: 0xc061a46  jal         func_186918
    ctx->pc = 0x13AC94u;
    SET_GPR_U32(ctx, 31, 0x13AC9Cu);
    ctx->pc = 0x13AC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AC94u;
    // 0x13ac98: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x13AC94u, 0x13AC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AC9Cu;
label_13ac9c:
    // 0x13ac9c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x13ac9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aca0: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x13aca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x13aca4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13ACA4u;
    {
        const bool branch_taken_0x13aca4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13ACA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ACA4u;
        // 0x13aca8: 0x2444a0b0  addiu       $a0, $v0, -0x5F50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aca4) {
            ctx->pc = 0x13ACB8u;
            goto label_13acb8;
        }
    }
    ctx->pc = 0x13ACACu;
    // 0x13acac: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x13acacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x13acb0: 0x10440002  beq         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13ACB0u;
    {
        const bool branch_taken_0x13acb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x13acb0) {
            ctx->pc = 0x13ACBCu;
            goto label_13acbc;
        }
    }
    ctx->pc = 0x13ACB8u;
label_13acb8:
    // 0x13acb8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x13acb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13acbc:
    // 0x13acbc: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x13ACBCu;
    {
        const bool branch_taken_0x13acbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13acbc) {
            ctx->pc = 0x13ACC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13ACBCu;
            // 0x13acc0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13ACE8u;
            goto label_13ace8;
        }
    }
    ctx->pc = 0x13ACC4u;
    // 0x13acc4: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x13acc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x13acc8: 0x24a30030  addiu       $v1, $a1, 0x30
    ctx->pc = 0x13acc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x13accc: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x13acccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13acd0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x13acd0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x13acd4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13acd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13acd8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x13acd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13acdc: 0x91100a  movz        $v0, $a0, $s1
    ctx->pc = 0x13acdcu;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x13ace0: 0xaca20024  sw          $v0, 0x24($a1)
    ctx->pc = 0x13ace0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
    // 0x13ace4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13ace4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13ace8:
    // 0x13ace8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13ace8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13acec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13acecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13acf0: 0x3e00008  jr          $ra
    ctx->pc = 0x13ACF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13ACF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ACF0u;
        // 0x13acf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13ACF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13ACF8u;
}
