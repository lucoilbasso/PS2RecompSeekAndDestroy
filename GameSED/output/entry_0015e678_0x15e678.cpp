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

// Function: entry_0015e678
// Address: 0x15e678 - 0x15e6f0
void entry_0015e678_0x15e678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e678_0x15e678");
#endif

    switch (ctx->pc) {
        case 0x15e6ccu: goto label_15e6cc;
        default: break;
    }

    ctx->pc = 0x15e678u;

label_15e678:
    // 0x15e678: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x15e678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15e67c:
    // 0x15e67c: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
label_15e680:
    if (ctx->pc == 0x15E680u) {
        ctx->pc = 0x15E680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E67Cu;
        // 0x15e680: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E684u;
        goto label_15e684;
    }
    ctx->pc = 0x15E67Cu;
    {
        const bool branch_taken_0x15e67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e67c) {
            ctx->pc = 0x15E680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E67Cu;
            // 0x15e680: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E764u;
            return;
        }
    }
    ctx->pc = 0x15E684u;
label_15e684:
    // 0x15e684: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15e684u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15e688:
    // 0x15e688: 0x50c00036  beql        $a2, $zero, . + 4 + (0x36 << 2)
label_15e68c:
    if (ctx->pc == 0x15E68Cu) {
        ctx->pc = 0x15E68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E688u;
        // 0x15e68c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E690u;
        goto label_15e690;
    }
    ctx->pc = 0x15E688u;
    {
        const bool branch_taken_0x15e688 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e688) {
            ctx->pc = 0x15E68Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E688u;
            // 0x15e68c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E764u;
            return;
        }
    }
    ctx->pc = 0x15E690u;
label_15e690:
    // 0x15e690: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15e690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15e694:
    // 0x15e694: 0x313c3  sra         $v0, $v1, 15
    ctx->pc = 0x15e694u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 15));
label_15e698:
    // 0x15e698: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15e698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15e69c:
    // 0x15e69c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_15e6a0:
    if (ctx->pc == 0x15E6A0u) {
        ctx->pc = 0x15E6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E69Cu;
        // 0x15e6a0: 0x31383  sra         $v0, $v1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E6A4u;
        goto label_15e6a4;
    }
    ctx->pc = 0x15E69Cu;
    {
        const bool branch_taken_0x15e69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E69Cu;
        // 0x15e6a0: 0x31383  sra         $v0, $v1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e69c) {
            ctx->pc = 0x15E700u;
            return;
        }
    }
    ctx->pc = 0x15E6A4u;
label_15e6a4:
    // 0x15e6a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15e6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15e6a8:
    // 0x15e6a8: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_15e6ac:
    if (ctx->pc == 0x15E6ACu) {
        ctx->pc = 0x15E6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E6A8u;
        // 0x15e6ac: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E6B0u;
        goto label_15e6b0;
    }
    ctx->pc = 0x15E6A8u;
    {
        const bool branch_taken_0x15e6a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e6a8) {
            ctx->pc = 0x15E6ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E6A8u;
            // 0x15e6ac: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E6F4u;
            return;
        }
    }
    ctx->pc = 0x15E6B0u;
label_15e6b0:
    // 0x15e6b0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e6b4:
    // 0x15e6b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15e6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15e6b8:
    // 0x15e6b8: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e6bc:
    // 0x15e6bc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e6bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e6c0:
    // 0x15e6c0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e6c4:
    // 0x15e6c4: 0x60f809  jalr        $v1
label_15e6c8:
    if (ctx->pc == 0x15E6C8u) {
        ctx->pc = 0x15E6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E6C4u;
        // 0x15e6c8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E6CCu;
        goto label_15e6cc;
    }
    ctx->pc = 0x15E6C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E6CCu);
        ctx->pc = 0x15E6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E6C4u;
        // 0x15e6c8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E6C4u, 0x15E6CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E6CCu;
label_15e6cc:
    // 0x15e6cc: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15e6ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15e6d0:
    // 0x15e6d0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15e6d4:
    if (ctx->pc == 0x15E6D4u) {
        ctx->pc = 0x15E6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E6D0u;
        // 0x15e6d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E6D8u;
        goto label_15e6d8;
    }
    ctx->pc = 0x15E6D0u;
    {
        const bool branch_taken_0x15e6d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E6D0u;
        // 0x15e6d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e6d0) {
            ctx->pc = 0x15E6F0u;
            return;
        }
    }
    ctx->pc = 0x15E6D8u;
label_15e6d8:
    // 0x15e6d8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e6dc:
    // 0x15e6dc: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e6e0:
    // 0x15e6e0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e6e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e6e4:
    // 0x15e6e4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e6e8:
    // 0x15e6e8: 0x60f809  jalr        $v1
label_15e6ec:
    if (ctx->pc == 0x15E6ECu) {
        ctx->pc = 0x15E6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E6E8u;
        // 0x15e6ec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E6F0u;
        goto label_fallthrough_0x15e6e8;
    }
    ctx->pc = 0x15E6E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E6F0u);
        ctx->pc = 0x15E6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E6E8u;
        // 0x15e6ec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E6E8u, 0x15E6F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15e6e8:
    ctx->pc = 0x15E6F0u;
}
