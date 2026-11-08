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

// Function: entry_0015e464
// Address: 0x15e464 - 0x15e4dc
void entry_0015e464_0x15e464(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e464_0x15e464");
#endif

    switch (ctx->pc) {
        case 0x15e4b8u: goto label_15e4b8;
        default: break;
    }

    ctx->pc = 0x15e464u;

label_15e464:
    // 0x15e464: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x15e464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15e468:
    // 0x15e468: 0x5040003a  beql        $v0, $zero, . + 4 + (0x3A << 2)
label_15e46c:
    if (ctx->pc == 0x15E46Cu) {
        ctx->pc = 0x15E46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E468u;
        // 0x15e46c: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E470u;
        goto label_15e470;
    }
    ctx->pc = 0x15E468u;
    {
        const bool branch_taken_0x15e468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e468) {
            ctx->pc = 0x15E46Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E468u;
            // 0x15e46c: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E554u;
            return;
        }
    }
    ctx->pc = 0x15E470u;
label_15e470:
    // 0x15e470: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15e470u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15e474:
    // 0x15e474: 0x50c00037  beql        $a2, $zero, . + 4 + (0x37 << 2)
label_15e478:
    if (ctx->pc == 0x15E478u) {
        ctx->pc = 0x15E478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E474u;
        // 0x15e478: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E47Cu;
        goto label_15e47c;
    }
    ctx->pc = 0x15E474u;
    {
        const bool branch_taken_0x15e474 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e474) {
            ctx->pc = 0x15E478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E474u;
            // 0x15e478: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E554u;
            return;
        }
    }
    ctx->pc = 0x15E47Cu;
label_15e47c:
    // 0x15e47c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15e47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15e480:
    // 0x15e480: 0x313c3  sra         $v0, $v1, 15
    ctx->pc = 0x15e480u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 15));
label_15e484:
    // 0x15e484: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15e484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15e488:
    // 0x15e488: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_15e48c:
    if (ctx->pc == 0x15E48Cu) {
        ctx->pc = 0x15E48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E488u;
        // 0x15e48c: 0x31383  sra         $v0, $v1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E490u;
        goto label_15e490;
    }
    ctx->pc = 0x15E488u;
    {
        const bool branch_taken_0x15e488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E488u;
        // 0x15e48c: 0x31383  sra         $v0, $v1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e488) {
            ctx->pc = 0x15E4F0u;
            return;
        }
    }
    ctx->pc = 0x15E490u;
label_15e490:
    // 0x15e490: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15e490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15e494:
    // 0x15e494: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_15e498:
    if (ctx->pc == 0x15E498u) {
        ctx->pc = 0x15E498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E494u;
        // 0x15e498: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E49Cu;
        goto label_15e49c;
    }
    ctx->pc = 0x15E494u;
    {
        const bool branch_taken_0x15e494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e494) {
            ctx->pc = 0x15E498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E494u;
            // 0x15e498: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E4E0u;
            return;
        }
    }
    ctx->pc = 0x15E49Cu;
label_15e49c:
    // 0x15e49c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e4a0:
    // 0x15e4a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15e4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15e4a4:
    // 0x15e4a4: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e4a8:
    // 0x15e4a8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e4a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e4ac:
    // 0x15e4ac: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e4b0:
    // 0x15e4b0: 0x60f809  jalr        $v1
label_15e4b4:
    if (ctx->pc == 0x15E4B4u) {
        ctx->pc = 0x15E4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E4B0u;
        // 0x15e4b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E4B8u;
        goto label_15e4b8;
    }
    ctx->pc = 0x15E4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E4B8u);
        ctx->pc = 0x15E4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E4B0u;
        // 0x15e4b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E4B0u, 0x15E4B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E4B8u;
label_15e4b8:
    // 0x15e4b8: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15e4b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15e4bc:
    // 0x15e4bc: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15e4c0:
    if (ctx->pc == 0x15E4C0u) {
        ctx->pc = 0x15E4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E4BCu;
        // 0x15e4c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E4C4u;
        goto label_15e4c4;
    }
    ctx->pc = 0x15E4BCu;
    {
        const bool branch_taken_0x15e4bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E4BCu;
        // 0x15e4c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e4bc) {
            ctx->pc = 0x15E4DCu;
            return;
        }
    }
    ctx->pc = 0x15E4C4u;
label_15e4c4:
    // 0x15e4c4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e4c8:
    // 0x15e4c8: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e4cc:
    // 0x15e4cc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e4ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e4d0:
    // 0x15e4d0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e4d4:
    // 0x15e4d4: 0x60f809  jalr        $v1
label_15e4d8:
    if (ctx->pc == 0x15E4D8u) {
        ctx->pc = 0x15E4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E4D4u;
        // 0x15e4d8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E4DCu;
        goto label_fallthrough_0x15e4d4;
    }
    ctx->pc = 0x15E4D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E4DCu);
        ctx->pc = 0x15E4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E4D4u;
        // 0x15e4d8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E4D4u, 0x15E4DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15e4d4:
    ctx->pc = 0x15E4DCu;
}
