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

// Function: Cmd_UNIT_LIFE_Entry__FP15BsSCDEntControl
// Address: 0x14aea0 - 0x14b03c
void Cmd_UNIT_LIFE_Entry__FP15BsSCDEntControl_0x14aea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_UNIT_LIFE_Entry__FP15BsSCDEntControl_0x14aea0");
#endif

    switch (ctx->pc) {
        case 0x14aef0u: goto label_14aef0;
        case 0x14aefcu: goto label_14aefc;
        case 0x14af08u: goto label_14af08;
        case 0x14af14u: goto label_14af14;
        case 0x14af84u: goto label_14af84;
        case 0x14af8cu: goto label_14af8c;
        case 0x14af94u: goto label_14af94;
        case 0x14afa8u: goto label_14afa8;
        case 0x14afd8u: goto label_14afd8;
        default: break;
    }

    ctx->pc = 0x14aea0u;

    // 0x14aea0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14aea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14aea4: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x14aea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x14aea8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14aea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x14aeac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14aeacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aeb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14aeb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14aeb4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x14aeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14aeb8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14aeb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14aebc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x14aebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x14aec0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x14aec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x14aec4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x14aec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x14aec8: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x14aec8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x14aecc: 0x8e460010  lw          $a2, 0x10($s2)
    ctx->pc = 0x14aeccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x14aed0: 0x8c730040  lw          $s3, 0x40($v1)
    ctx->pc = 0x14aed0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x14aed4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x14aed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14aed8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x14aed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x14aedc: 0x38420118  xori        $v0, $v0, 0x118
    ctx->pc = 0x14aedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)280);
    // 0x14aee0: 0x14c50023  bne         $a2, $a1, . + 4 + (0x23 << 2)
    ctx->pc = 0x14AEE0u;
    {
        const bool branch_taken_0x14aee0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x14AEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AEE0u;
        // 0x14aee4: 0x2980b  movn        $s3, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aee0) {
            ctx->pc = 0x14AF70u;
            goto label_14af70;
        }
    }
    ctx->pc = 0x14AEE8u;
    // 0x14aee8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x14AEE8u;
    SET_GPR_U32(ctx, 31, 0x14AEF0u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x14AEE8u, 0x14AEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AEF0u;
label_14aef0:
    // 0x14aef0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14aef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aef4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x14AEF4u;
    SET_GPR_U32(ctx, 31, 0x14AEFCu);
    ctx->pc = 0x14AEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AEF4u;
    // 0x14aef8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x14AEF4u, 0x14AEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AEFCu;
label_14aefc:
    // 0x14aefc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14aefcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14af00: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x14AF00u;
    SET_GPR_U32(ctx, 31, 0x14AF08u);
    ctx->pc = 0x14AF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AF00u;
    // 0x14af04: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x14AF00u, 0x14AF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AF08u;
label_14af08:
    // 0x14af08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14af08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14af0c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x14AF0Cu;
    SET_GPR_U32(ctx, 31, 0x14AF14u);
    ctx->pc = 0x14AF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AF0Cu;
    // 0x14af10: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x14AF0Cu, 0x14AF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AF14u;
label_14af14:
    // 0x14af14: 0x26630188  addiu       $v1, $s3, 0x188
    ctx->pc = 0x14af14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 392));
    // 0x14af18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14af18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14af1c: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x14af1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
    // 0x14af20: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x14af20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x14af24: 0xac710004  sw          $s1, 0x4($v1)
    ctx->pc = 0x14af24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
    // 0x14af28: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x14AF28u;
    {
        const bool branch_taken_0x14af28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AF28u;
        // 0x14af2c: 0xac60000c  sw          $zero, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14af28) {
            ctx->pc = 0x14AF50u;
            goto label_14af50;
        }
    }
    ctx->pc = 0x14AF30u;
    // 0x14af30: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x14af30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x14af34: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x14AF34u;
    {
        const bool branch_taken_0x14af34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x14af34) {
            ctx->pc = 0x14AF38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14AF34u;
            // 0x14af38: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14AF3Cu;
            goto label_14af3c;
        }
    }
    ctx->pc = 0x14AF3Cu;
label_14af3c:
    // 0x14af3c: 0x51001a  div         $zero, $v0, $s1
    ctx->pc = 0x14af3cu;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x14af40: 0x1012  mflo        $v0
    ctx->pc = 0x14af40u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x14af44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14AF44u;
    {
        const bool branch_taken_0x14af44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AF44u;
        // 0x14af48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14af44) {
            ctx->pc = 0x14AF54u;
            goto label_14af54;
        }
    }
    ctx->pc = 0x14AF4Cu;
    // 0x14af4c: 0x0  nop
    ctx->pc = 0x14af4cu;
    // NOP
label_14af50:
    // 0x14af50: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14af50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14af54:
    // 0x14af54: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x14af54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x14af58: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x14af58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x14af5c: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x14af5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x14af60: 0xae74024c  sw          $s4, 0x24C($s3)
    ctx->pc = 0x14af60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 588), GPR_U32(ctx, 20));
    // 0x14af64: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x14AF64u;
    {
        const bool branch_taken_0x14af64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AF64u;
        // 0x14af68: 0xae650194  sw          $a1, 0x194($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 404), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14af64) {
            ctx->pc = 0x14B01Cu;
            goto label_14b01c;
        }
    }
    ctx->pc = 0x14AF6Cu;
    // 0x14af6c: 0x0  nop
    ctx->pc = 0x14af6cu;
    // NOP
label_14af70:
    // 0x14af70: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x14af70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14af74: 0x14d4000a  bne         $a2, $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x14AF74u;
    {
        const bool branch_taken_0x14af74 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 20));
        if (branch_taken_0x14af74) {
            ctx->pc = 0x14AFA0u;
            goto label_14afa0;
        }
    }
    ctx->pc = 0x14AF7Cu;
    // 0x14af7c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x14AF7Cu;
    SET_GPR_U32(ctx, 31, 0x14AF84u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x14AF7Cu, 0x14AF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AF84u;
label_14af84:
    // 0x14af84: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x14AF84u;
    SET_GPR_U32(ctx, 31, 0x14AF8Cu);
    ctx->pc = 0x14AF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AF84u;
    // 0x14af88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x14AF84u, 0x14AF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AF8Cu;
label_14af8c:
    // 0x14af8c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x14AF8Cu;
    SET_GPR_U32(ctx, 31, 0x14AF94u);
    ctx->pc = 0x14AF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AF8Cu;
    // 0x14af90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x14AF8Cu, 0x14AF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AF94u;
label_14af94:
    // 0x14af94: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x14AF94u;
    {
        const bool branch_taken_0x14af94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AF94u;
        // 0x14af98: 0xae620190  sw          $v0, 0x190($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 400), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14af94) {
            ctx->pc = 0x14B01Cu;
            goto label_14b01c;
        }
    }
    ctx->pc = 0x14AF9Cu;
    // 0x14af9c: 0x0  nop
    ctx->pc = 0x14af9cu;
    // NOP
label_14afa0:
    // 0x14afa0: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x14AFA0u;
    SET_GPR_U32(ctx, 31, 0x14AFA8u);
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x14AFA0u, 0x14AFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AFA8u;
label_14afa8:
    // 0x14afa8: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x14AFA8u;
    {
        const bool branch_taken_0x14afa8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x14AFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AFA8u;
        // 0x14afac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14afa8) {
            ctx->pc = 0x14AFB8u;
            goto label_14afb8;
        }
    }
    ctx->pc = 0x14AFB0u;
    // 0x14afb0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x14AFB0u;
    {
        const bool branch_taken_0x14afb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AFB0u;
        // 0x14afb4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14afb0) {
            ctx->pc = 0x14B01Cu;
            goto label_14b01c;
        }
    }
    ctx->pc = 0x14AFB8u;
label_14afb8:
    // 0x14afb8: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x14afb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x14afbc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x14afbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14afc0: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14AFC0u;
    {
        const bool branch_taken_0x14afc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x14afc0) {
            ctx->pc = 0x14AFD0u;
            goto label_14afd0;
        }
    }
    ctx->pc = 0x14AFC8u;
    // 0x14afc8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x14AFC8u;
    {
        const bool branch_taken_0x14afc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AFC8u;
        // 0x14afcc: 0x8e620188  lw          $v0, 0x188($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14afc8) {
            ctx->pc = 0x14B018u;
            goto label_14b018;
        }
    }
    ctx->pc = 0x14AFD0u;
label_14afd0:
    // 0x14afd0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x14AFD0u;
    SET_GPR_U32(ctx, 31, 0x14AFD8u);
    ctx->pc = 0x14AFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AFD0u;
    // 0x14afd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x14AFD0u, 0x14AFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AFD8u;
label_14afd8:
    // 0x14afd8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x14afd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14afdc: 0x5071000e  beql        $v1, $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x14AFDCu;
    {
        const bool branch_taken_0x14afdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x14afdc) {
            ctx->pc = 0x14AFE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14AFDCu;
            // 0x14afe0: 0x8e62018c  lw          $v0, 0x18C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 396)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B018u;
            goto label_14b018;
        }
    }
    ctx->pc = 0x14AFE4u;
    // 0x14afe4: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x14afe4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x14afe8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14AFE8u;
    {
        const bool branch_taken_0x14afe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14afe8) {
            ctx->pc = 0x14AFECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14AFE8u;
            // 0x14afec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B000u;
            goto label_14b000;
        }
    }
    ctx->pc = 0x14AFF0u;
    // 0x14aff0: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x14AFF0u;
    {
        const bool branch_taken_0x14aff0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14aff0) {
            ctx->pc = 0x14AFF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14AFF0u;
            // 0x14aff4: 0x8e62024c  lw          $v0, 0x24C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 588)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B018u;
            goto label_14b018;
        }
    }
    ctx->pc = 0x14AFF8u;
    // 0x14aff8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x14AFF8u;
    {
        const bool branch_taken_0x14aff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AFF8u;
        // 0x14affc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aff8) {
            ctx->pc = 0x14B020u;
            goto label_14b020;
        }
    }
    ctx->pc = 0x14B000u;
label_14b000:
    // 0x14b000: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14B000u;
    {
        const bool branch_taken_0x14b000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14b000) {
            ctx->pc = 0x14B004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B000u;
            // 0x14b004: 0x8e620190  lw          $v0, 0x190($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B018u;
            goto label_14b018;
        }
    }
    ctx->pc = 0x14B008u;
    // 0x14b008: 0x50740003  beql        $v1, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B008u;
    {
        const bool branch_taken_0x14b008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        if (branch_taken_0x14b008) {
            ctx->pc = 0x14B00Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B008u;
            // 0x14b00c: 0x8e620194  lw          $v0, 0x194($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 404)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B018u;
            goto label_14b018;
        }
    }
    ctx->pc = 0x14B010u;
    // 0x14b010: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14B010u;
    {
        const bool branch_taken_0x14b010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B010u;
        // 0x14b014: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b010) {
            ctx->pc = 0x14B020u;
            goto label_14b020;
        }
    }
    ctx->pc = 0x14B018u;
label_14b018:
    // 0x14b018: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x14b018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_14b01c:
    // 0x14b01c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14b01cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14b020:
    // 0x14b020: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14b020u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14b024: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14b024u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b028: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x14b028u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14b02c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x14b02cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b030: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x14b030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b034: 0x3e00008  jr          $ra
    ctx->pc = 0x14B034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B034u;
        // 0x14b038: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B03Cu;
}
