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

// Function: WSpriteDoSequence__FP8WcSprite
// Address: 0x18a7c0 - 0x18a8a8
void WSpriteDoSequence__FP8WcSprite_0x18a7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WSpriteDoSequence__FP8WcSprite_0x18a7c0");
#endif

    switch (ctx->pc) {
        case 0x18a7c0u: goto label_18a7c0;
        case 0x18a7c4u: goto label_18a7c4;
        case 0x18a7c8u: goto label_18a7c8;
        case 0x18a7ccu: goto label_18a7cc;
        case 0x18a7d0u: goto label_18a7d0;
        case 0x18a7d4u: goto label_18a7d4;
        case 0x18a7d8u: goto label_18a7d8;
        case 0x18a7dcu: goto label_18a7dc;
        case 0x18a7e0u: goto label_18a7e0;
        case 0x18a7e4u: goto label_18a7e4;
        case 0x18a7e8u: goto label_18a7e8;
        case 0x18a7ecu: goto label_18a7ec;
        case 0x18a7f0u: goto label_18a7f0;
        case 0x18a7f4u: goto label_18a7f4;
        case 0x18a7f8u: goto label_18a7f8;
        case 0x18a7fcu: goto label_18a7fc;
        case 0x18a800u: goto label_18a800;
        case 0x18a804u: goto label_18a804;
        case 0x18a808u: goto label_18a808;
        case 0x18a80cu: goto label_18a80c;
        case 0x18a810u: goto label_18a810;
        case 0x18a814u: goto label_18a814;
        case 0x18a818u: goto label_18a818;
        case 0x18a81cu: goto label_18a81c;
        case 0x18a820u: goto label_18a820;
        case 0x18a824u: goto label_18a824;
        case 0x18a828u: goto label_18a828;
        case 0x18a82cu: goto label_18a82c;
        case 0x18a830u: goto label_18a830;
        case 0x18a834u: goto label_18a834;
        case 0x18a838u: goto label_18a838;
        case 0x18a83cu: goto label_18a83c;
        case 0x18a840u: goto label_18a840;
        case 0x18a844u: goto label_18a844;
        case 0x18a848u: goto label_18a848;
        case 0x18a84cu: goto label_18a84c;
        case 0x18a850u: goto label_18a850;
        case 0x18a854u: goto label_18a854;
        case 0x18a858u: goto label_18a858;
        case 0x18a85cu: goto label_18a85c;
        case 0x18a860u: goto label_18a860;
        case 0x18a864u: goto label_18a864;
        case 0x18a868u: goto label_18a868;
        case 0x18a86cu: goto label_18a86c;
        case 0x18a870u: goto label_18a870;
        case 0x18a874u: goto label_18a874;
        case 0x18a878u: goto label_18a878;
        case 0x18a87cu: goto label_18a87c;
        case 0x18a880u: goto label_18a880;
        case 0x18a884u: goto label_18a884;
        case 0x18a888u: goto label_18a888;
        case 0x18a88cu: goto label_18a88c;
        case 0x18a890u: goto label_18a890;
        case 0x18a894u: goto label_18a894;
        case 0x18a898u: goto label_18a898;
        case 0x18a89cu: goto label_18a89c;
        case 0x18a8a0u: goto label_18a8a0;
        case 0x18a8a4u: goto label_18a8a4;
        default: break;
    }

    ctx->pc = 0x18a7c0u;

label_18a7c0:
    // 0x18a7c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18a7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_18a7c4:
    // 0x18a7c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18a7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_18a7c8:
    // 0x18a7c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18a7c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18a7cc:
    // 0x18a7cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18a7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_18a7d0:
    // 0x18a7d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18a7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_18a7d4:
    // 0x18a7d4: 0x8e020208  lw          $v0, 0x208($s0)
    ctx->pc = 0x18a7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
label_18a7d8:
    // 0x18a7d8: 0x9443000e  lhu         $v1, 0xE($v0)
    ctx->pc = 0x18a7d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
label_18a7dc:
    // 0x18a7dc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x18a7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18a7e0:
    // 0x18a7e0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18a7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_18a7e4:
    // 0x18a7e4: 0xa38821  addu        $s1, $a1, $v1
    ctx->pc = 0x18a7e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_18a7e8:
    // 0x18a7e8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x18a7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_18a7ec:
    // 0x18a7ec: 0x4610026  bgez        $v1, . + 4 + (0x26 << 2)
label_18a7f0:
    if (ctx->pc == 0x18A7F0u) {
        ctx->pc = 0x18A7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A7ECu;
        // 0x18a7f0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A7F4u;
        goto label_18a7f4;
    }
    ctx->pc = 0x18A7ECu;
    {
        const bool branch_taken_0x18a7ec = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x18A7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A7ECu;
        // 0x18a7f0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a7ec) {
            ctx->pc = 0x18A888u;
            goto label_18a888;
        }
    }
    ctx->pc = 0x18A7F4u;
label_18a7f4:
    // 0x18a7f4: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
label_18a7f8:
    if (ctx->pc == 0x18A7F8u) {
        ctx->pc = 0x18A7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A7F4u;
        // 0x18a7f8: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A7FCu;
        goto label_18a7fc;
    }
    ctx->pc = 0x18A7F4u;
    {
        const bool branch_taken_0x18a7f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18a7f4) {
            ctx->pc = 0x18A7F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A7F4u;
            // 0x18a7f8: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A828u;
            goto label_18a828;
        }
    }
    ctx->pc = 0x18A7FCu;
label_18a7fc:
    // 0x18a7fc: 0xc0684fe  jal         func_1A13F8
label_18a800:
    if (ctx->pc == 0x18A800u) {
        ctx->pc = 0x18A800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A7FCu;
        // 0x18a800: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A804u;
        goto label_18a804;
    }
    ctx->pc = 0x18A7FCu;
    SET_GPR_U32(ctx, 31, 0x18A804u);
    ctx->pc = 0x18A800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A7FCu;
    // 0x18a800: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A13F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A13F8u, 0x18A7FCu, 0x18A804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A804u;
label_18a804:
    // 0x18a804: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x18a804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_18a808:
    // 0x18a808: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18a808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18a80c:
    // 0x18a80c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x18a80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_18a810:
    // 0x18a810: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x18a810u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_18a814:
    // 0x18a814: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x18a814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_18a818:
    // 0x18a818: 0x60f809  jalr        $v1
label_18a81c:
    if (ctx->pc == 0x18A81Cu) {
        ctx->pc = 0x18A81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A818u;
        // 0x18a81c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A820u;
        goto label_18a820;
    }
    ctx->pc = 0x18A818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x18A820u);
        ctx->pc = 0x18A81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A818u;
        // 0x18a81c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A818u, 0x18A820u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18A820u;
label_18a820:
    // 0x18a820: 0x1000001c  b           . + 4 + (0x1C << 2)
label_18a824:
    if (ctx->pc == 0x18A824u) {
        ctx->pc = 0x18A824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A820u;
        // 0x18a824: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A828u;
        goto label_18a828;
    }
    ctx->pc = 0x18A820u;
    {
        const bool branch_taken_0x18a820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A820u;
        // 0x18a824: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a820) {
            ctx->pc = 0x18A894u;
            goto label_18a894;
        }
    }
    ctx->pc = 0x18A828u;
label_18a828:
    // 0x18a828: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
label_18a82c:
    if (ctx->pc == 0x18A82Cu) {
        ctx->pc = 0x18A82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A828u;
        // 0x18a82c: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A830u;
        goto label_18a830;
    }
    ctx->pc = 0x18A828u;
    {
        const bool branch_taken_0x18a828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18a828) {
            ctx->pc = 0x18A82Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A828u;
            // 0x18a82c: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A848u;
            goto label_18a848;
        }
    }
    ctx->pc = 0x18A830u;
label_18a830:
    // 0x18a830: 0xc0684fe  jal         func_1A13F8
label_18a834:
    if (ctx->pc == 0x18A834u) {
        ctx->pc = 0x18A834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A830u;
        // 0x18a834: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A838u;
        goto label_18a838;
    }
    ctx->pc = 0x18A830u;
    SET_GPR_U32(ctx, 31, 0x18A838u);
    ctx->pc = 0x18A834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A830u;
    // 0x18a834: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A13F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A13F8u, 0x18A830u, 0x18A838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A838u;
label_18a838:
    // 0x18a838: 0x8e020208  lw          $v0, 0x208($s0)
    ctx->pc = 0x18a838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
label_18a83c:
    // 0x18a83c: 0x10000012  b           . + 4 + (0x12 << 2)
label_18a840:
    if (ctx->pc == 0x18A840u) {
        ctx->pc = 0x18A840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A83Cu;
        // 0x18a840: 0xa440000e  sh          $zero, 0xE($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A844u;
        goto label_18a844;
    }
    ctx->pc = 0x18A83Cu;
    {
        const bool branch_taken_0x18a83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A83Cu;
        // 0x18a840: 0xa440000e  sh          $zero, 0xE($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a83c) {
            ctx->pc = 0x18A888u;
            goto label_18a888;
        }
    }
    ctx->pc = 0x18A844u;
label_18a844:
    // 0x18a844: 0x0  nop
    ctx->pc = 0x18a844u;
    // NOP
label_18a848:
    // 0x18a848: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_18a84c:
    if (ctx->pc == 0x18A84Cu) {
        ctx->pc = 0x18A84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A848u;
        // 0x18a84c: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A850u;
        goto label_18a850;
    }
    ctx->pc = 0x18A848u;
    {
        const bool branch_taken_0x18a848 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18a848) {
            ctx->pc = 0x18A84Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A848u;
            // 0x18a84c: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A870u;
            goto label_18a870;
        }
    }
    ctx->pc = 0x18A850u;
label_18a850:
    // 0x18a850: 0xc0684fe  jal         func_1A13F8
label_18a854:
    if (ctx->pc == 0x18A854u) {
        ctx->pc = 0x18A854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A850u;
        // 0x18a854: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A858u;
        goto label_18a858;
    }
    ctx->pc = 0x18A850u;
    SET_GPR_U32(ctx, 31, 0x18A858u);
    ctx->pc = 0x18A854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A850u;
    // 0x18a854: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A13F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A13F8u, 0x18A850u, 0x18A858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A858u;
label_18a858:
    // 0x18a858: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18a858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18a85c:
    // 0x18a85c: 0xc062d1e  jal         func_18B478
label_18a860:
    if (ctx->pc == 0x18A860u) {
        ctx->pc = 0x18A860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A85Cu;
        // 0x18a860: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A864u;
        goto label_18a864;
    }
    ctx->pc = 0x18A85Cu;
    SET_GPR_U32(ctx, 31, 0x18A864u);
    ctx->pc = 0x18A860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A85Cu;
    // 0x18a860: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B478u, 0x18A85Cu, 0x18A864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A864u;
label_18a864:
    // 0x18a864: 0x1000000b  b           . + 4 + (0xB << 2)
label_18a868:
    if (ctx->pc == 0x18A868u) {
        ctx->pc = 0x18A868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A864u;
        // 0x18a868: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A86Cu;
        goto label_18a86c;
    }
    ctx->pc = 0x18A864u;
    {
        const bool branch_taken_0x18a864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A864u;
        // 0x18a868: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a864) {
            ctx->pc = 0x18A894u;
            goto label_18a894;
        }
    }
    ctx->pc = 0x18A86Cu;
label_18a86c:
    // 0x18a86c: 0x0  nop
    ctx->pc = 0x18a86cu;
    // NOP
label_18a870:
    // 0x18a870: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_18a874:
    if (ctx->pc == 0x18A874u) {
        ctx->pc = 0x18A878u;
        goto label_18a878;
    }
    ctx->pc = 0x18A870u;
    {
        const bool branch_taken_0x18a870 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18a870) {
            ctx->pc = 0x18A888u;
            goto label_18a888;
        }
    }
    ctx->pc = 0x18A878u;
label_18a878:
    // 0x18a878: 0xc0684fe  jal         func_1A13F8
label_18a87c:
    if (ctx->pc == 0x18A87Cu) {
        ctx->pc = 0x18A87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A878u;
        // 0x18a87c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A880u;
        goto label_18a880;
    }
    ctx->pc = 0x18A878u;
    SET_GPR_U32(ctx, 31, 0x18A880u);
    ctx->pc = 0x18A87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A878u;
    // 0x18a87c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A13F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A13F8u, 0x18A878u, 0x18A880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A880u;
label_18a880:
    // 0x18a880: 0x10000004  b           . + 4 + (0x4 << 2)
label_18a884:
    if (ctx->pc == 0x18A884u) {
        ctx->pc = 0x18A884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A880u;
        // 0x18a884: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A888u;
        goto label_18a888;
    }
    ctx->pc = 0x18A880u;
    {
        const bool branch_taken_0x18a880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A880u;
        // 0x18a884: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a880) {
            ctx->pc = 0x18A894u;
            goto label_18a894;
        }
    }
    ctx->pc = 0x18A888u;
label_18a888:
    // 0x18a888: 0xc0629a2  jal         func_18A688
label_18a88c:
    if (ctx->pc == 0x18A88Cu) {
        ctx->pc = 0x18A88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A888u;
        // 0x18a88c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A890u;
        goto label_18a890;
    }
    ctx->pc = 0x18A888u;
    SET_GPR_U32(ctx, 31, 0x18A890u);
    ctx->pc = 0x18A88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A888u;
    // 0x18a88c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A688u, 0x18A888u, 0x18A890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A890u;
label_18a890:
    // 0x18a890: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18a890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18a894:
    // 0x18a894: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18a894u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18a898:
    // 0x18a898: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18a898u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_18a89c:
    // 0x18a89c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18a89cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18a8a0:
    // 0x18a8a0: 0x3e00008  jr          $ra
label_18a8a4:
    if (ctx->pc == 0x18A8A4u) {
        ctx->pc = 0x18A8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A8A0u;
        // 0x18a8a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A8A8u;
        goto label_fallthrough_0x18a8a0;
    }
    ctx->pc = 0x18A8A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A8A0u;
        // 0x18a8a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A8A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18a8a0:
    ctx->pc = 0x18A8A8u;
}
