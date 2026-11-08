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

// Function: _getpic
// Address: 0x1bdbe8 - 0x1bdd58
void _getpic_0x1bdbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_getpic_0x1bdbe8");
#endif

    switch (ctx->pc) {
        case 0x1bdc30u: goto label_1bdc30;
        case 0x1bdc40u: goto label_1bdc40;
        case 0x1bdc48u: goto label_1bdc48;
        case 0x1bdc50u: goto label_1bdc50;
        case 0x1bdca0u: goto label_1bdca0;
        case 0x1bdcc8u: goto label_1bdcc8;
        case 0x1bdcecu: goto label_1bdcec;
        case 0x1bdd10u: goto label_1bdd10;
        default: break;
    }

    ctx->pc = 0x1bdbe8u;

    // 0x1bdbe8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1bdbe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1bdbec: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1bdbecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1bdbf0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1bdbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1bdbf4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1bdbf4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bdbf8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1bdbf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1bdbfc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1bdbfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdc00: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1bdc00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1bdc04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bdc04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdc08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bdc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bdc0c: 0x8e300040  lw          $s0, 0x40($s1)
    ctx->pc = 0x1bdc0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1bdc10: 0x8e0600d8  lw          $a2, 0xD8($s0)
    ctx->pc = 0x1bdc10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x1bdc14: 0x30c2003f  andi        $v0, $a2, 0x3F
    ctx->pc = 0x1bdc14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x1bdc18: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BDC18u;
    {
        const bool branch_taken_0x1bdc18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDC18u;
        // 0x1bdc1c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdc18) {
            ctx->pc = 0x1BDC38u;
            goto label_1bdc38;
        }
    }
    ctx->pc = 0x1BDC20u;
    // 0x1bdc20: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1bdc20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1bdc24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bdc24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdc28: 0xc06f892  jal         func_1BE248
    ctx->pc = 0x1BDC28u;
    SET_GPR_U32(ctx, 31, 0x1BDC30u);
    ctx->pc = 0x1BDC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDC28u;
    // 0x1bdc2c: 0x24a5b2a8  addiu       $a1, $a1, -0x4D58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE248u, 0x1BDC28u, 0x1BDC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDC30u;
label_1bdc30:
    // 0x1bdc30: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x1BDC30u;
    {
        const bool branch_taken_0x1bdc30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDC30u;
        // 0x1bdc34: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdc30) {
            ctx->pc = 0x1BDD3Cu;
            goto label_1bdd3c;
        }
    }
    ctx->pc = 0x1BDC38u;
label_1bdc38:
    // 0x1bdc38: 0xae000820  sw          $zero, 0x820($s0)
    ctx->pc = 0x1bdc38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2080), GPR_U32(ctx, 0));
    // 0x1bdc3c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1bdc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1bdc40:
    // 0x1bdc40: 0x1242000d  beq         $s2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1BDC40u;
    {
        const bool branch_taken_0x1bdc40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BDC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDC40u;
        // 0x1bdc44: 0x2e620005  sltiu       $v0, $s3, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdc40) {
            ctx->pc = 0x1BDC78u;
            goto label_1bdc78;
        }
    }
    ctx->pc = 0x1BDC48u;
label_1bdc48:
    // 0x1bdc48: 0xc070884  jal         func_1C2210
    ctx->pc = 0x1BDC48u;
    SET_GPR_U32(ctx, 31, 0x1BDC50u);
    ctx->pc = 0x1BDC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDC48u;
    // 0x1bdc4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2210u, 0x1BDC48u, 0x1BDC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDC50u;
label_1bdc50:
    // 0x1bdc50: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1bdc50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdc54: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BDC54u;
    {
        const bool branch_taken_0x1bdc54 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDC54u;
        // 0x1bdc58: 0x2e620005  sltiu       $v0, $s3, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdc54) {
            ctx->pc = 0x1BDC78u;
            goto label_1bdc78;
        }
    }
    ctx->pc = 0x1BDC5Cu;
    // 0x1bdc5c: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1bdc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1bdc60: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x1bdc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x1bdc64: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BDC64u;
    {
        const bool branch_taken_0x1bdc64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BDC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDC64u;
        // 0x1bdc68: 0x2e620005  sltiu       $v0, $s3, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdc64) {
            ctx->pc = 0x1BDC78u;
            goto label_1bdc78;
        }
    }
    ctx->pc = 0x1BDC6Cu;
    // 0x1bdc6c: 0x8e020848  lw          $v0, 0x848($s0)
    ctx->pc = 0x1bdc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
    // 0x1bdc70: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1BDC70u;
    {
        const bool branch_taken_0x1bdc70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDC70u;
        // 0x1bdc74: 0x2e620005  sltiu       $v0, $s3, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdc70) {
            ctx->pc = 0x1BDC48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bdc48;
        }
    }
    ctx->pc = 0x1BDC78u;
label_1bdc78:
    // 0x1bdc78: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1BDC78u;
    {
        const bool branch_taken_0x1bdc78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDC78u;
        // 0x1bdc7c: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdc78) {
            ctx->pc = 0x1BDD20u;
            goto label_1bdd20;
        }
    }
    ctx->pc = 0x1BDC80u;
    // 0x1bdc80: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1bdc80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1bdc84: 0x2442b2f0  addiu       $v0, $v0, -0x4D10
    ctx->pc = 0x1bdc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947568));
    // 0x1bdc88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bdc88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bdc8c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1bdc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bdc90: 0x800008  jr          $a0
    ctx->pc = 0x1BDC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BDC98u: goto label_1bdc98;
            case 0x1BDCACu: goto label_1bdcac;
            case 0x1BDCDCu: goto label_1bdcdc;
            case 0x1BDD00u: goto label_1bdd00;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDC90u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1BDC98u;
label_1bdc98:
    // 0x1bdc98: 0xc06f806  jal         func_1BE018
    ctx->pc = 0x1BDC98u;
    SET_GPR_U32(ctx, 31, 0x1BDCA0u);
    ctx->pc = 0x1BDC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDC98u;
    // 0x1bdc9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE018u, 0x1BDC98u, 0x1BDCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDCA0u;
label_1bdca0:
    // 0x1bdca0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bdca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bdca4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1BDCA4u;
    {
        const bool branch_taken_0x1bdca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDCA4u;
        // 0x1bdca8: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdca4) {
            ctx->pc = 0x1BDD20u;
            goto label_1bdd20;
        }
    }
    ctx->pc = 0x1BDCACu;
label_1bdcac:
    // 0x1bdcac: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x1bdcacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x1bdcb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bdcb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdcb4: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x1bdcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x1bdcb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bdcb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdcbc: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x1bdcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x1bdcc0: 0xc06f79c  jal         func_1BDE70
    ctx->pc = 0x1BDCC0u;
    SET_GPR_U32(ctx, 31, 0x1BDCC8u);
    ctx->pc = 0x1BDCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDCC0u;
    // 0x1bdcc4: 0x8e060094  lw          $a2, 0x94($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDE70u, 0x1BDCC0u, 0x1BDCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDCC8u;
label_1bdcc8:
    // 0x1bdcc8: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x1bdcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x1bdccc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1bdcccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdcd0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1bdcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1bdcd4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1BDCD4u;
    {
        const bool branch_taken_0x1bdcd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDCD4u;
        // 0x1bdcd8: 0xae0300a0  sw          $v1, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdcd4) {
            ctx->pc = 0x1BDD20u;
            goto label_1bdd20;
        }
    }
    ctx->pc = 0x1BDCDCu;
label_1bdcdc:
    // 0x1bdcdc: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x1bdcdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x1bdce0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bdce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdce4: 0xc06f79c  jal         func_1BDE70
    ctx->pc = 0x1BDCE4u;
    SET_GPR_U32(ctx, 31, 0x1BDCECu);
    ctx->pc = 0x1BDCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDCE4u;
    // 0x1bdce8: 0x8e060098  lw          $a2, 0x98($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDE70u, 0x1BDCE4u, 0x1BDCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDCECu;
label_1bdcec:
    // 0x1bdcec: 0x8e0300a4  lw          $v1, 0xA4($s0)
    ctx->pc = 0x1bdcecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x1bdcf0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1bdcf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdcf4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1bdcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1bdcf8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1BDCF8u;
    {
        const bool branch_taken_0x1bdcf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDCF8u;
        // 0x1bdcfc: 0xae0300a4  sw          $v1, 0xA4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdcf8) {
            ctx->pc = 0x1BDD20u;
            goto label_1bdd20;
        }
    }
    ctx->pc = 0x1BDD00u;
label_1bdd00:
    // 0x1bdd00: 0x8e0500a8  lw          $a1, 0xA8($s0)
    ctx->pc = 0x1bdd00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x1bdd04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bdd04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdd08: 0xc06f79c  jal         func_1BDE70
    ctx->pc = 0x1BDD08u;
    SET_GPR_U32(ctx, 31, 0x1BDD10u);
    ctx->pc = 0x1BDD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDD08u;
    // 0x1bdd0c: 0x8e06009c  lw          $a2, 0x9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDE70u, 0x1BDD08u, 0x1BDD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDD10u;
label_1bdd10:
    // 0x1bdd10: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x1bdd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x1bdd14: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1bdd14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdd18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1bdd18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1bdd1c: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x1bdd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
label_1bdd20:
    // 0x1bdd20: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x1bdd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x1bdd24: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BDD24u;
    {
        const bool branch_taken_0x1bdd24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDD24u;
        // 0x1bdd28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdd24) {
            ctx->pc = 0x1BDD3Cu;
            goto label_1bdd3c;
        }
    }
    ctx->pc = 0x1BDD2Cu;
    // 0x1bdd2c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bdd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bdd30: 0x1040ffc3  beqz        $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x1BDD30u;
    {
        const bool branch_taken_0x1bdd30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDD30u;
        // 0x1bdd34: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdd30) {
            ctx->pc = 0x1BDC40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bdc40;
        }
    }
    ctx->pc = 0x1BDD38u;
    // 0x1bdd38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bdd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bdd3c:
    // 0x1bdd3c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1bdd3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bdd40: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1bdd40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bdd44: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1bdd44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bdd48: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1bdd48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bdd4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bdd4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bdd50: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDD50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDD50u;
        // 0x1bdd54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDD50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BDD58u;
}
