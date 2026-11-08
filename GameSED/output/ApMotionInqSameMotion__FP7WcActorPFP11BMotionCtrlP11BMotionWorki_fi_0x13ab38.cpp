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

// Function: ApMotionInqSameMotion__FP7WcActorPFP11BMotionCtrlP11BMotionWorki_fi
// Address: 0x13ab38 - 0x13abb8
void ApMotionInqSameMotion__FP7WcActorPFP11BMotionCtrlP11BMotionWorki_fi_0x13ab38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApMotionInqSameMotion__FP7WcActorPFP11BMotionCtrlP11BMotionWorki_fi_0x13ab38");
#endif

    switch (ctx->pc) {
        case 0x13ab70u: goto label_13ab70;
        default: break;
    }

    ctx->pc = 0x13ab38u;

    // 0x13ab38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13ab38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13ab3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13ab3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13ab40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13ab40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13ab44: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x13ab44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ab48: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13ab48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13ab4c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x13ab4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ab50: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x13ab50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x13ab54: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x13ab54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x13ab58: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13ab58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13ab5c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x13ab5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x13ab60: 0x24900030  addiu       $s0, $a0, 0x30
    ctx->pc = 0x13ab60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x13ab64: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x13ab64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13ab68: 0xc061a46  jal         func_186918
    ctx->pc = 0x13AB68u;
    SET_GPR_U32(ctx, 31, 0x13AB70u);
    ctx->pc = 0x13AB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AB68u;
    // 0x13ab6c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x13AB68u, 0x13AB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AB70u;
label_13ab70:
    // 0x13ab70: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x13ab70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ab74: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x13AB74u;
    {
        const bool branch_taken_0x13ab74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ab74) {
            ctx->pc = 0x13AB78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13AB74u;
            // 0x13ab78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13ABA0u;
            goto label_13aba0;
        }
    }
    ctx->pc = 0x13AB7Cu;
    // 0x13ab7c: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x13ab7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x13ab80: 0x54720007  bnel        $v1, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x13AB80u;
    {
        const bool branch_taken_0x13ab80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x13ab80) {
            ctx->pc = 0x13AB84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13AB80u;
            // 0x13ab84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13ABA0u;
            goto label_13aba0;
        }
    }
    ctx->pc = 0x13AB88u;
    // 0x13ab88: 0x52200006  beql        $s1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x13AB88u;
    {
        const bool branch_taken_0x13ab88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ab88) {
            ctx->pc = 0x13AB8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13AB88u;
            // 0x13ab8c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13ABA4u;
            goto label_13aba4;
        }
    }
    ctx->pc = 0x13AB90u;
    // 0x13ab90: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x13ab90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13ab94: 0x10710003  beq         $v1, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13AB94u;
    {
        const bool branch_taken_0x13ab94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x13AB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AB94u;
        // 0x13ab98: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ab94) {
            ctx->pc = 0x13ABA4u;
            goto label_13aba4;
        }
    }
    ctx->pc = 0x13AB9Cu;
    // 0x13ab9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13ab9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13aba0:
    // 0x13aba0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13aba0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13aba4:
    // 0x13aba4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13aba4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13aba8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13aba8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13abac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x13abacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13abb0: 0x3e00008  jr          $ra
    ctx->pc = 0x13ABB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13ABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ABB0u;
        // 0x13abb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13ABB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13ABB8u;
}
