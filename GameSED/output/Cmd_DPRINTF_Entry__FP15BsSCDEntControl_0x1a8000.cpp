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

// Function: Cmd_DPRINTF_Entry__FP15BsSCDEntControl
// Address: 0x1a8000 - 0x1a8144
void Cmd_DPRINTF_Entry__FP15BsSCDEntControl_0x1a8000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_DPRINTF_Entry__FP15BsSCDEntControl_0x1a8000");
#endif

    switch (ctx->pc) {
        case 0x1a8048u: goto label_1a8048;
        case 0x1a80b0u: goto label_1a80b0;
        case 0x1a80d0u: goto label_1a80d0;
        case 0x1a80e8u: goto label_1a80e8;
        case 0x1a8100u: goto label_1a8100;
        case 0x1a8110u: goto label_1a8110;
        default: break;
    }

    ctx->pc = 0x1a8000u;

    // 0x1a8000: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a8000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a8004: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1a8004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1a8008: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a8008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a800c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a800cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8010: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a8010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a8014: 0x24477b40  addiu       $a3, $v0, 0x7B40
    ctx->pc = 0x1a8014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 31552));
    // 0x1a8018: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a8018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a801c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1a801cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8020: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a8020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a8024: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a8024u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8028: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1a8028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1a802c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1a802cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1a8030: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a8030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a8034: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x1a8034u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1a8038: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x1a8038u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a803c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A803Cu;
    {
        const bool branch_taken_0x1a803c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A803Cu;
        // 0x1a8040: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a803c) {
            ctx->pc = 0x1A8070u;
            goto label_1a8070;
        }
    }
    ctx->pc = 0x1A8044u;
    // 0x1a8044: 0x0  nop
    ctx->pc = 0x1a8044u;
    // NOP
label_1a8048:
    // 0x1a8048: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1a8048u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a804c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1a804cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1a8050: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x1a8050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1a8054: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1a8054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1a8058: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x1a8058u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a805c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1a805cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1a8060: 0x48300a  movz        $a2, $v0, $t0
    ctx->pc = 0x1a8060u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x1a8064: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1a8064u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a8068: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1A8068u;
    {
        const bool branch_taken_0x1a8068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A806Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8068u;
        // 0x1a806c: 0x30880003  andi        $t0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8068) {
            ctx->pc = 0x1A8048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8048;
        }
    }
    ctx->pc = 0x1A8070u;
label_1a8070:
    // 0x1a8070: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x1a8070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1a8074: 0xa0e00000  sb          $zero, 0x0($a3)
    ctx->pc = 0x1a8074u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a8078: 0x48300a  movz        $a2, $v0, $t0
    ctx->pc = 0x1a8078u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x1a807c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a807cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1a8080: 0xad26001c  sw          $a2, 0x1C($t1)
    ctx->pc = 0x1a8080u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 28), GPR_U32(ctx, 6));
    // 0x1a8084: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1a8084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1a8088: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a8088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a808c: 0x50640025  beql        $v1, $a0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1A808Cu;
    {
        const bool branch_taken_0x1a808c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1a808c) {
            ctx->pc = 0x1A8090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A808Cu;
            // 0x1a8090: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8124u;
            goto label_1a8124;
        }
    }
    ctx->pc = 0x1A8094u;
    // 0x1a8094: 0x3c137ffe  lui         $s3, 0x7FFE
    ctx->pc = 0x1a8094u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32766 << 16));
    // 0x1a8098: 0x2611001c  addiu       $s1, $s0, 0x1C
    ctx->pc = 0x1a8098u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1a809c: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x1a809cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x1a80a0: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x1a80a0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x1a80a4: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1a80a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a80a8: 0x3c148000  lui         $s4, 0x8000
    ctx->pc = 0x1a80a8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32768 << 16));
    // 0x1a80ac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a80acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a80b0:
    // 0x1a80b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a80b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a80b4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a80b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a80b8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1a80b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1a80bc: 0x263102a  slt         $v0, $s3, $v1
    ctx->pc = 0x1a80bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a80c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A80C0u;
    {
        const bool branch_taken_0x1a80c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A80C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A80C0u;
        // 0x1a80c4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a80c0) {
            ctx->pc = 0x1A80D4u;
            goto label_1a80d4;
        }
    }
    ctx->pc = 0x1A80C8u;
    // 0x1a80c8: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A80C8u;
    SET_GPR_U32(ctx, 31, 0x1A80D0u);
    ctx->pc = 0x1A80CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A80C8u;
    // 0x1a80cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A80C8u, 0x1A80D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A80D0u;
label_1a80d0:
    // 0x1a80d0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a80d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a80d4:
    // 0x1a80d4: 0x8f839080  lw          $v1, -0x6F80($gp)
    ctx->pc = 0x1a80d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938752)));
    // 0x1a80d8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A80D8u;
    {
        const bool branch_taken_0x1a80d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a80d8) {
            ctx->pc = 0x1A80F0u;
            goto label_1a80f0;
        }
    }
    ctx->pc = 0x1A80E0u;
    // 0x1a80e0: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x1A80E0u;
    SET_GPR_U32(ctx, 31, 0x1A80E8u);
    ctx->pc = 0x1A80E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A80E0u;
    // 0x1a80e4: 0x26447b40  addiu       $a0, $s2, 0x7B40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 31552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x1A80E0u, 0x1A80E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A80E8u;
label_1a80e8:
    // 0x1a80e8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A80E8u;
    {
        const bool branch_taken_0x1a80e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A80ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A80E8u;
        // 0x1a80ec: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a80e8) {
            ctx->pc = 0x1A8114u;
            goto label_1a8114;
        }
    }
    ctx->pc = 0x1A80F0u;
label_1a80f0:
    // 0x1a80f0: 0x14750005  bne         $v1, $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A80F0u;
    {
        const bool branch_taken_0x1a80f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        if (branch_taken_0x1a80f0) {
            ctx->pc = 0x1A8108u;
            goto label_1a8108;
        }
    }
    ctx->pc = 0x1A80F8u;
    // 0x1a80f8: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x1A80F8u;
    SET_GPR_U32(ctx, 31, 0x1A8100u);
    ctx->pc = 0x1A80FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A80F8u;
    // 0x1a80fc: 0x26447b40  addiu       $a0, $s2, 0x7B40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 31552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x1A80F8u, 0x1A8100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8100u;
label_1a8100:
    // 0x1a8100: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A8100u;
    {
        const bool branch_taken_0x1a8100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8100u;
        // 0x1a8104: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8100) {
            ctx->pc = 0x1A8114u;
            goto label_1a8114;
        }
    }
    ctx->pc = 0x1A8108u;
label_1a8108:
    // 0x1a8108: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1A8108u;
    SET_GPR_U32(ctx, 31, 0x1A8110u);
    ctx->pc = 0x1A810Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8108u;
    // 0x1a810c: 0x26447b40  addiu       $a0, $s2, 0x7B40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 31552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1A8108u, 0x1A8110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8110u;
label_1a8110:
    // 0x1a8110: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1a8110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a8114:
    // 0x1a8114: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a8114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a8118: 0x5474ffe5  bnel        $v1, $s4, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1A8118u;
    {
        const bool branch_taken_0x1a8118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x1a8118) {
            ctx->pc = 0x1A811Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8118u;
            // 0x1a811c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A80B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a80b0;
        }
    }
    ctx->pc = 0x1A8120u;
    // 0x1a8120: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a8120u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a8124:
    // 0x1a8124: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a8124u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a8128: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a8128u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a812c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a812cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a8130: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1a8130u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a8134: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1a8134u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a8138: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a8138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a813c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A813Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A813Cu;
        // 0x1a8140: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A813Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8144u;
}
