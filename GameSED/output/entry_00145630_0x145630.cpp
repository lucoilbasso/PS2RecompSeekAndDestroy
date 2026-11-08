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

// Function: entry_00145630
// Address: 0x145630 - 0x14571c
void entry_00145630_0x145630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145630_0x145630");
#endif

    switch (ctx->pc) {
        case 0x145664u: goto label_145664;
        case 0x14566cu: goto label_14566c;
        case 0x145688u: goto label_145688;
        case 0x1456a8u: goto label_1456a8;
        case 0x1456c4u: goto label_1456c4;
        case 0x1456e0u: goto label_1456e0;
        case 0x1456fcu: goto label_1456fc;
        default: break;
    }

    ctx->pc = 0x145630u;

label_145630:
    // 0x145630: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x145630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_145634:
    // 0x145634: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x145634u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_145638:
    // 0x145638: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x145638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_14563c:
    // 0x14563c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x14563cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_145640:
    // 0x145640: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x145640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_145644:
    // 0x145644: 0xc6880b  movn        $s1, $a2, $a2
    ctx->pc = 0x145644u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 6));
label_145648:
    // 0x145648: 0xe7b40038  swc1        $f20, 0x38($sp)
    ctx->pc = 0x145648u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_14564c:
    // 0x14564c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x14564cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_145650:
    // 0x145650: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x145650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_145654:
    // 0x145654: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x145654u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_145658:
    // 0x145658: 0x8c500028  lw          $s0, 0x28($v0)
    ctx->pc = 0x145658u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_14565c:
    // 0x14565c: 0xc06bd28  jal         func_1AF4A0
label_145660:
    if (ctx->pc == 0x145660u) {
        ctx->pc = 0x145660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14565Cu;
        // 0x145660: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145664u;
        goto label_145664;
    }
    ctx->pc = 0x14565Cu;
    SET_GPR_U32(ctx, 31, 0x145664u);
    ctx->pc = 0x145660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14565Cu;
    // 0x145660: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x14565Cu, 0x145664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145664u;
label_145664:
    // 0x145664: 0xc06bd20  jal         func_1AF480
label_145668:
    if (ctx->pc == 0x145668u) {
        ctx->pc = 0x145668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145664u;
        // 0x145668: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14566Cu;
        goto label_14566c;
    }
    ctx->pc = 0x145664u;
    SET_GPR_U32(ctx, 31, 0x14566Cu);
    ctx->pc = 0x145668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145664u;
    // 0x145668: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x145664u, 0x14566Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14566Cu;
label_14566c:
    // 0x14566c: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x14566cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_145670:
    // 0x145670: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x145670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_145674:
    // 0x145674: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x145674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_145678:
    // 0x145678: 0x24840420  addiu       $a0, $a0, 0x420
    ctx->pc = 0x145678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1056));
label_14567c:
    // 0x14567c: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x14567cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_145680:
    // 0x145680: 0xc06448c  jal         func_191230
label_145684:
    if (ctx->pc == 0x145684u) {
        ctx->pc = 0x145684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145680u;
        // 0x145684: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x145688u;
        goto label_145688;
    }
    ctx->pc = 0x145680u;
    SET_GPR_U32(ctx, 31, 0x145688u);
    ctx->pc = 0x145684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145680u;
    // 0x145684: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x191230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191230u, 0x145680u, 0x145688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145688u;
label_145688:
    // 0x145688: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x145688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14568c:
    // 0x14568c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14568cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_145690:
    // 0x145690: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x145690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_145694:
    // 0x145694: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x145694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_145698:
    // 0x145698: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x145698u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14569c:
    // 0x14569c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14569cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1456a0:
    // 0x1456a0: 0x60f809  jalr        $v1
label_1456a4:
    if (ctx->pc == 0x1456A4u) {
        ctx->pc = 0x1456A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1456A0u;
        // 0x1456a4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1456A8u;
        goto label_1456a8;
    }
    ctx->pc = 0x1456A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1456A8u);
        ctx->pc = 0x1456A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1456A0u;
        // 0x1456a4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1456A0u, 0x1456A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1456A8u;
label_1456a8:
    // 0x1456a8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1456a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1456ac:
    // 0x1456ac: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x1456acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1456b0:
    // 0x1456b0: 0x24420088  addiu       $v0, $v0, 0x88
    ctx->pc = 0x1456b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
label_1456b4:
    // 0x1456b4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1456b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1456b8:
    // 0x1456b8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1456b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1456bc:
    // 0x1456bc: 0x60f809  jalr        $v1
label_1456c0:
    if (ctx->pc == 0x1456C0u) {
        ctx->pc = 0x1456C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1456BCu;
        // 0x1456c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1456C4u;
        goto label_1456c4;
    }
    ctx->pc = 0x1456BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1456C4u);
        ctx->pc = 0x1456C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1456BCu;
        // 0x1456c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1456BCu, 0x1456C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1456C4u;
label_1456c4:
    // 0x1456c4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1456c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1456c8:
    // 0x1456c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1456c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1456cc:
    // 0x1456cc: 0x24420098  addiu       $v0, $v0, 0x98
    ctx->pc = 0x1456ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
label_1456d0:
    // 0x1456d0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1456d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1456d4:
    // 0x1456d4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1456d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1456d8:
    // 0x1456d8: 0x60f809  jalr        $v1
label_1456dc:
    if (ctx->pc == 0x1456DCu) {
        ctx->pc = 0x1456DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1456D8u;
        // 0x1456dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1456E0u;
        goto label_1456e0;
    }
    ctx->pc = 0x1456D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1456E0u);
        ctx->pc = 0x1456DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1456D8u;
        // 0x1456dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1456D8u, 0x1456E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1456E0u;
label_1456e0:
    // 0x1456e0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1456e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1456e4:
    // 0x1456e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1456e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1456e8:
    // 0x1456e8: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x1456e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_1456ec:
    // 0x1456ec: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1456ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1456f0:
    // 0x1456f0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1456f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1456f4:
    // 0x1456f4: 0x60f809  jalr        $v1
label_1456f8:
    if (ctx->pc == 0x1456F8u) {
        ctx->pc = 0x1456F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1456F4u;
        // 0x1456f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1456FCu;
        goto label_1456fc;
    }
    ctx->pc = 0x1456F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1456FCu);
        ctx->pc = 0x1456F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1456F4u;
        // 0x1456f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1456F4u, 0x1456FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1456FCu;
label_1456fc:
    // 0x1456fc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1456fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_145700:
    // 0x145700: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x145700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_145704:
    // 0x145704: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x145704u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_145708:
    // 0x145708: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x145708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_14570c:
    // 0x14570c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14570cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_145710:
    // 0x145710: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x145710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_145714:
    // 0x145714: 0x60f809  jalr        $v1
label_145718:
    if (ctx->pc == 0x145718u) {
        ctx->pc = 0x145718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145714u;
        // 0x145718: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14571Cu;
        goto label_fallthrough_0x145714;
    }
    ctx->pc = 0x145714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14571Cu);
        ctx->pc = 0x145718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145714u;
        // 0x145718: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145714u, 0x14571Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x145714:
    ctx->pc = 0x14571Cu;
}
