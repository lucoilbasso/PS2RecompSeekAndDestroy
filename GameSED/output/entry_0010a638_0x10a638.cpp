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

// Function: entry_0010a638
// Address: 0x10a638 - 0x10a6e8
void entry_0010a638_0x10a638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a638_0x10a638");
#endif

    switch (ctx->pc) {
        case 0x10a650u: goto label_10a650;
        case 0x10a660u: goto label_10a660;
        case 0x10a66cu: goto label_10a66c;
        case 0x10a678u: goto label_10a678;
        case 0x10a688u: goto label_10a688;
        case 0x10a690u: goto label_10a690;
        case 0x10a6b4u: goto label_10a6b4;
        case 0x10a6c0u: goto label_10a6c0;
        default: break;
    }

    ctx->pc = 0x10a638u;

    // 0x10a638: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x10a638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
    // 0x10a63c: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x10a63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x10a640: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x10a640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x10a644: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x10a644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x10a648: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10A648u;
    SET_GPR_U32(ctx, 31, 0x10A650u);
    ctx->pc = 0x10A64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A648u;
    // 0x10a64c: 0x8c5e0044  lw          $fp, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10A648u, 0x10A650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A650u;
label_10a650:
    // 0x10a650: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10a650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a654: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x10a654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x10a658: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10A658u;
    SET_GPR_U32(ctx, 31, 0x10A660u);
    ctx->pc = 0x10A65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A658u;
    // 0x10a65c: 0x3a0982d  daddu       $s3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10A658u, 0x10A660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A660u;
label_10a660:
    // 0x10a660: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10a660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a664: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10A664u;
    SET_GPR_U32(ctx, 31, 0x10A66Cu);
    ctx->pc = 0x10A668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A664u;
    // 0x10a668: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10A664u, 0x10A66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A66Cu;
label_10a66c:
    // 0x10a66c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10a66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a670: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10A670u;
    SET_GPR_U32(ctx, 31, 0x10A678u);
    ctx->pc = 0x10A674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A670u;
    // 0x10a674: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10A670u, 0x10A678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A678u;
label_10a678:
    // 0x10a678: 0x24040166  addiu       $a0, $zero, 0x166
    ctx->pc = 0x10a678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
    // 0x10a67c: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x10a67cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x10a680: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x10A680u;
    SET_GPR_U32(ctx, 31, 0x10A688u);
    ctx->pc = 0x10A684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A680u;
    // 0x10a684: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x10A680u, 0x10A688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A688u;
label_10a688:
    // 0x10a688: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x10A688u;
    SET_GPR_U32(ctx, 31, 0x10A690u);
    ctx->pc = 0x10A68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A688u;
    // 0x10a68c: 0x240402a0  addiu       $a0, $zero, 0x2A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x10A688u, 0x10A690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A690u;
label_10a690:
    // 0x10a690: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10a690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a694: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10a694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a698: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x10a698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x10a69c: 0x24420320  addiu       $v0, $v0, 0x320
    ctx->pc = 0x10a69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
    // 0x10a6a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10a6a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a6a4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x10a6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x10a6a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a6ac: 0xc063114  jal         func_18C450
    ctx->pc = 0x10A6ACu;
    SET_GPR_U32(ctx, 31, 0x10A6B4u);
    ctx->pc = 0x10A6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A6ACu;
    // 0x10a6b0: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C450u, 0x10A6ACu, 0x10A6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A6B4u;
label_10a6b4:
    // 0x10a6b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a6b8: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x10A6B8u;
    SET_GPR_U32(ctx, 31, 0x10A6C0u);
    ctx->pc = 0x10A6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A6B8u;
    // 0x10a6bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x10A6B8u, 0x10A6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A6C0u;
label_10a6c0:
    // 0x10a6c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10a6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10a6c4: 0x12420032  beq         $s2, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x10A6C4u;
    {
        const bool branch_taken_0x10a6c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x10A6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A6C4u;
        // 0x10a6c8: 0x2a420003  slti        $v0, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a6c4) {
            ctx->pc = 0x10A790u;
            return;
        }
    }
    ctx->pc = 0x10A6CCu;
    // 0x10a6cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10A6CCu;
    {
        const bool branch_taken_0x10a6cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A6CCu;
        // 0x10a6d0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a6cc) {
            ctx->pc = 0x10A6E8u;
            return;
        }
    }
    ctx->pc = 0x10A6D4u;
    // 0x10a6d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10a6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a6d8: 0x12420009  beq         $s2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10A6D8u;
    {
        const bool branch_taken_0x10a6d8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x10A6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A6D8u;
        // 0x10a6dc: 0x3c02001f  lui         $v0, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a6d8) {
            ctx->pc = 0x10A700u;
            return;
        }
    }
    ctx->pc = 0x10A6E0u;
    // 0x10a6e0: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x10A6E0u;
    {
        const bool branch_taken_0x10a6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a6e0) {
            ctx->pc = 0x10A868u;
            return;
        }
    }
    ctx->pc = 0x10A6E8u;
}
