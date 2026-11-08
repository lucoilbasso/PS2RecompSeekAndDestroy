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

// Function: entry_0015b60c
// Address: 0x15b60c - 0x15b7cc
void entry_0015b60c_0x15b60c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b60c_0x15b60c");
#endif

    switch (ctx->pc) {
        case 0x15b640u: goto label_15b640;
        case 0x15b674u: goto label_15b674;
        case 0x15b688u: goto label_15b688;
        case 0x15b690u: goto label_15b690;
        case 0x15b6b0u: goto label_15b6b0;
        case 0x15b6b8u: goto label_15b6b8;
        case 0x15b6e0u: goto label_15b6e0;
        case 0x15b6f0u: goto label_15b6f0;
        case 0x15b70cu: goto label_15b70c;
        default: break;
    }

    ctx->pc = 0x15b60cu;

label_15b60c:
    // 0x15b60c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x15b60cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15b610:
    // 0x15b610: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x15b610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_15b614:
    // 0x15b614: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x15b614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15b618:
    // 0x15b618: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15b618u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b61c:
    // 0x15b61c: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x15b61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_15b620:
    // 0x15b620: 0x24630048  addiu       $v1, $v1, 0x48
    ctx->pc = 0x15b620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
label_15b624:
    // 0x15b624: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x15b624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_15b628:
    // 0x15b628: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x15b628u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_15b62c:
    // 0x15b62c: 0xae22012c  sw          $v0, 0x12C($s1)
    ctx->pc = 0x15b62cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
label_15b630:
    // 0x15b630: 0xaeb10000  sw          $s1, 0x0($s5)
    ctx->pc = 0x15b630u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 17));
label_15b634:
    // 0x15b634: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x15b634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_15b638:
    // 0x15b638: 0x40f809  jalr        $v0
label_15b63c:
    if (ctx->pc == 0x15B63Cu) {
        ctx->pc = 0x15B63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B638u;
        // 0x15b63c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B640u;
        goto label_15b640;
    }
    ctx->pc = 0x15B638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15B640u);
        ctx->pc = 0x15B63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B638u;
        // 0x15b63c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B638u, 0x15B640u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15B640u;
label_15b640:
    // 0x15b640: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x15b640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15b644:
    // 0x15b644: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x15b644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_15b648:
    // 0x15b648: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x15b648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_15b64c:
    // 0x15b64c: 0x8e86001c  lw          $a2, 0x1C($s4)
    ctx->pc = 0x15b64cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_15b650:
    // 0x15b650: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x15b650u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_15b654:
    // 0x15b654: 0x3c52821  addu        $a1, $fp, $a1
    ctx->pc = 0x15b654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
label_15b658:
    // 0x15b658: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x15b658u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_15b65c:
    // 0x15b65c: 0x26940050  addiu       $s4, $s4, 0x50
    ctx->pc = 0x15b65cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
label_15b660:
    // 0x15b660: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x15b660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_15b664:
    // 0x15b664: 0x26930008  addiu       $s3, $s4, 0x8
    ctx->pc = 0x15b664u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_15b668:
    // 0x15b668: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x15b668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_15b66c:
    // 0x15b66c: 0xe0f809  jalr        $a3
label_15b670:
    if (ctx->pc == 0x15B670u) {
        ctx->pc = 0x15B670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B66Cu;
        // 0x15b670: 0x663021  addu        $a2, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B674u;
        goto label_15b674;
    }
    ctx->pc = 0x15B66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x15B674u);
        ctx->pc = 0x15B670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B66Cu;
        // 0x15b670: 0x663021  addu        $a2, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B66Cu, 0x15B674u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15B674u;
label_15b674:
    // 0x15b674: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x15b674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_15b678:
    // 0x15b678: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x15b678u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15b67c:
    // 0x15b67c: 0x8c510024  lw          $s1, 0x24($v0)
    ctx->pc = 0x15b67cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_15b680:
    // 0x15b680: 0xc06bd28  jal         func_1AF4A0
label_15b684:
    if (ctx->pc == 0x15B684u) {
        ctx->pc = 0x15B684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B680u;
        // 0x15b684: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B688u;
        goto label_15b688;
    }
    ctx->pc = 0x15B680u;
    SET_GPR_U32(ctx, 31, 0x15B688u);
    ctx->pc = 0x15B684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B680u;
    // 0x15b684: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x15B680u, 0x15B688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B688u;
label_15b688:
    // 0x15b688: 0xc06bd20  jal         func_1AF480
label_15b68c:
    if (ctx->pc == 0x15B68Cu) {
        ctx->pc = 0x15B68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B688u;
        // 0x15b68c: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B690u;
        goto label_15b690;
    }
    ctx->pc = 0x15B688u;
    SET_GPR_U32(ctx, 31, 0x15B690u);
    ctx->pc = 0x15B68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B688u;
    // 0x15b68c: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x15B688u, 0x15B690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B690u;
label_15b690:
    // 0x15b690: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x15b690u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_15b694:
    // 0x15b694: 0x8e300028  lw          $s0, 0x28($s1)
    ctx->pc = 0x15b694u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_15b698:
    // 0x15b698: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15b698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15b69c:
    // 0x15b69c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15b69cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15b6a0:
    // 0x15b6a0: 0x24040076  addiu       $a0, $zero, 0x76
    ctx->pc = 0x15b6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_15b6a4:
    // 0x15b6a4: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x15b6a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_15b6a8:
    // 0x15b6a8: 0xc0682b2  jal         func_1A0AC8
label_15b6ac:
    if (ctx->pc == 0x15B6ACu) {
        ctx->pc = 0x15B6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B6A8u;
        // 0x15b6ac: 0x8e910020  lw          $s1, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B6B0u;
        goto label_15b6b0;
    }
    ctx->pc = 0x15B6A8u;
    SET_GPR_U32(ctx, 31, 0x15B6B0u);
    ctx->pc = 0x15B6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B6A8u;
    // 0x15b6ac: 0x8e910020  lw          $s1, 0x20($s4) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x15B6A8u, 0x15B6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B6B0u;
label_15b6b0:
    // 0x15b6b0: 0xc0682b6  jal         func_1A0AD8
label_15b6b4:
    if (ctx->pc == 0x15B6B4u) {
        ctx->pc = 0x15B6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B6B0u;
        // 0x15b6b4: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B6B8u;
        goto label_15b6b8;
    }
    ctx->pc = 0x15B6B0u;
    SET_GPR_U32(ctx, 31, 0x15B6B8u);
    ctx->pc = 0x15B6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B6B0u;
    // 0x15b6b4: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x15B6B0u, 0x15B6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B6B8u;
label_15b6b8:
    // 0x15b6b8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x15b6b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15b6bc:
    // 0x15b6bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15b6bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15b6c0:
    // 0x15b6c0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x15b6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_15b6c4:
    // 0x15b6c4: 0x244201c0  addiu       $v0, $v0, 0x1C0
    ctx->pc = 0x15b6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
label_15b6c8:
    // 0x15b6c8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x15b6c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_15b6cc:
    // 0x15b6cc: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x15b6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_15b6d0:
    // 0x15b6d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15b6d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15b6d4:
    // 0x15b6d4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x15b6d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15b6d8:
    // 0x15b6d8: 0xc062cb0  jal         func_18B2C0
label_15b6dc:
    if (ctx->pc == 0x15B6DCu) {
        ctx->pc = 0x15B6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B6D8u;
        // 0x15b6dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B6E0u;
        goto label_15b6e0;
    }
    ctx->pc = 0x15B6D8u;
    SET_GPR_U32(ctx, 31, 0x15B6E0u);
    ctx->pc = 0x15B6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B6D8u;
    // 0x15b6dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B2C0u, 0x15B6D8u, 0x15B6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B6E0u;
label_15b6e0:
    // 0x15b6e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15b6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15b6e4:
    // 0x15b6e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15b6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15b6e8:
    // 0x15b6e8: 0xc06825c  jal         func_1A0970
label_15b6ec:
    if (ctx->pc == 0x15B6ECu) {
        ctx->pc = 0x15B6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B6E8u;
        // 0x15b6ec: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B6F0u;
        goto label_15b6f0;
    }
    ctx->pc = 0x15B6E8u;
    SET_GPR_U32(ctx, 31, 0x15B6F0u);
    ctx->pc = 0x15B6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B6E8u;
    // 0x15b6ec: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x15B6E8u, 0x15B6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B6F0u;
label_15b6f0:
    // 0x15b6f0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15b6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15b6f4:
    // 0x15b6f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15b6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15b6f8:
    // 0x15b6f8: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x15b6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_15b6fc:
    // 0x15b6fc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15b6fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15b700:
    // 0x15b700: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15b700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15b704:
    // 0x15b704: 0x60f809  jalr        $v1
label_15b708:
    if (ctx->pc == 0x15B708u) {
        ctx->pc = 0x15B708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B704u;
        // 0x15b708: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B70Cu;
        goto label_15b70c;
    }
    ctx->pc = 0x15B704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15B70Cu);
        ctx->pc = 0x15B708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B704u;
        // 0x15b708: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B704u, 0x15B70Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15B70Cu;
label_15b70c:
    // 0x15b70c: 0xde820010  ld          $v0, 0x10($s4)
    ctx->pc = 0x15b70cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 16)));
label_15b710:
    // 0x15b710: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_15b714:
    if (ctx->pc == 0x15B714u) {
        ctx->pc = 0x15B714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B710u;
        // 0x15b714: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B718u;
        goto label_15b718;
    }
    ctx->pc = 0x15B710u;
    {
        const bool branch_taken_0x15b710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B710u;
        // 0x15b714: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b710) {
            ctx->pc = 0x15B7CCu;
            return;
        }
    }
    ctx->pc = 0x15B718u;
label_15b718:
    // 0x15b718: 0x9682000c  lhu         $v0, 0xC($s4)
    ctx->pc = 0x15b718u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_15b71c:
    // 0x15b71c: 0x9683000e  lhu         $v1, 0xE($s4)
    ctx->pc = 0x15b71cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
label_15b720:
    // 0x15b720: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x15b720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_15b724:
    // 0x15b724: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x15b724u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_15b728:
    // 0x15b728: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x15b728u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_15b72c:
    // 0x15b72c: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x15b72cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_15b730:
    // 0x15b730: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x15b730u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_15b734:
    // 0x15b734: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x15b734u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_15b738:
    // 0x15b738: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x15b738u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
label_15b73c:
    // 0x15b73c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15b73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15b740:
    // 0x15b740: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15b740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15b744:
    // 0x15b744: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15b744u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15b748:
    // 0x15b748: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15b748u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_15b74c:
    // 0x15b74c: 0xa506000e  sh          $a2, 0xE($t0)
    ctx->pc = 0x15b74cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 6));
label_15b750:
    // 0x15b750: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15b750u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15b754:
    // 0x15b754: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15b754u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_15b758:
    // 0x15b758: 0x26070180  addiu       $a3, $s0, 0x180
    ctx->pc = 0x15b758u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
label_15b75c:
    // 0x15b75c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x15b75cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_15b760:
    // 0x15b760: 0xe5010020  swc1        $f1, 0x20($t0)
    ctx->pc = 0x15b760u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
label_15b764:
    // 0x15b764: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x15b764u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_15b768:
    // 0x15b768: 0xe5000024  swc1        $f0, 0x24($t0)
    ctx->pc = 0x15b768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
label_15b76c:
    // 0x15b76c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15b76cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_15b770:
    // 0x15b770: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x15b770u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15b774:
    // 0x15b774: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15b774u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15b778:
    // 0x15b778: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15b778u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15b77c:
    // 0x15b77c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15b77cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15b780:
    // 0x15b780: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15b780u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15b784:
    // 0x15b784: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15b784u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15b788:
    // 0x15b788: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15b788u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15b78c:
    // 0x15b78c: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x15b78cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_15b790:
    // 0x15b790: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x15b790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_15b794:
    // 0x15b794: 0xc501002c  lwc1        $f1, 0x2C($t0)
    ctx->pc = 0x15b794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15b798:
    // 0x15b798: 0xc5000028  lwc1        $f0, 0x28($t0)
    ctx->pc = 0x15b798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15b79c:
    // 0x15b79c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15b79cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15b7a0:
    // 0x15b7a0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x15b7a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15b7a4:
    // 0x15b7a4: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15b7a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15b7a8:
    // 0x15b7a8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15b7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15b7ac:
    // 0x15b7ac: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15b7acu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15b7b0:
    // 0x15b7b0: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15b7b0u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15b7b4:
    // 0x15b7b4: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15b7b4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15b7b8:
    // 0x15b7b8: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x15b7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_15b7bc:
    // 0x15b7bc: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15b7bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_15b7c0:
    // 0x15b7c0: 0xd8e30000  lqc2        $vf3, 0x0($a3)
    ctx->pc = 0x15b7c0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_15b7c4:
    // 0x15b7c4: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15b7c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_15b7c8:
    // 0x15b7c8: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15b7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    ctx->pc = 0x15b7ccu;
}
