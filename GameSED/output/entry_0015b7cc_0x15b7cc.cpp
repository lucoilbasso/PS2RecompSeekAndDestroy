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

// Function: entry_0015b7cc
// Address: 0x15b7cc - 0x15b880
void entry_0015b7cc_0x15b7cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b7cc_0x15b7cc");
#endif

    switch (ctx->pc) {
        case 0x15b804u: goto label_15b804;
        case 0x15b830u: goto label_15b830;
        case 0x15b858u: goto label_15b858;
        default: break;
    }

    ctx->pc = 0x15b7ccu;

label_15b7cc:
    // 0x15b7cc: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x15b7ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15b7d0:
    // 0x15b7d0: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x15b7d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_15b7d4:
    // 0x15b7d4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x15b7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15b7d8:
    // 0x15b7d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15b7d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b7dc:
    // 0x15b7dc: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x15b7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_15b7e0:
    // 0x15b7e0: 0x2e0982d  daddu       $s3, $s7, $zero
    ctx->pc = 0x15b7e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_15b7e4:
    // 0x15b7e4: 0x8e870020  lw          $a3, 0x20($s4)
    ctx->pc = 0x15b7e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_15b7e8:
    // 0x15b7e8: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x15b7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_15b7ec:
    // 0x15b7ec: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15b7ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15b7f0:
    // 0x15b7f0: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x15b7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_15b7f4:
    // 0x15b7f4: 0xae27012c  sw          $a3, 0x12C($s1)
    ctx->pc = 0x15b7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 7));
label_15b7f8:
    // 0x15b7f8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15b7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15b7fc:
    // 0x15b7fc: 0x60f809  jalr        $v1
label_15b800:
    if (ctx->pc == 0x15B800u) {
        ctx->pc = 0x15B800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B7FCu;
        // 0x15b800: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B804u;
        goto label_15b804;
    }
    ctx->pc = 0x15B7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15B804u);
        ctx->pc = 0x15B800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B7FCu;
        // 0x15b800: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B7FCu, 0x15B804u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15B804u;
label_15b804:
    // 0x15b804: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x15b804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15b808:
    // 0x15b808: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x15b808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_15b80c:
    // 0x15b80c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x15b80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_15b810:
    // 0x15b810: 0x8e86001c  lw          $a2, 0x1C($s4)
    ctx->pc = 0x15b810u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_15b814:
    // 0x15b814: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15b814u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15b818:
    // 0x15b818: 0x3c52821  addu        $a1, $fp, $a1
    ctx->pc = 0x15b818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
label_15b81c:
    // 0x15b81c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15b81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15b820:
    // 0x15b820: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x15b820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_15b824:
    // 0x15b824: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x15b824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_15b828:
    // 0x15b828: 0x60f809  jalr        $v1
label_15b82c:
    if (ctx->pc == 0x15B82Cu) {
        ctx->pc = 0x15B82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B828u;
        // 0x15b82c: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B830u;
        goto label_15b830;
    }
    ctx->pc = 0x15B828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15B830u);
        ctx->pc = 0x15B82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B828u;
        // 0x15b82c: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B828u, 0x15B830u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15B830u;
label_15b830:
    // 0x15b830: 0x8690000c  lh          $s0, 0xC($s4)
    ctx->pc = 0x15b830u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_15b834:
    // 0x15b834: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x15b834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15b838:
    // 0x15b838: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x15b838u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
label_15b83c:
    // 0x15b83c: 0xaeb10004  sw          $s1, 0x4($s5)
    ctx->pc = 0x15b83cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 17));
label_15b840:
    // 0x15b840: 0x24a5a2a8  addiu       $a1, $a1, -0x5D58
    ctx->pc = 0x15b840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943400));
label_15b844:
    // 0x15b844: 0x24420098  addiu       $v0, $v0, 0x98
    ctx->pc = 0x15b844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
label_15b848:
    // 0x15b848: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15b848u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15b84c:
    // 0x15b84c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15b84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15b850:
    // 0x15b850: 0x60f809  jalr        $v1
label_15b854:
    if (ctx->pc == 0x15B854u) {
        ctx->pc = 0x15B854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B850u;
        // 0x15b854: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B858u;
        goto label_15b858;
    }
    ctx->pc = 0x15B850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15B858u);
        ctx->pc = 0x15B854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B850u;
        // 0x15b854: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B850u, 0x15B858u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15B858u;
label_15b858:
    // 0x15b858: 0xaea00024  sw          $zero, 0x24($s5)
    ctx->pc = 0x15b858u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 0));
label_15b85c:
    // 0x15b85c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x15b85cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15b860:
    // 0x15b860: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x15b860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_15b864:
    // 0x15b864: 0xaea20020  sw          $v0, 0x20($s5)
    ctx->pc = 0x15b864u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 2));
label_15b868:
    // 0x15b868: 0xaeb00014  sw          $s0, 0x14($s5)
    ctx->pc = 0x15b868u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 16));
label_15b86c:
    // 0x15b86c: 0x12e0000a  beqz        $s7, . + 4 + (0xA << 2)
label_15b870:
    if (ctx->pc == 0x15B870u) {
        ctx->pc = 0x15B870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B86Cu;
        // 0x15b870: 0xaea30030  sw          $v1, 0x30($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B874u;
        goto label_15b874;
    }
    ctx->pc = 0x15B86Cu;
    {
        const bool branch_taken_0x15b86c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B86Cu;
        // 0x15b870: 0xaea30030  sw          $v1, 0x30($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b86c) {
            ctx->pc = 0x15B898u;
            return;
        }
    }
    ctx->pc = 0x15B874u;
label_15b874:
    // 0x15b874: 0x171043  sra         $v0, $s7, 1
    ctx->pc = 0x15b874u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 23), 1));
label_15b878:
    // 0x15b878: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
label_15b87c:
    if (ctx->pc == 0x15B87Cu) {
        ctx->pc = 0x15B87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B878u;
        // 0x15b87c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B880u;
        goto label_fallthrough_0x15b878;
    }
    ctx->pc = 0x15B878u;
    {
        const bool branch_taken_0x15b878 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b878) {
            ctx->pc = 0x15B87Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15B878u;
            // 0x15b87c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x15B880u;
            return;
        }
    }
label_fallthrough_0x15b878:
    ctx->pc = 0x15B880u;
}
