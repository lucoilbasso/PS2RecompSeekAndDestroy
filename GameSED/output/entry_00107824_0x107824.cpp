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

// Function: entry_00107824
// Address: 0x107824 - 0x1078a8
void entry_00107824_0x107824(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107824_0x107824");
#endif

    switch (ctx->pc) {
        case 0x107834u: goto label_107834;
        case 0x107840u: goto label_107840;
        case 0x10789cu: goto label_10789c;
        default: break;
    }

    ctx->pc = 0x107824u;

label_107824:
    // 0x107824: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x107824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_107828:
    // 0x107828: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x107828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_10782c:
    // 0x10782c: 0xc04110c  jal         func_104430
label_107830:
    if (ctx->pc == 0x107830u) {
        ctx->pc = 0x107830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10782Cu;
        // 0x107830: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107834u;
        goto label_107834;
    }
    ctx->pc = 0x10782Cu;
    SET_GPR_U32(ctx, 31, 0x107834u);
    ctx->pc = 0x107830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10782Cu;
    // 0x107830: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10782Cu, 0x107834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107834u;
label_107834:
    // 0x107834: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x107834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_107838:
    // 0x107838: 0xc06a26e  jal         func_1A89B8
label_10783c:
    if (ctx->pc == 0x10783Cu) {
        ctx->pc = 0x10783Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107838u;
        // 0x10783c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107840u;
        goto label_107840;
    }
    ctx->pc = 0x107838u;
    SET_GPR_U32(ctx, 31, 0x107840u);
    ctx->pc = 0x10783Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107838u;
    // 0x10783c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x107838u, 0x107840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107840u;
label_107840:
    // 0x107840: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x107840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_107844:
    // 0x107844: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x107844u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_107848:
    // 0x107848: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x107848u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_10784c:
    // 0x10784c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10784cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_107850:
    // 0x107850: 0x1444001f  bne         $v0, $a0, . + 4 + (0x1F << 2)
label_107854:
    if (ctx->pc == 0x107854u) {
        ctx->pc = 0x107854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107850u;
        // 0x107854: 0x3c030400  lui         $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107858u;
        goto label_107858;
    }
    ctx->pc = 0x107850u;
    {
        const bool branch_taken_0x107850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x107854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107850u;
        // 0x107854: 0x3c030400  lui         $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107850) {
            ctx->pc = 0x1078D0u;
            return;
        }
    }
    ctx->pc = 0x107858u;
label_107858:
    // 0x107858: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x107858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_10785c:
    // 0x10785c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10785cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_107860:
    // 0x107860: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_107864:
    if (ctx->pc == 0x107864u) {
        ctx->pc = 0x107864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107860u;
        // 0x107864: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107868u;
        goto label_107868;
    }
    ctx->pc = 0x107860u;
    {
        const bool branch_taken_0x107860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x107860) {
            ctx->pc = 0x107864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107860u;
            // 0x107864: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1078ACu;
            return;
        }
    }
    ctx->pc = 0x107868u;
label_107868:
    // 0x107868: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x107868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10786c:
    // 0x10786c: 0x24030346  addiu       $v1, $zero, 0x346
    ctx->pc = 0x10786cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 838));
label_107870:
    // 0x107870: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x107870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_107874:
    // 0x107874: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
label_107878:
    if (ctx->pc == 0x107878u) {
        ctx->pc = 0x107878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107874u;
        // 0x107878: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10787Cu;
        goto label_10787c;
    }
    ctx->pc = 0x107874u;
    {
        const bool branch_taken_0x107874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x107878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107874u;
        // 0x107878: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107874) {
            ctx->pc = 0x1078A8u;
            return;
        }
    }
    ctx->pc = 0x10787Cu;
label_10787c:
    // 0x10787c: 0x8e030134  lw          $v1, 0x134($s0)
    ctx->pc = 0x10787cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
label_107880:
    // 0x107880: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x107880u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_107884:
    // 0x107884: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x107884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_107888:
    // 0x107888: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x107888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_10788c:
    // 0x10788c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x10788cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_107890:
    // 0x107890: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x107890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_107894:
    // 0x107894: 0x60f809  jalr        $v1
label_107898:
    if (ctx->pc == 0x107898u) {
        ctx->pc = 0x107898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107894u;
        // 0x107898: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10789Cu;
        goto label_10789c;
    }
    ctx->pc = 0x107894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10789Cu);
        ctx->pc = 0x107898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107894u;
        // 0x107898: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107894u, 0x10789Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10789Cu;
label_10789c:
    // 0x10789c: 0x100000a6  b           . + 4 + (0xA6 << 2)
label_1078a0:
    if (ctx->pc == 0x1078A0u) {
        ctx->pc = 0x1078A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10789Cu;
        // 0x1078a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1078A4u;
        goto label_1078a4;
    }
    ctx->pc = 0x10789Cu;
    {
        const bool branch_taken_0x10789c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1078A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10789Cu;
        // 0x1078a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10789c) {
            ctx->pc = 0x107B38u;
            return;
        }
    }
    ctx->pc = 0x1078A4u;
label_1078a4:
    // 0x1078a4: 0x0  nop
    ctx->pc = 0x1078a4u;
    // NOP
    ctx->pc = 0x1078a8u;
}
