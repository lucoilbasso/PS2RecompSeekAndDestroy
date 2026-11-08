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

// Function: ApUnitResetOptionSound__FP7ApcUnit
// Address: 0x14cc40 - 0x14cd18
void ApUnitResetOptionSound__FP7ApcUnit_0x14cc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApUnitResetOptionSound__FP7ApcUnit_0x14cc40");
#endif

    switch (ctx->pc) {
        case 0x14cc90u: goto label_14cc90;
        case 0x14cca8u: goto label_14cca8;
        case 0x14ccd0u: goto label_14ccd0;
        default: break;
    }

    ctx->pc = 0x14cc40u;

    // 0x14cc40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14cc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14cc44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14cc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14cc48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14cc48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cc4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14cc4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14cc50: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14cc50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x14cc54: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x14cc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x14cc58: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x14cc58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x14cc5c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x14cc5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x14cc60: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x14cc60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x14cc64: 0x8e0201c0  lw          $v0, 0x1C0($s0)
    ctx->pc = 0x14cc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x14cc68: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x14CC68u;
    {
        const bool branch_taken_0x14cc68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cc68) {
            ctx->pc = 0x14CC6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14CC68u;
            // 0x14cc6c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14CCF8u;
            goto label_14ccf8;
        }
    }
    ctx->pc = 0x14CC70u;
    // 0x14cc70: 0x920201ab  lbu         $v0, 0x1AB($s0)
    ctx->pc = 0x14cc70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 427)));
    // 0x14cc74: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x14CC74u;
    {
        const bool branch_taken_0x14cc74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CC74u;
        // 0x14cc78: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cc74) {
            ctx->pc = 0x14CCF4u;
            goto label_14ccf4;
        }
    }
    ctx->pc = 0x14CC7Cu;
    // 0x14cc7c: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x14cc7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cc80: 0x3c130025  lui         $s3, 0x25
    ctx->pc = 0x14cc80u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)37 << 16));
    // 0x14cc84: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x14cc84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14cc88: 0x8e0201c0  lw          $v0, 0x1C0($s0)
    ctx->pc = 0x14cc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x14cc8c: 0x0  nop
    ctx->pc = 0x14cc8cu;
    // NOP
label_14cc90:
    // 0x14cc90: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14CC90u;
    {
        const bool branch_taken_0x14cc90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14CC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CC90u;
        // 0x14cc94: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cc90) {
            ctx->pc = 0x14CCB0u;
            goto label_14ccb0;
        }
    }
    ctx->pc = 0x14CC98u;
    // 0x14cc98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14cc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cc9c: 0x26656bd8  addiu       $a1, $s3, 0x6BD8
    ctx->pc = 0x14cc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 27608));
    // 0x14cca0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14CCA0u;
    SET_GPR_U32(ctx, 31, 0x14CCA8u);
    ctx->pc = 0x14CCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CCA0u;
    // 0x14cca4: 0x24060041  addiu       $a2, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14CCA0u, 0x14CCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CCA8u;
label_14cca8:
    // 0x14cca8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x14CCA8u;
    {
        const bool branch_taken_0x14cca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CCA8u;
        // 0x14ccac: 0x8e8201c0  lw          $v0, 0x1C0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cca8) {
            ctx->pc = 0x14CCD4u;
            goto label_14ccd4;
        }
    }
    ctx->pc = 0x14CCB0u;
label_14ccb0:
    // 0x14ccb0: 0x920201ab  lbu         $v0, 0x1AB($s0)
    ctx->pc = 0x14ccb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 427)));
    // 0x14ccb4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x14ccb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14ccb8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x14CCB8u;
    {
        const bool branch_taken_0x14ccb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ccb8) {
            ctx->pc = 0x14CCBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14CCB8u;
            // 0x14ccbc: 0x8e8201c0  lw          $v0, 0x1C0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 448)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14CCD4u;
            goto label_14ccd4;
        }
    }
    ctx->pc = 0x14CCC0u;
    // 0x14ccc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ccc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ccc4: 0x26656bd8  addiu       $a1, $s3, 0x6BD8
    ctx->pc = 0x14ccc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 27608));
    // 0x14ccc8: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14CCC8u;
    SET_GPR_U32(ctx, 31, 0x14CCD0u);
    ctx->pc = 0x14CCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CCC8u;
    // 0x14cccc: 0x2406003b  addiu       $a2, $zero, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14CCC8u, 0x14CCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CCD0u;
label_14ccd0:
    // 0x14ccd0: 0x8e8201c0  lw          $v0, 0x1C0($s4)
    ctx->pc = 0x14ccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 448)));
label_14ccd4:
    // 0x14ccd4: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x14ccd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x14ccd8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x14ccd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x14ccdc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14ccdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14cce0: 0xac550004  sw          $s5, 0x4($v0)
    ctx->pc = 0x14cce0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 21));
    // 0x14cce4: 0x920301ab  lbu         $v1, 0x1AB($s0)
    ctx->pc = 0x14cce4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 427)));
    // 0x14cce8: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x14cce8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14ccec: 0x5460ffe8  bnel        $v1, $zero, . + 4 + (-0x18 << 2)
    ctx->pc = 0x14CCECu;
    {
        const bool branch_taken_0x14ccec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ccec) {
            ctx->pc = 0x14CCF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14CCECu;
            // 0x14ccf0: 0x8e0201c0  lw          $v0, 0x1C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14CC90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14cc90;
        }
    }
    ctx->pc = 0x14CCF4u;
label_14ccf4:
    // 0x14ccf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14ccf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14ccf8:
    // 0x14ccf8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14ccf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14ccfc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14ccfcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14cd00: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x14cd00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14cd04: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x14cd04u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14cd08: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x14cd08u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cd0c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x14cd0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14cd10: 0x3e00008  jr          $ra
    ctx->pc = 0x14CD10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CD10u;
        // 0x14cd14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CD10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14CD18u;
}
