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

// Function: ApMotionWorkCreate__FP7WcActorPFP11BMotionCtrlP11BMotionWorki_fii
// Address: 0x13abb8 - 0x13ac64
void ApMotionWorkCreate__FP7WcActorPFP11BMotionCtrlP11BMotionWorki_fii_0x13abb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApMotionWorkCreate__FP7WcActorPFP11BMotionCtrlP11BMotionWorki_fii_0x13abb8");
#endif

    switch (ctx->pc) {
        case 0x13abf8u: goto label_13abf8;
        case 0x13ac0cu: goto label_13ac0c;
        default: break;
    }

    ctx->pc = 0x13abb8u;

    // 0x13abb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13abb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13abbc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13abbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13abc0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13abc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13abc4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13abc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13abc8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x13abc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13abcc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13abccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x13abd0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x13abd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13abd4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x13abd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x13abd8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x13abd8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13abdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13abdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13abe0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x13abe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13abe4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x13abe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x13abe8: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x13abe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x13abec: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x13abecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13abf0: 0xc06164c  jal         func_185930
    ctx->pc = 0x13ABF0u;
    SET_GPR_U32(ctx, 31, 0x13ABF8u);
    ctx->pc = 0x13ABF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ABF0u;
    // 0x13abf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x13ABF0u, 0x13ABF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ABF8u;
label_13abf8:
    // 0x13abf8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13abf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13abfc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13abfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ac00: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x13ac00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ac04: 0xc068866  jal         func_1A2198
    ctx->pc = 0x13AC04u;
    SET_GPR_U32(ctx, 31, 0x13AC0Cu);
    ctx->pc = 0x13AC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AC04u;
    // 0x13ac08: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x13AC04u, 0x13AC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AC0Cu;
label_13ac0c:
    // 0x13ac0c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x13ac0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ac10: 0x8e630070  lw          $v1, 0x70($s3)
    ctx->pc = 0x13ac10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x13ac14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13ac14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ac18: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x13ac18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13ac1c: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x13ac1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x13ac20: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13AC20u;
    {
        const bool branch_taken_0x13ac20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x13AC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AC20u;
        // 0x13ac24: 0x24650030  addiu       $a1, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ac20) {
            ctx->pc = 0x13AC30u;
            goto label_13ac30;
        }
    }
    ctx->pc = 0x13AC28u;
    // 0x13ac28: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x13ac28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x13ac2c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x13ac2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_13ac30:
    // 0x13ac30: 0xacb40004  sw          $s4, 0x4($a1)
    ctx->pc = 0x13ac30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 20));
    // 0x13ac34: 0xac930010  sw          $s3, 0x10($a0)
    ctx->pc = 0x13ac34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 19));
    // 0x13ac38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13ac38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ac3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13ac3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13ac40: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13ac40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ac44: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13ac44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13ac48: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x13ac48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13ac4c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x13ac4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13ac50: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x13ac50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
    // 0x13ac54: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x13ac54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x13ac58: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x13ac58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x13ac5c: 0x3e00008  jr          $ra
    ctx->pc = 0x13AC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13AC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AC5Cu;
        // 0x13ac60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13AC5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13AC64u;
}
