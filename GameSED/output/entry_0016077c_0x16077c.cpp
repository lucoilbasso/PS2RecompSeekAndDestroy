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

// Function: entry_0016077c
// Address: 0x16077c - 0x1607f4
void entry_0016077c_0x16077c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016077c_0x16077c");
#endif

    switch (ctx->pc) {
        case 0x1607d0u: goto label_1607d0;
        default: break;
    }

    ctx->pc = 0x16077cu;

label_16077c:
    // 0x16077c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x16077cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_160780:
    // 0x160780: 0x5040003a  beql        $v0, $zero, . + 4 + (0x3A << 2)
label_160784:
    if (ctx->pc == 0x160784u) {
        ctx->pc = 0x160784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160780u;
        // 0x160784: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160788u;
        goto label_160788;
    }
    ctx->pc = 0x160780u;
    {
        const bool branch_taken_0x160780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x160780) {
            ctx->pc = 0x160784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160780u;
            // 0x160784: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16086Cu;
            return;
        }
    }
    ctx->pc = 0x160788u;
label_160788:
    // 0x160788: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x160788u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_16078c:
    // 0x16078c: 0x50c00037  beql        $a2, $zero, . + 4 + (0x37 << 2)
label_160790:
    if (ctx->pc == 0x160790u) {
        ctx->pc = 0x160790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16078Cu;
        // 0x160790: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160794u;
        goto label_160794;
    }
    ctx->pc = 0x16078Cu;
    {
        const bool branch_taken_0x16078c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x16078c) {
            ctx->pc = 0x160790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16078Cu;
            // 0x160790: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16086Cu;
            return;
        }
    }
    ctx->pc = 0x160794u;
label_160794:
    // 0x160794: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x160794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_160798:
    // 0x160798: 0x313c3  sra         $v0, $v1, 15
    ctx->pc = 0x160798u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 15));
label_16079c:
    // 0x16079c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x16079cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1607a0:
    // 0x1607a0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1607a4:
    if (ctx->pc == 0x1607A4u) {
        ctx->pc = 0x1607A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1607A0u;
        // 0x1607a4: 0x31383  sra         $v0, $v1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1607A8u;
        goto label_1607a8;
    }
    ctx->pc = 0x1607A0u;
    {
        const bool branch_taken_0x1607a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1607A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1607A0u;
        // 0x1607a4: 0x31383  sra         $v0, $v1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1607a0) {
            ctx->pc = 0x160808u;
            return;
        }
    }
    ctx->pc = 0x1607A8u;
label_1607a8:
    // 0x1607a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1607a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1607ac:
    // 0x1607ac: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_1607b0:
    if (ctx->pc == 0x1607B0u) {
        ctx->pc = 0x1607B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1607ACu;
        // 0x1607b0: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1607B4u;
        goto label_1607b4;
    }
    ctx->pc = 0x1607ACu;
    {
        const bool branch_taken_0x1607ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1607ac) {
            ctx->pc = 0x1607B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1607ACu;
            // 0x1607b0: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1607F8u;
            return;
        }
    }
    ctx->pc = 0x1607B4u;
label_1607b4:
    // 0x1607b4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1607b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1607b8:
    // 0x1607b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1607b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1607bc:
    // 0x1607bc: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x1607bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_1607c0:
    // 0x1607c0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1607c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1607c4:
    // 0x1607c4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1607c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1607c8:
    // 0x1607c8: 0x60f809  jalr        $v1
label_1607cc:
    if (ctx->pc == 0x1607CCu) {
        ctx->pc = 0x1607CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1607C8u;
        // 0x1607cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1607D0u;
        goto label_1607d0;
    }
    ctx->pc = 0x1607C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1607D0u);
        ctx->pc = 0x1607CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1607C8u;
        // 0x1607cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1607C8u, 0x1607D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1607D0u;
label_1607d0:
    // 0x1607d0: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1607d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1607d4:
    // 0x1607d4: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1607d8:
    if (ctx->pc == 0x1607D8u) {
        ctx->pc = 0x1607D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1607D4u;
        // 0x1607d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1607DCu;
        goto label_1607dc;
    }
    ctx->pc = 0x1607D4u;
    {
        const bool branch_taken_0x1607d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1607D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1607D4u;
        // 0x1607d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1607d4) {
            ctx->pc = 0x1607F4u;
            return;
        }
    }
    ctx->pc = 0x1607DCu;
label_1607dc:
    // 0x1607dc: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1607dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1607e0:
    // 0x1607e0: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x1607e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_1607e4:
    // 0x1607e4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1607e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1607e8:
    // 0x1607e8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1607e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1607ec:
    // 0x1607ec: 0x60f809  jalr        $v1
label_1607f0:
    if (ctx->pc == 0x1607F0u) {
        ctx->pc = 0x1607F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1607ECu;
        // 0x1607f0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1607F4u;
        goto label_fallthrough_0x1607ec;
    }
    ctx->pc = 0x1607ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1607F4u);
        ctx->pc = 0x1607F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1607ECu;
        // 0x1607f0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1607ECu, 0x1607F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1607ec:
    ctx->pc = 0x1607F4u;
}
