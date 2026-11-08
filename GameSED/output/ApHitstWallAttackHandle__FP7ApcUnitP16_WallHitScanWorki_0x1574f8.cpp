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

// Function: ApHitstWallAttackHandle__FP7ApcUnitP16_WallHitScanWorki
// Address: 0x1574f8 - 0x1575c0
void ApHitstWallAttackHandle__FP7ApcUnitP16_WallHitScanWorki_0x1574f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApHitstWallAttackHandle__FP7ApcUnitP16_WallHitScanWorki_0x1574f8");
#endif

    switch (ctx->pc) {
        case 0x1574f8u: goto label_1574f8;
        case 0x1574fcu: goto label_1574fc;
        case 0x157500u: goto label_157500;
        case 0x157504u: goto label_157504;
        case 0x157508u: goto label_157508;
        case 0x15750cu: goto label_15750c;
        case 0x157510u: goto label_157510;
        case 0x157514u: goto label_157514;
        case 0x157518u: goto label_157518;
        case 0x15751cu: goto label_15751c;
        case 0x157520u: goto label_157520;
        case 0x157524u: goto label_157524;
        case 0x157528u: goto label_157528;
        case 0x15752cu: goto label_15752c;
        case 0x157530u: goto label_157530;
        case 0x157534u: goto label_157534;
        case 0x157538u: goto label_157538;
        case 0x15753cu: goto label_15753c;
        case 0x157540u: goto label_157540;
        case 0x157544u: goto label_157544;
        case 0x157548u: goto label_157548;
        case 0x15754cu: goto label_15754c;
        case 0x157550u: goto label_157550;
        case 0x157554u: goto label_157554;
        case 0x157558u: goto label_157558;
        case 0x15755cu: goto label_15755c;
        case 0x157560u: goto label_157560;
        case 0x157564u: goto label_157564;
        case 0x157568u: goto label_157568;
        case 0x15756cu: goto label_15756c;
        case 0x157570u: goto label_157570;
        case 0x157574u: goto label_157574;
        case 0x157578u: goto label_157578;
        case 0x15757cu: goto label_15757c;
        case 0x157580u: goto label_157580;
        case 0x157584u: goto label_157584;
        case 0x157588u: goto label_157588;
        case 0x15758cu: goto label_15758c;
        case 0x157590u: goto label_157590;
        case 0x157594u: goto label_157594;
        case 0x157598u: goto label_157598;
        case 0x15759cu: goto label_15759c;
        case 0x1575a0u: goto label_1575a0;
        case 0x1575a4u: goto label_1575a4;
        case 0x1575a8u: goto label_1575a8;
        case 0x1575acu: goto label_1575ac;
        case 0x1575b0u: goto label_1575b0;
        case 0x1575b4u: goto label_1575b4;
        case 0x1575b8u: goto label_1575b8;
        case 0x1575bcu: goto label_1575bc;
        default: break;
    }

    ctx->pc = 0x1574f8u;

label_1574f8:
    // 0x1574f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1574f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1574fc:
    // 0x1574fc: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1574fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_157500:
    // 0x157500: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x157500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_157504:
    // 0x157504: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x157504u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_157508:
    // 0x157508: 0x8d050044  lw          $a1, 0x44($t0)
    ctx->pc = 0x157508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 68)));
label_15750c:
    // 0x15750c: 0x8ce40160  lw          $a0, 0x160($a3)
    ctx->pc = 0x15750cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 352)));
label_157510:
    // 0x157510: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
label_157514:
    if (ctx->pc == 0x157514u) {
        ctx->pc = 0x157514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157510u;
        // 0x157514: 0xc4e000e0  lwc1        $f0, 0xE0($a3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x157518u;
        goto label_157518;
    }
    ctx->pc = 0x157510u;
    {
        const bool branch_taken_0x157510 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x157514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157510u;
        // 0x157514: 0xc4e000e0  lwc1        $f0, 0xE0($a3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x157510) {
            ctx->pc = 0x157548u;
            goto label_157548;
        }
    }
    ctx->pc = 0x157518u;
label_157518:
    // 0x157518: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x157518u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_15751c:
    // 0x15751c: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x15751cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_157520:
    // 0x157520: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x157520u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
label_157524:
    // 0x157524: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x157524u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
label_157528:
    // 0x157528: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x157528u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
label_15752c:
    // 0x15752c: 0xfc820010  sd          $v0, 0x10($a0)
    ctx->pc = 0x15752cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
label_157530:
    // 0x157530: 0xdca30018  ld          $v1, 0x18($a1)
    ctx->pc = 0x157530u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 24)));
label_157534:
    // 0x157534: 0xfc830018  sd          $v1, 0x18($a0)
    ctx->pc = 0x157534u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 3));
label_157538:
    // 0x157538: 0xdca20020  ld          $v0, 0x20($a1)
    ctx->pc = 0x157538u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 32)));
label_15753c:
    // 0x15753c: 0xfc820020  sd          $v0, 0x20($a0)
    ctx->pc = 0x15753cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 2));
label_157540:
    // 0x157540: 0xdca30028  ld          $v1, 0x28($a1)
    ctx->pc = 0x157540u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 40)));
label_157544:
    // 0x157544: 0xfc830028  sd          $v1, 0x28($a0)
    ctx->pc = 0x157544u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 3));
label_157548:
    // 0x157548: 0x90820020  lbu         $v0, 0x20($a0)
    ctx->pc = 0x157548u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
label_15754c:
    // 0x15754c: 0x24850070  addiu       $a1, $a0, 0x70
    ctx->pc = 0x15754cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_157550:
    // 0x157550: 0xe4800098  swc1        $f0, 0x98($a0)
    ctx->pc = 0x157550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
label_157554:
    // 0x157554: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x157554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_157558:
    // 0x157558: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x157558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15755c:
    // 0x15755c: 0xa0820020  sb          $v0, 0x20($a0)
    ctx->pc = 0x15755cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 2));
label_157560:
    // 0x157560: 0xac800090  sw          $zero, 0x90($a0)
    ctx->pc = 0x157560u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
label_157564:
    // 0x157564: 0xc4e000e0  lwc1        $f0, 0xE0($a3)
    ctx->pc = 0x157564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_157568:
    // 0x157568: 0xac800094  sw          $zero, 0x94($a0)
    ctx->pc = 0x157568u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 0));
label_15756c:
    // 0x15756c: 0xac80009c  sw          $zero, 0x9C($a0)
    ctx->pc = 0x15756cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 0));
label_157570:
    // 0x157570: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x157570u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_157574:
    // 0x157574: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x157574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_157578:
    // 0x157578: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x157578u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_15757c:
    // 0x15757c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15757cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_157580:
    // 0x157580: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x157580u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_157584:
    // 0x157584: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x157584u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_157588:
    // 0x157588: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x157588u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_15758c:
    // 0x15758c: 0x8d040044  lw          $a0, 0x44($t0)
    ctx->pc = 0x15758cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 68)));
label_157590:
    // 0x157590: 0x2405fffd  addiu       $a1, $zero, -0x3
    ctx->pc = 0x157590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_157594:
    // 0x157594: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x157594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_157598:
    // 0x157598: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x157598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_15759c:
    // 0x15759c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x15759cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1575a0:
    // 0x1575a0: 0xace30234  sw          $v1, 0x234($a3)
    ctx->pc = 0x1575a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 564), GPR_U32(ctx, 3));
label_1575a4:
    // 0x1575a4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1575a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1575a8:
    // 0x1575a8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1575a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1575ac:
    // 0x1575ac: 0x60f809  jalr        $v1
label_1575b0:
    if (ctx->pc == 0x1575B0u) {
        ctx->pc = 0x1575B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1575ACu;
        // 0x1575b0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1575B4u;
        goto label_1575b4;
    }
    ctx->pc = 0x1575ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1575B4u);
        ctx->pc = 0x1575B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1575ACu;
        // 0x1575b0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1575ACu, 0x1575B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1575B4u;
label_1575b4:
    // 0x1575b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1575b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1575b8:
    // 0x1575b8: 0x3e00008  jr          $ra
label_1575bc:
    if (ctx->pc == 0x1575BCu) {
        ctx->pc = 0x1575BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1575B8u;
        // 0x1575bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1575C0u;
        goto label_fallthrough_0x1575b8;
    }
    ctx->pc = 0x1575B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1575BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1575B8u;
        // 0x1575bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1575B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1575b8:
    ctx->pc = 0x1575C0u;
}
