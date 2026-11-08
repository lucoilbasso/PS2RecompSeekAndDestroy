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

// Function: entry_0013f86c
// Address: 0x13f86c - 0x13f8f4
void entry_0013f86c_0x13f86c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f86c_0x13f86c");
#endif

    switch (ctx->pc) {
        case 0x13f880u: goto label_13f880;
        case 0x13f898u: goto label_13f898;
        case 0x13f8b0u: goto label_13f8b0;
        case 0x13f8c4u: goto label_13f8c4;
        case 0x13f8f0u: goto label_13f8f0;
        default: break;
    }

    ctx->pc = 0x13f86cu;

label_13f86c:
    // 0x13f86c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13f86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13f870:
    // 0x13f870: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13f870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_13f874:
    // 0x13f874: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13f874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_13f878:
    // 0x13f878: 0xc04fce4  jal         func_13F390
label_13f87c:
    if (ctx->pc == 0x13F87Cu) {
        ctx->pc = 0x13F87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F878u;
        // 0x13f87c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F880u;
        goto label_13f880;
    }
    ctx->pc = 0x13F878u;
    SET_GPR_U32(ctx, 31, 0x13F880u);
    ctx->pc = 0x13F87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F878u;
    // 0x13f87c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F390u, 0x13F878u, 0x13F880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F880u;
label_13f880:
    // 0x13f880: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13f880u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13f884:
    // 0x13f884: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x13f884u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13f888:
    // 0x13f888: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x13f888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_13f88c:
    // 0x13f88c: 0x262500c0  addiu       $a1, $s1, 0xC0
    ctx->pc = 0x13f88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
label_13f890:
    // 0x13f890: 0xc050628  jal         func_1418A0
label_13f894:
    if (ctx->pc == 0x13F894u) {
        ctx->pc = 0x13F894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F890u;
        // 0x13f894: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F898u;
        goto label_13f898;
    }
    ctx->pc = 0x13F890u;
    SET_GPR_U32(ctx, 31, 0x13F898u);
    ctx->pc = 0x13F894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F890u;
    // 0x13f894: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1418A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1418A0u, 0x13F890u, 0x13F898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F898u;
label_13f898:
    // 0x13f898: 0x1240002e  beqz        $s2, . + 4 + (0x2E << 2)
label_13f89c:
    if (ctx->pc == 0x13F89Cu) {
        ctx->pc = 0x13F89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F898u;
        // 0x13f89c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F8A0u;
        goto label_13f8a0;
    }
    ctx->pc = 0x13F898u;
    {
        const bool branch_taken_0x13f898 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F898u;
        // 0x13f89c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f898) {
            ctx->pc = 0x13F954u;
            return;
        }
    }
    ctx->pc = 0x13F8A0u;
label_13f8a0:
    // 0x13f8a0: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x13f8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_13f8a4:
    // 0x13f8a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13f8a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13f8a8:
    // 0x13f8a8: 0xc0618c2  jal         func_186308
label_13f8ac:
    if (ctx->pc == 0x13F8ACu) {
        ctx->pc = 0x13F8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F8A8u;
        // 0x13f8ac: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F8B0u;
        goto label_13f8b0;
    }
    ctx->pc = 0x13F8A8u;
    SET_GPR_U32(ctx, 31, 0x13F8B0u);
    ctx->pc = 0x13F8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F8A8u;
    // 0x13f8ac: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x13F8A8u, 0x13F8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F8B0u;
label_13f8b0:
    // 0x13f8b0: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x13f8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_13f8b4:
    // 0x13f8b4: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x13f8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_13f8b8:
    // 0x13f8b8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x13f8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13f8bc:
    // 0x13f8bc: 0xc061a46  jal         func_186918
label_13f8c0:
    if (ctx->pc == 0x13F8C0u) {
        ctx->pc = 0x13F8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F8BCu;
        // 0x13f8c0: 0x34a50200  ori         $a1, $a1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F8C4u;
        goto label_13f8c4;
    }
    ctx->pc = 0x13F8BCu;
    SET_GPR_U32(ctx, 31, 0x13F8C4u);
    ctx->pc = 0x13F8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F8BCu;
    // 0x13f8c0: 0x34a50200  ori         $a1, $a1, 0x200 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x13F8BCu, 0x13F8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F8C4u;
label_13f8c4:
    // 0x13f8c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13f8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13f8c8:
    // 0x13f8c8: 0x10800022  beqz        $a0, . + 4 + (0x22 << 2)
label_13f8cc:
    if (ctx->pc == 0x13F8CCu) {
        ctx->pc = 0x13F8D0u;
        goto label_13f8d0;
    }
    ctx->pc = 0x13F8C8u;
    {
        const bool branch_taken_0x13f8c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f8c8) {
            ctx->pc = 0x13F954u;
            return;
        }
    }
    ctx->pc = 0x13F8D0u;
label_13f8d0:
    // 0x13f8d0: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x13f8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_13f8d4:
    // 0x13f8d4: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_13f8d8:
    if (ctx->pc == 0x13F8D8u) {
        ctx->pc = 0x13F8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F8D4u;
        // 0x13f8d8: 0x8c90000c  lw          $s0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F8DCu;
        goto label_13f8dc;
    }
    ctx->pc = 0x13F8D4u;
    {
        const bool branch_taken_0x13f8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F8D4u;
        // 0x13f8d8: 0x8c90000c  lw          $s0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f8d4) {
            ctx->pc = 0x13F954u;
            return;
        }
    }
    ctx->pc = 0x13F8DCu;
label_13f8dc:
    // 0x13f8dc: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x13f8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_13f8e0:
    // 0x13f8e0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_13f8e4:
    if (ctx->pc == 0x13F8E4u) {
        ctx->pc = 0x13F8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F8E0u;
        // 0x13f8e4: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F8E8u;
        goto label_13f8e8;
    }
    ctx->pc = 0x13F8E0u;
    {
        const bool branch_taken_0x13f8e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f8e0) {
            ctx->pc = 0x13F8E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F8E0u;
            // 0x13f8e4: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F8F4u;
            return;
        }
    }
    ctx->pc = 0x13F8E8u;
label_13f8e8:
    // 0x13f8e8: 0x40f809  jalr        $v0
label_13f8ec:
    if (ctx->pc == 0x13F8ECu) {
        ctx->pc = 0x13F8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F8E8u;
        // 0x13f8ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F8F0u;
        goto label_13f8f0;
    }
    ctx->pc = 0x13F8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13F8F0u);
        ctx->pc = 0x13F8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F8E8u;
        // 0x13f8ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F8E8u, 0x13F8F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13F8F0u;
label_13f8f0:
    // 0x13f8f0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x13f8f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x13f8f4u;
}
