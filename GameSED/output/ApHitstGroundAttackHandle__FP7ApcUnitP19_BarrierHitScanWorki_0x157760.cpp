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

// Function: ApHitstGroundAttackHandle__FP7ApcUnitP19_BarrierHitScanWorki
// Address: 0x157760 - 0x157828
void ApHitstGroundAttackHandle__FP7ApcUnitP19_BarrierHitScanWorki_0x157760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApHitstGroundAttackHandle__FP7ApcUnitP19_BarrierHitScanWorki_0x157760");
#endif

    switch (ctx->pc) {
        case 0x157760u: goto label_157760;
        case 0x157764u: goto label_157764;
        case 0x157768u: goto label_157768;
        case 0x15776cu: goto label_15776c;
        case 0x157770u: goto label_157770;
        case 0x157774u: goto label_157774;
        case 0x157778u: goto label_157778;
        case 0x15777cu: goto label_15777c;
        case 0x157780u: goto label_157780;
        case 0x157784u: goto label_157784;
        case 0x157788u: goto label_157788;
        case 0x15778cu: goto label_15778c;
        case 0x157790u: goto label_157790;
        case 0x157794u: goto label_157794;
        case 0x157798u: goto label_157798;
        case 0x15779cu: goto label_15779c;
        case 0x1577a0u: goto label_1577a0;
        case 0x1577a4u: goto label_1577a4;
        case 0x1577a8u: goto label_1577a8;
        case 0x1577acu: goto label_1577ac;
        case 0x1577b0u: goto label_1577b0;
        case 0x1577b4u: goto label_1577b4;
        case 0x1577b8u: goto label_1577b8;
        case 0x1577bcu: goto label_1577bc;
        case 0x1577c0u: goto label_1577c0;
        case 0x1577c4u: goto label_1577c4;
        case 0x1577c8u: goto label_1577c8;
        case 0x1577ccu: goto label_1577cc;
        case 0x1577d0u: goto label_1577d0;
        case 0x1577d4u: goto label_1577d4;
        case 0x1577d8u: goto label_1577d8;
        case 0x1577dcu: goto label_1577dc;
        case 0x1577e0u: goto label_1577e0;
        case 0x1577e4u: goto label_1577e4;
        case 0x1577e8u: goto label_1577e8;
        case 0x1577ecu: goto label_1577ec;
        case 0x1577f0u: goto label_1577f0;
        case 0x1577f4u: goto label_1577f4;
        case 0x1577f8u: goto label_1577f8;
        case 0x1577fcu: goto label_1577fc;
        case 0x157800u: goto label_157800;
        case 0x157804u: goto label_157804;
        case 0x157808u: goto label_157808;
        case 0x15780cu: goto label_15780c;
        case 0x157810u: goto label_157810;
        case 0x157814u: goto label_157814;
        case 0x157818u: goto label_157818;
        case 0x15781cu: goto label_15781c;
        case 0x157820u: goto label_157820;
        case 0x157824u: goto label_157824;
        default: break;
    }

    ctx->pc = 0x157760u;

label_157760:
    // 0x157760: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x157760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_157764:
    // 0x157764: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x157764u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_157768:
    // 0x157768: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x157768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15776c:
    // 0x15776c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x15776cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_157770:
    // 0x157770: 0x8d050044  lw          $a1, 0x44($t0)
    ctx->pc = 0x157770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 68)));
label_157774:
    // 0x157774: 0x8ce40160  lw          $a0, 0x160($a3)
    ctx->pc = 0x157774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 352)));
label_157778:
    // 0x157778: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
label_15777c:
    if (ctx->pc == 0x15777Cu) {
        ctx->pc = 0x15777Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157778u;
        // 0x15777c: 0xc4e000e0  lwc1        $f0, 0xE0($a3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x157780u;
        goto label_157780;
    }
    ctx->pc = 0x157778u;
    {
        const bool branch_taken_0x157778 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x15777Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157778u;
        // 0x15777c: 0xc4e000e0  lwc1        $f0, 0xE0($a3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x157778) {
            ctx->pc = 0x1577B0u;
            goto label_1577b0;
        }
    }
    ctx->pc = 0x157780u;
label_157780:
    // 0x157780: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x157780u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_157784:
    // 0x157784: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x157784u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_157788:
    // 0x157788: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x157788u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
label_15778c:
    // 0x15778c: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x15778cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
label_157790:
    // 0x157790: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x157790u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
label_157794:
    // 0x157794: 0xfc820010  sd          $v0, 0x10($a0)
    ctx->pc = 0x157794u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
label_157798:
    // 0x157798: 0xdca30018  ld          $v1, 0x18($a1)
    ctx->pc = 0x157798u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 24)));
label_15779c:
    // 0x15779c: 0xfc830018  sd          $v1, 0x18($a0)
    ctx->pc = 0x15779cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 3));
label_1577a0:
    // 0x1577a0: 0xdca20020  ld          $v0, 0x20($a1)
    ctx->pc = 0x1577a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 32)));
label_1577a4:
    // 0x1577a4: 0xfc820020  sd          $v0, 0x20($a0)
    ctx->pc = 0x1577a4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 2));
label_1577a8:
    // 0x1577a8: 0xdca30028  ld          $v1, 0x28($a1)
    ctx->pc = 0x1577a8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 40)));
label_1577ac:
    // 0x1577ac: 0xfc830028  sd          $v1, 0x28($a0)
    ctx->pc = 0x1577acu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 3));
label_1577b0:
    // 0x1577b0: 0x90820020  lbu         $v0, 0x20($a0)
    ctx->pc = 0x1577b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
label_1577b4:
    // 0x1577b4: 0x24850070  addiu       $a1, $a0, 0x70
    ctx->pc = 0x1577b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_1577b8:
    // 0x1577b8: 0xe4800098  swc1        $f0, 0x98($a0)
    ctx->pc = 0x1577b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
label_1577bc:
    // 0x1577bc: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x1577bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_1577c0:
    // 0x1577c0: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x1577c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1577c4:
    // 0x1577c4: 0xa0820020  sb          $v0, 0x20($a0)
    ctx->pc = 0x1577c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 2));
label_1577c8:
    // 0x1577c8: 0xac800090  sw          $zero, 0x90($a0)
    ctx->pc = 0x1577c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
label_1577cc:
    // 0x1577cc: 0xc4e000e0  lwc1        $f0, 0xE0($a3)
    ctx->pc = 0x1577ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1577d0:
    // 0x1577d0: 0xac800094  sw          $zero, 0x94($a0)
    ctx->pc = 0x1577d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 0));
label_1577d4:
    // 0x1577d4: 0xac80009c  sw          $zero, 0x9C($a0)
    ctx->pc = 0x1577d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 0));
label_1577d8:
    // 0x1577d8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1577d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1577dc:
    // 0x1577dc: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x1577dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_1577e0:
    // 0x1577e0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1577e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1577e4:
    // 0x1577e4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1577e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1577e8:
    // 0x1577e8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1577e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1577ec:
    // 0x1577ec: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1577ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1577f0:
    // 0x1577f0: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1577f0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1577f4:
    // 0x1577f4: 0x8d040044  lw          $a0, 0x44($t0)
    ctx->pc = 0x1577f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 68)));
label_1577f8:
    // 0x1577f8: 0x2405fffd  addiu       $a1, $zero, -0x3
    ctx->pc = 0x1577f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_1577fc:
    // 0x1577fc: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x1577fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_157800:
    // 0x157800: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x157800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_157804:
    // 0x157804: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x157804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_157808:
    // 0x157808: 0xace30234  sw          $v1, 0x234($a3)
    ctx->pc = 0x157808u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 564), GPR_U32(ctx, 3));
label_15780c:
    // 0x15780c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15780cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_157810:
    // 0x157810: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x157810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_157814:
    // 0x157814: 0x60f809  jalr        $v1
label_157818:
    if (ctx->pc == 0x157818u) {
        ctx->pc = 0x157818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157814u;
        // 0x157818: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15781Cu;
        goto label_15781c;
    }
    ctx->pc = 0x157814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15781Cu);
        ctx->pc = 0x157818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157814u;
        // 0x157818: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157814u, 0x15781Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15781Cu;
label_15781c:
    // 0x15781c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15781cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_157820:
    // 0x157820: 0x3e00008  jr          $ra
label_157824:
    if (ctx->pc == 0x157824u) {
        ctx->pc = 0x157824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157820u;
        // 0x157824: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157828u;
        goto label_fallthrough_0x157820;
    }
    ctx->pc = 0x157820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157820u;
        // 0x157824: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x157820:
    ctx->pc = 0x157828u;
}
