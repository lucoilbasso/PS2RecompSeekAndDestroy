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

// Function: ApUnitSetOptionSound__FP7ApcUniti
// Address: 0x14abb0 - 0x14aca8
void ApUnitSetOptionSound__FP7ApcUniti_0x14abb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApUnitSetOptionSound__FP7ApcUniti_0x14abb0");
#endif

    switch (ctx->pc) {
        case 0x14abe0u: goto label_14abe0;
        case 0x14ac10u: goto label_14ac10;
        case 0x14ac2cu: goto label_14ac2c;
        case 0x14ac3cu: goto label_14ac3c;
        case 0x14ac58u: goto label_14ac58;
        case 0x14ac64u: goto label_14ac64;
        default: break;
    }

    ctx->pc = 0x14abb0u;

    // 0x14abb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14abb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14abb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14abb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14abb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14abb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14abbc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14abbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14abc0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14abc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x14abc4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x14abc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x14abc8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14abc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14abcc: 0x8e0401c0  lw          $a0, 0x1C0($s0)
    ctx->pc = 0x14abccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x14abd0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14ABD0u;
    {
        const bool branch_taken_0x14abd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ABD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ABD0u;
        // 0x14abd4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14abd0) {
            ctx->pc = 0x14ABE0u;
            goto label_14abe0;
        }
    }
    ctx->pc = 0x14ABD8u;
    // 0x14abd8: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x14ABD8u;
    SET_GPR_U32(ctx, 31, 0x14ABE0u);
    ctx->pc = 0x14ABDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ABD8u;
    // 0x14abdc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x14ABD8u, 0x14ABE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ABE0u;
label_14abe0:
    // 0x14abe0: 0xae0001c0  sw          $zero, 0x1C0($s0)
    ctx->pc = 0x14abe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 0));
    // 0x14abe4: 0x1a200015  blez        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x14ABE4u;
    {
        const bool branch_taken_0x14abe4 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x14ABE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ABE4u;
        // 0x14abe8: 0xa21101ab  sb          $s1, 0x1AB($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 427), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14abe4) {
            ctx->pc = 0x14AC3Cu;
            goto label_14ac3c;
        }
    }
    ctx->pc = 0x14ABECu;
    // 0x14abec: 0x119140  sll         $s2, $s1, 5
    ctx->pc = 0x14abecu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x14abf0: 0x261101c0  addiu       $s1, $s0, 0x1C0
    ctx->pc = 0x14abf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    // 0x14abf4: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x14abf4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14abf8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14abf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14abfc: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14ABFCu;
    {
        const bool branch_taken_0x14abfc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ABFCu;
        // 0x14ac00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14abfc) {
            ctx->pc = 0x14AC08u;
            goto label_14ac08;
        }
    }
    ctx->pc = 0x14AC04u;
    // 0x14ac04: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x14ac04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_14ac08:
    // 0x14ac08: 0xc068086  jal         func_1A0218
    ctx->pc = 0x14AC08u;
    SET_GPR_U32(ctx, 31, 0x14AC10u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x14AC08u, 0x14AC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AC10u;
label_14ac10:
    // 0x14ac10: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14AC10u;
    {
        const bool branch_taken_0x14ac10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14AC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AC10u;
        // 0x14ac14: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ac10) {
            ctx->pc = 0x14AC2Cu;
            goto label_14ac2c;
        }
    }
    ctx->pc = 0x14AC18u;
    // 0x14ac18: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x14ac18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x14ac1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14ac1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac20: 0x24a56b90  addiu       $a1, $a1, 0x6B90
    ctx->pc = 0x14ac20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27536));
    // 0x14ac24: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14AC24u;
    SET_GPR_U32(ctx, 31, 0x14AC2Cu);
    ctx->pc = 0x14AC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AC24u;
    // 0x14ac28: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14AC24u, 0x14AC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AC2Cu;
label_14ac2c:
    // 0x14ac2c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x14ac2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14ac30: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14ac30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac34: 0xc067294  jal         func_19CA50
    ctx->pc = 0x14AC34u;
    SET_GPR_U32(ctx, 31, 0x14AC3Cu);
    ctx->pc = 0x14AC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AC34u;
    // 0x14ac38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CA50u, 0x14AC34u, 0x14AC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AC3Cu;
label_14ac3c:
    // 0x14ac3c: 0x920201ab  lbu         $v0, 0x1AB($s0)
    ctx->pc = 0x14ac3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 427)));
    // 0x14ac40: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x14AC40u;
    {
        const bool branch_taken_0x14ac40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AC40u;
        // 0x14ac44: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ac40) {
            ctx->pc = 0x14AC8Cu;
            goto label_14ac8c;
        }
    }
    ctx->pc = 0x14AC48u;
    // 0x14ac48: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x14ac48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14ac4c: 0x34128000  ori         $s2, $zero, 0x8000
    ctx->pc = 0x14ac4cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x14ac50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14ac50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac54: 0x0  nop
    ctx->pc = 0x14ac54u;
    // NOP
label_14ac58:
    // 0x14ac58: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x14ac58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x14ac5c: 0xc0532f2  jal         func_14CBC8
    ctx->pc = 0x14AC5Cu;
    SET_GPR_U32(ctx, 31, 0x14AC64u);
    ctx->pc = 0x14AC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AC5Cu;
    // 0x14ac60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CBC8u, 0x14AC5Cu, 0x14AC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AC64u;
label_14ac64:
    // 0x14ac64: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x14ac64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x14ac68: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x14ac68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x14ac6c: 0xac530004  sw          $s3, 0x4($v0)
    ctx->pc = 0x14ac6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
    // 0x14ac70: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x14ac70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
    // 0x14ac74: 0xac52000c  sw          $s2, 0xC($v0)
    ctx->pc = 0x14ac74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 18));
    // 0x14ac78: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x14ac78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x14ac7c: 0x920201ab  lbu         $v0, 0x1AB($s0)
    ctx->pc = 0x14ac7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 427)));
    // 0x14ac80: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x14ac80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14ac84: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x14AC84u;
    {
        const bool branch_taken_0x14ac84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14AC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AC84u;
        // 0x14ac88: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ac84) {
            ctx->pc = 0x14AC58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14ac58;
        }
    }
    ctx->pc = 0x14AC8Cu;
label_14ac8c:
    // 0x14ac8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14ac8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ac90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14ac90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14ac94: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14ac94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ac98: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x14ac98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14ac9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14ac9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14aca0: 0x3e00008  jr          $ra
    ctx->pc = 0x14ACA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14ACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ACA0u;
        // 0x14aca4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14ACA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14ACA8u;
}
