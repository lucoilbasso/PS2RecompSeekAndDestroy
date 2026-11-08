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

// Function: ApMarkerCreate__FP8WcEntityP9FVector32fP7Color32
// Address: 0x145620 - 0x145740
void ApMarkerCreate__FP8WcEntityP9FVector32fP7Color32_0x145620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApMarkerCreate__FP8WcEntityP9FVector32fP7Color32_0x145620");
#endif

    switch (ctx->pc) {
        case 0x145620u: goto label_145620;
        case 0x145624u: goto label_145624;
        case 0x145628u: goto label_145628;
        case 0x14562cu: goto label_14562c;
        case 0x145630u: goto label_145630;
        case 0x145634u: goto label_145634;
        case 0x145638u: goto label_145638;
        case 0x14563cu: goto label_14563c;
        case 0x145640u: goto label_145640;
        case 0x145644u: goto label_145644;
        case 0x145648u: goto label_145648;
        case 0x14564cu: goto label_14564c;
        case 0x145650u: goto label_145650;
        case 0x145654u: goto label_145654;
        case 0x145658u: goto label_145658;
        case 0x14565cu: goto label_14565c;
        case 0x145660u: goto label_145660;
        case 0x145664u: goto label_145664;
        case 0x145668u: goto label_145668;
        case 0x14566cu: goto label_14566c;
        case 0x145670u: goto label_145670;
        case 0x145674u: goto label_145674;
        case 0x145678u: goto label_145678;
        case 0x14567cu: goto label_14567c;
        case 0x145680u: goto label_145680;
        case 0x145684u: goto label_145684;
        case 0x145688u: goto label_145688;
        case 0x14568cu: goto label_14568c;
        case 0x145690u: goto label_145690;
        case 0x145694u: goto label_145694;
        case 0x145698u: goto label_145698;
        case 0x14569cu: goto label_14569c;
        case 0x1456a0u: goto label_1456a0;
        case 0x1456a4u: goto label_1456a4;
        case 0x1456a8u: goto label_1456a8;
        case 0x1456acu: goto label_1456ac;
        case 0x1456b0u: goto label_1456b0;
        case 0x1456b4u: goto label_1456b4;
        case 0x1456b8u: goto label_1456b8;
        case 0x1456bcu: goto label_1456bc;
        case 0x1456c0u: goto label_1456c0;
        case 0x1456c4u: goto label_1456c4;
        case 0x1456c8u: goto label_1456c8;
        case 0x1456ccu: goto label_1456cc;
        case 0x1456d0u: goto label_1456d0;
        case 0x1456d4u: goto label_1456d4;
        case 0x1456d8u: goto label_1456d8;
        case 0x1456dcu: goto label_1456dc;
        case 0x1456e0u: goto label_1456e0;
        case 0x1456e4u: goto label_1456e4;
        case 0x1456e8u: goto label_1456e8;
        case 0x1456ecu: goto label_1456ec;
        case 0x1456f0u: goto label_1456f0;
        case 0x1456f4u: goto label_1456f4;
        case 0x1456f8u: goto label_1456f8;
        case 0x1456fcu: goto label_1456fc;
        case 0x145700u: goto label_145700;
        case 0x145704u: goto label_145704;
        case 0x145708u: goto label_145708;
        case 0x14570cu: goto label_14570c;
        case 0x145710u: goto label_145710;
        case 0x145714u: goto label_145714;
        case 0x145718u: goto label_145718;
        case 0x14571cu: goto label_14571c;
        case 0x145720u: goto label_145720;
        case 0x145724u: goto label_145724;
        case 0x145728u: goto label_145728;
        case 0x14572cu: goto label_14572c;
        case 0x145730u: goto label_145730;
        case 0x145734u: goto label_145734;
        case 0x145738u: goto label_145738;
        case 0x14573cu: goto label_14573c;
        default: break;
    }

    ctx->pc = 0x145620u;

label_145620:
    // 0x145620: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x145620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_145624:
    // 0x145624: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x145624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_145628:
    // 0x145628: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x145628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_14562c:
    // 0x14562c: 0x27918a70  addiu       $s1, $gp, -0x7590
    ctx->pc = 0x14562cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937200));
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
        goto label_14571c;
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
    ctx->pc = 0x14571Cu;
label_14571c:
    // 0x14571c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14571cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_145720:
    // 0x145720: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x145720u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_145724:
    // 0x145724: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x145724u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_145728:
    // 0x145728: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x145728u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_14572c:
    // 0x14572c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x14572cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_145730:
    // 0x145730: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x145730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_145734:
    // 0x145734: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x145734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_145738:
    // 0x145738: 0x3e00008  jr          $ra
label_14573c:
    if (ctx->pc == 0x14573Cu) {
        ctx->pc = 0x14573Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145738u;
        // 0x14573c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145740u;
        goto label_fallthrough_0x145738;
    }
    ctx->pc = 0x145738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14573Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145738u;
        // 0x14573c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x145738:
    ctx->pc = 0x145740u;
}
