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

// Function: BMotionSmoothMove__FP11BMotionCtrlP11BMotionWorki
// Address: 0x1a25b8 - 0x1a2788
void BMotionSmoothMove__FP11BMotionCtrlP11BMotionWorki_0x1a25b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMotionSmoothMove__FP11BMotionCtrlP11BMotionWorki_0x1a25b8");
#endif

    switch (ctx->pc) {
        case 0x1a25b8u: goto label_1a25b8;
        case 0x1a25bcu: goto label_1a25bc;
        case 0x1a25c0u: goto label_1a25c0;
        case 0x1a25c4u: goto label_1a25c4;
        case 0x1a25c8u: goto label_1a25c8;
        case 0x1a25ccu: goto label_1a25cc;
        case 0x1a25d0u: goto label_1a25d0;
        case 0x1a25d4u: goto label_1a25d4;
        case 0x1a25d8u: goto label_1a25d8;
        case 0x1a25dcu: goto label_1a25dc;
        case 0x1a25e0u: goto label_1a25e0;
        case 0x1a25e4u: goto label_1a25e4;
        case 0x1a25e8u: goto label_1a25e8;
        case 0x1a25ecu: goto label_1a25ec;
        case 0x1a25f0u: goto label_1a25f0;
        case 0x1a25f4u: goto label_1a25f4;
        case 0x1a25f8u: goto label_1a25f8;
        case 0x1a25fcu: goto label_1a25fc;
        case 0x1a2600u: goto label_1a2600;
        case 0x1a2604u: goto label_1a2604;
        case 0x1a2608u: goto label_1a2608;
        case 0x1a260cu: goto label_1a260c;
        case 0x1a2610u: goto label_1a2610;
        case 0x1a2614u: goto label_1a2614;
        case 0x1a2618u: goto label_1a2618;
        case 0x1a261cu: goto label_1a261c;
        case 0x1a2620u: goto label_1a2620;
        case 0x1a2624u: goto label_1a2624;
        case 0x1a2628u: goto label_1a2628;
        case 0x1a262cu: goto label_1a262c;
        case 0x1a2630u: goto label_1a2630;
        case 0x1a2634u: goto label_1a2634;
        case 0x1a2638u: goto label_1a2638;
        case 0x1a263cu: goto label_1a263c;
        case 0x1a2640u: goto label_1a2640;
        case 0x1a2644u: goto label_1a2644;
        case 0x1a2648u: goto label_1a2648;
        case 0x1a264cu: goto label_1a264c;
        case 0x1a2650u: goto label_1a2650;
        case 0x1a2654u: goto label_1a2654;
        case 0x1a2658u: goto label_1a2658;
        case 0x1a265cu: goto label_1a265c;
        case 0x1a2660u: goto label_1a2660;
        case 0x1a2664u: goto label_1a2664;
        case 0x1a2668u: goto label_1a2668;
        case 0x1a266cu: goto label_1a266c;
        case 0x1a2670u: goto label_1a2670;
        case 0x1a2674u: goto label_1a2674;
        case 0x1a2678u: goto label_1a2678;
        case 0x1a267cu: goto label_1a267c;
        case 0x1a2680u: goto label_1a2680;
        case 0x1a2684u: goto label_1a2684;
        case 0x1a2688u: goto label_1a2688;
        case 0x1a268cu: goto label_1a268c;
        case 0x1a2690u: goto label_1a2690;
        case 0x1a2694u: goto label_1a2694;
        case 0x1a2698u: goto label_1a2698;
        case 0x1a269cu: goto label_1a269c;
        case 0x1a26a0u: goto label_1a26a0;
        case 0x1a26a4u: goto label_1a26a4;
        case 0x1a26a8u: goto label_1a26a8;
        case 0x1a26acu: goto label_1a26ac;
        case 0x1a26b0u: goto label_1a26b0;
        case 0x1a26b4u: goto label_1a26b4;
        case 0x1a26b8u: goto label_1a26b8;
        case 0x1a26bcu: goto label_1a26bc;
        case 0x1a26c0u: goto label_1a26c0;
        case 0x1a26c4u: goto label_1a26c4;
        case 0x1a26c8u: goto label_1a26c8;
        case 0x1a26ccu: goto label_1a26cc;
        case 0x1a26d0u: goto label_1a26d0;
        case 0x1a26d4u: goto label_1a26d4;
        case 0x1a26d8u: goto label_1a26d8;
        case 0x1a26dcu: goto label_1a26dc;
        case 0x1a26e0u: goto label_1a26e0;
        case 0x1a26e4u: goto label_1a26e4;
        case 0x1a26e8u: goto label_1a26e8;
        case 0x1a26ecu: goto label_1a26ec;
        case 0x1a26f0u: goto label_1a26f0;
        case 0x1a26f4u: goto label_1a26f4;
        case 0x1a26f8u: goto label_1a26f8;
        case 0x1a26fcu: goto label_1a26fc;
        case 0x1a2700u: goto label_1a2700;
        case 0x1a2704u: goto label_1a2704;
        case 0x1a2708u: goto label_1a2708;
        case 0x1a270cu: goto label_1a270c;
        case 0x1a2710u: goto label_1a2710;
        case 0x1a2714u: goto label_1a2714;
        case 0x1a2718u: goto label_1a2718;
        case 0x1a271cu: goto label_1a271c;
        case 0x1a2720u: goto label_1a2720;
        case 0x1a2724u: goto label_1a2724;
        case 0x1a2728u: goto label_1a2728;
        case 0x1a272cu: goto label_1a272c;
        case 0x1a2730u: goto label_1a2730;
        case 0x1a2734u: goto label_1a2734;
        case 0x1a2738u: goto label_1a2738;
        case 0x1a273cu: goto label_1a273c;
        case 0x1a2740u: goto label_1a2740;
        case 0x1a2744u: goto label_1a2744;
        case 0x1a2748u: goto label_1a2748;
        case 0x1a274cu: goto label_1a274c;
        case 0x1a2750u: goto label_1a2750;
        case 0x1a2754u: goto label_1a2754;
        case 0x1a2758u: goto label_1a2758;
        case 0x1a275cu: goto label_1a275c;
        case 0x1a2760u: goto label_1a2760;
        case 0x1a2764u: goto label_1a2764;
        case 0x1a2768u: goto label_1a2768;
        case 0x1a276cu: goto label_1a276c;
        case 0x1a2770u: goto label_1a2770;
        case 0x1a2774u: goto label_1a2774;
        case 0x1a2778u: goto label_1a2778;
        case 0x1a277cu: goto label_1a277c;
        case 0x1a2780u: goto label_1a2780;
        case 0x1a2784u: goto label_1a2784;
        default: break;
    }

    ctx->pc = 0x1a25b8u;

label_1a25b8:
    // 0x1a25b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a25b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a25bc:
    // 0x1a25bc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a25bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1a25c0:
    // 0x1a25c0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1a25c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1a25c4:
    // 0x1a25c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a25c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a25c8:
    // 0x1a25c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a25c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a25cc:
    // 0x1a25cc: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x1a25ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1a25d0:
    // 0x1a25d0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1a25d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1a25d4:
    // 0x1a25d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a25d8:
    if (ctx->pc == 0x1A25D8u) {
        ctx->pc = 0x1A25D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A25D4u;
        // 0x1a25d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A25DCu;
        goto label_1a25dc;
    }
    ctx->pc = 0x1A25D4u;
    {
        const bool branch_taken_0x1a25d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A25D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A25D4u;
        // 0x1a25d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a25d4) {
            ctx->pc = 0x1A25F0u;
            goto label_1a25f0;
        }
    }
    ctx->pc = 0x1A25DCu;
label_1a25dc:
    // 0x1a25dc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a25dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a25e0:
    // 0x1a25e0: 0x40f809  jalr        $v0
label_1a25e4:
    if (ctx->pc == 0x1A25E4u) {
        ctx->pc = 0x1A25E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A25E0u;
        // 0x1a25e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A25E8u;
        goto label_1a25e8;
    }
    ctx->pc = 0x1A25E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A25E8u);
        ctx->pc = 0x1A25E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A25E0u;
        // 0x1a25e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A25E0u, 0x1A25E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A25E8u;
label_1a25e8:
    // 0x1a25e8: 0x1000000c  b           . + 4 + (0xC << 2)
label_1a25ec:
    if (ctx->pc == 0x1A25ECu) {
        ctx->pc = 0x1A25ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A25E8u;
        // 0x1a25ec: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A25F0u;
        goto label_1a25f0;
    }
    ctx->pc = 0x1A25E8u;
    {
        const bool branch_taken_0x1a25e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A25ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A25E8u;
        // 0x1a25ec: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a25e8) {
            ctx->pc = 0x1A261Cu;
            goto label_1a261c;
        }
    }
    ctx->pc = 0x1A25F0u;
label_1a25f0:
    // 0x1a25f0: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x1a25f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_1a25f4:
    // 0x1a25f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a25f8:
    if (ctx->pc == 0x1A25F8u) {
        ctx->pc = 0x1A25F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A25F4u;
        // 0x1a25f8: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A25FCu;
        goto label_1a25fc;
    }
    ctx->pc = 0x1A25F4u;
    {
        const bool branch_taken_0x1a25f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A25F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A25F4u;
        // 0x1a25f8: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a25f4) {
            ctx->pc = 0x1A2608u;
            goto label_1a2608;
        }
    }
    ctx->pc = 0x1A25FCu;
label_1a25fc:
    // 0x1a25fc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1a25fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1a2600:
    // 0x1a2600: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a2604:
    if (ctx->pc == 0x1A2604u) {
        ctx->pc = 0x1A2604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2600u;
        // 0x1a2604: 0xc4410000  lwc1        $f1, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2608u;
        goto label_1a2608;
    }
    ctx->pc = 0x1A2600u;
    {
        const bool branch_taken_0x1a2600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2600u;
        // 0x1a2604: 0xc4410000  lwc1        $f1, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2600) {
            ctx->pc = 0x1A261Cu;
            goto label_1a261c;
        }
    }
    ctx->pc = 0x1A2608u;
label_1a2608:
    // 0x1a2608: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1a2608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1a260c:
    // 0x1a260c: 0x24a59220  addiu       $a1, $a1, -0x6DE0
    ctx->pc = 0x1a260cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939168));
label_1a2610:
    // 0x1a2610: 0xc068186  jal         func_1A0618
label_1a2614:
    if (ctx->pc == 0x1A2614u) {
        ctx->pc = 0x1A2614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2610u;
        // 0x1a2614: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2618u;
        goto label_1a2618;
    }
    ctx->pc = 0x1A2610u;
    SET_GPR_U32(ctx, 31, 0x1A2618u);
    ctx->pc = 0x1A2614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2610u;
    // 0x1a2614: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A2610u, 0x1A2618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2618u;
label_1a2618:
    // 0x1a2618: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1a2618u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a261c:
    // 0x1a261c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1a261cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a2620:
    // 0x1a2620: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a2620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a2624:
    // 0x1a2624: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1a2624u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a2628:
    // 0x1a2628: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1a262c:
    if (ctx->pc == 0x1A262Cu) {
        ctx->pc = 0x1A262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2628u;
        // 0x1a262c: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2630u;
        goto label_1a2630;
    }
    ctx->pc = 0x1A2628u;
    {
        const bool branch_taken_0x1a2628 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2628u;
        // 0x1a262c: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2628) {
            ctx->pc = 0x1A2634u;
            goto label_1a2634;
        }
    }
    ctx->pc = 0x1A2630u;
label_1a2630:
    // 0x1a2630: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a2630u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a2634:
    // 0x1a2634: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
label_1a2638:
    if (ctx->pc == 0x1A2638u) {
        ctx->pc = 0x1A263Cu;
        goto label_1a263c;
    }
    ctx->pc = 0x1A2634u;
    {
        const bool branch_taken_0x1a2634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2634) {
            ctx->pc = 0x1A26F8u;
            goto label_1a26f8;
        }
    }
    ctx->pc = 0x1A263Cu;
label_1a263c:
    // 0x1a263c: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x1a263cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_1a2640:
    // 0x1a2640: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a2640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1a2644:
    // 0x1a2644: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
label_1a2648:
    if (ctx->pc == 0x1A2648u) {
        ctx->pc = 0x1A2648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2644u;
        // 0x1a2648: 0xa6220002  sh          $v0, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A264Cu;
        goto label_1a264c;
    }
    ctx->pc = 0x1A2644u;
    {
        const bool branch_taken_0x1a2644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2644u;
        // 0x1a2648: 0xa6220002  sh          $v0, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2644) {
            ctx->pc = 0x1A26F8u;
            goto label_1a26f8;
        }
    }
    ctx->pc = 0x1A264Cu;
label_1a264c:
    // 0x1a264c: 0x96230008  lhu         $v1, 0x8($s1)
    ctx->pc = 0x1a264cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_1a2650:
    // 0x1a2650: 0x38620005  xori        $v0, $v1, 0x5
    ctx->pc = 0x1a2650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)5);
label_1a2654:
    // 0x1a2654: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_1a2658:
    if (ctx->pc == 0x1A2658u) {
        ctx->pc = 0x1A2658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2654u;
        // 0x1a2658: 0x2c620007  sltiu       $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A265Cu;
        goto label_1a265c;
    }
    ctx->pc = 0x1A2654u;
    {
        const bool branch_taken_0x1a2654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2654u;
        // 0x1a2658: 0x2c620007  sltiu       $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2654) {
            ctx->pc = 0x1A2698u;
            goto label_1a2698;
        }
    }
    ctx->pc = 0x1A265Cu;
label_1a265c:
    // 0x1a265c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1a265cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a2660:
    // 0x1a2660: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1a2660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a2664:
    // 0x1a2664: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a2664u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_1a2668:
    // 0x1a2668: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x1a2668u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1a266c:
    // 0x1a266c: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x1a266cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a2670:
    // 0x1a2670: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a2670u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1a2674:
    // 0x1a2674: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1a2674u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_1a2678:
    // 0x1a2678: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1a2678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a267c:
    // 0x1a267c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a267cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1a2680:
    // 0x1a2680: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1a2680u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1a2684:
    // 0x1a2684: 0xc067c32  jal         func_19F0C8
label_1a2688:
    if (ctx->pc == 0x1A2688u) {
        ctx->pc = 0x1A2688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2684u;
        // 0x1a2688: 0x27a40004  addiu       $a0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A268Cu;
        goto label_1a268c;
    }
    ctx->pc = 0x1A2684u;
    SET_GPR_U32(ctx, 31, 0x1A268Cu);
    ctx->pc = 0x1A2688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2684u;
    // 0x1a2688: 0x27a40004  addiu       $a0, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F0C8u, 0x1A2684u, 0x1A268Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A268Cu;
label_1a268c:
    // 0x1a268c: 0x10000010  b           . + 4 + (0x10 << 2)
label_1a2690:
    if (ctx->pc == 0x1A2690u) {
        ctx->pc = 0x1A2694u;
        goto label_1a2694;
    }
    ctx->pc = 0x1A268Cu;
    {
        const bool branch_taken_0x1a268c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a268c) {
            ctx->pc = 0x1A26D0u;
            goto label_1a26d0;
        }
    }
    ctx->pc = 0x1A2694u;
label_1a2694:
    // 0x1a2694: 0x0  nop
    ctx->pc = 0x1a2694u;
    // NOP
label_1a2698:
    // 0x1a2698: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_1a269c:
    if (ctx->pc == 0x1A269Cu) {
        ctx->pc = 0x1A269Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2698u;
        // 0x1a269c: 0xc60e0004  lwc1        $f14, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A26A0u;
        goto label_1a26a0;
    }
    ctx->pc = 0x1A2698u;
    {
        const bool branch_taken_0x1a2698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2698) {
            ctx->pc = 0x1A269Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2698u;
            // 0x1a269c: 0xc60e0004  lwc1        $f14, 0x4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A26E0u;
            goto label_1a26e0;
        }
    }
    ctx->pc = 0x1A26A0u;
label_1a26a0:
    // 0x1a26a0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1a26a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a26a4:
    // 0x1a26a4: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1a26a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a26a8:
    // 0x1a26a8: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a26a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_1a26ac:
    // 0x1a26ac: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x1a26acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1a26b0:
    // 0x1a26b0: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x1a26b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a26b4:
    // 0x1a26b4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a26b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1a26b8:
    // 0x1a26b8: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1a26b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_1a26bc:
    // 0x1a26bc: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1a26bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a26c0:
    // 0x1a26c0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a26c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1a26c4:
    // 0x1a26c4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1a26c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1a26c8:
    // 0x1a26c8: 0xc0677bc  jal         func_19DEF0
label_1a26cc:
    if (ctx->pc == 0x1A26CCu) {
        ctx->pc = 0x1A26CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A26C8u;
        // 0x1a26cc: 0x27a40004  addiu       $a0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A26D0u;
        goto label_1a26d0;
    }
    ctx->pc = 0x1A26C8u;
    SET_GPR_U32(ctx, 31, 0x1A26D0u);
    ctx->pc = 0x1A26CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A26C8u;
    // 0x1a26cc: 0x27a40004  addiu       $a0, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19DEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DEF0u, 0x1A26C8u, 0x1A26D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A26D0u;
label_1a26d0:
    // 0x1a26d0: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1a26d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a26d4:
    // 0x1a26d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a26d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a26d8:
    // 0x1a26d8: 0x10000009  b           . + 4 + (0x9 << 2)
label_1a26dc:
    if (ctx->pc == 0x1A26DCu) {
        ctx->pc = 0x1A26DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A26D8u;
        // 0x1a26dc: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A26E0u;
        goto label_1a26e0;
    }
    ctx->pc = 0x1A26D8u;
    {
        const bool branch_taken_0x1a26d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A26DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A26D8u;
        // 0x1a26dc: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a26d8) {
            ctx->pc = 0x1A2700u;
            goto label_1a2700;
        }
    }
    ctx->pc = 0x1A26E0u;
label_1a26e0:
    // 0x1a26e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a26e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a26e4:
    // 0x1a26e4: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x1a26e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a26e8:
    // 0x1a26e8: 0xc067c0a  jal         func_19F028
label_1a26ec:
    if (ctx->pc == 0x1A26ECu) {
        ctx->pc = 0x1A26ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A26E8u;
        // 0x1a26ec: 0xc60d0008  lwc1        $f13, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A26F0u;
        goto label_1a26f0;
    }
    ctx->pc = 0x1A26E8u;
    SET_GPR_U32(ctx, 31, 0x1A26F0u);
    ctx->pc = 0x1A26ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A26E8u;
    // 0x1a26ec: 0xc60d0008  lwc1        $f13, 0x8($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F028u, 0x1A26E8u, 0x1A26F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A26F0u;
label_1a26f0:
    // 0x1a26f0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a26f4:
    if (ctx->pc == 0x1A26F4u) {
        ctx->pc = 0x1A26F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A26F0u;
        // 0x1a26f4: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A26F8u;
        goto label_1a26f8;
    }
    ctx->pc = 0x1A26F0u;
    {
        const bool branch_taken_0x1a26f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A26F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A26F0u;
        // 0x1a26f4: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a26f0) {
            ctx->pc = 0x1A2704u;
            goto label_1a2704;
        }
    }
    ctx->pc = 0x1A26F8u;
label_1a26f8:
    // 0x1a26f8: 0xc06881e  jal         func_1A2078
label_1a26fc:
    if (ctx->pc == 0x1A26FCu) {
        ctx->pc = 0x1A26FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A26F8u;
        // 0x1a26fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2700u;
        goto label_1a2700;
    }
    ctx->pc = 0x1A26F8u;
    SET_GPR_U32(ctx, 31, 0x1A2700u);
    ctx->pc = 0x1A26FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A26F8u;
    // 0x1a26fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2078u, 0x1A26F8u, 0x1A2700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2700u;
label_1a2700:
    // 0x1a2700: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1a2700u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a2704:
    // 0x1a2704: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a2704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a2708:
    // 0x1a2708: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1a2708u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1a270c:
    // 0x1a270c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a2710:
    if (ctx->pc == 0x1A2710u) {
        ctx->pc = 0x1A2710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A270Cu;
        // 0x1a2710: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2714u;
        goto label_1a2714;
    }
    ctx->pc = 0x1A270Cu;
    {
        const bool branch_taken_0x1a270c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A270Cu;
        // 0x1a2710: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a270c) {
            ctx->pc = 0x1A2728u;
            goto label_1a2728;
        }
    }
    ctx->pc = 0x1A2714u;
label_1a2714:
    // 0x1a2714: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a2714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a2718:
    // 0x1a2718: 0x40f809  jalr        $v0
label_1a271c:
    if (ctx->pc == 0x1A271Cu) {
        ctx->pc = 0x1A271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2718u;
        // 0x1a271c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2720u;
        goto label_1a2720;
    }
    ctx->pc = 0x1A2718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A2720u);
        ctx->pc = 0x1A271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2718u;
        // 0x1a271c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2718u, 0x1A2720u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A2720u;
label_1a2720:
    // 0x1a2720: 0x1000000d  b           . + 4 + (0xD << 2)
label_1a2724:
    if (ctx->pc == 0x1A2724u) {
        ctx->pc = 0x1A2724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2720u;
        // 0x1a2724: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2728u;
        goto label_1a2728;
    }
    ctx->pc = 0x1A2720u;
    {
        const bool branch_taken_0x1a2720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2720u;
        // 0x1a2724: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2720) {
            ctx->pc = 0x1A2758u;
            goto label_1a2758;
        }
    }
    ctx->pc = 0x1A2728u;
label_1a2728:
    // 0x1a2728: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x1a2728u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_1a272c:
    // 0x1a272c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a2730:
    if (ctx->pc == 0x1A2730u) {
        ctx->pc = 0x1A2730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A272Cu;
        // 0x1a2730: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2734u;
        goto label_1a2734;
    }
    ctx->pc = 0x1A272Cu;
    {
        const bool branch_taken_0x1a272c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A272Cu;
        // 0x1a2730: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a272c) {
            ctx->pc = 0x1A2748u;
            goto label_1a2748;
        }
    }
    ctx->pc = 0x1A2734u;
label_1a2734:
    // 0x1a2734: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a2734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1a2738:
    // 0x1a2738: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1a2738u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_1a273c:
    // 0x1a273c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a2740:
    if (ctx->pc == 0x1A2740u) {
        ctx->pc = 0x1A2740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A273Cu;
        // 0x1a2740: 0xe44c0000  swc1        $f12, 0x0($v0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2744u;
        goto label_1a2744;
    }
    ctx->pc = 0x1A273Cu;
    {
        const bool branch_taken_0x1a273c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A273Cu;
        // 0x1a2740: 0xe44c0000  swc1        $f12, 0x0($v0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a273c) {
            ctx->pc = 0x1A2758u;
            goto label_1a2758;
        }
    }
    ctx->pc = 0x1A2744u;
label_1a2744:
    // 0x1a2744: 0x0  nop
    ctx->pc = 0x1a2744u;
    // NOP
label_1a2748:
    // 0x1a2748: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a2748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a274c:
    // 0x1a274c: 0x24a59238  addiu       $a1, $a1, -0x6DC8
    ctx->pc = 0x1a274cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939192));
label_1a2750:
    // 0x1a2750: 0xc068186  jal         func_1A0618
label_1a2754:
    if (ctx->pc == 0x1A2754u) {
        ctx->pc = 0x1A2754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2750u;
        // 0x1a2754: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2758u;
        goto label_1a2758;
    }
    ctx->pc = 0x1A2750u;
    SET_GPR_U32(ctx, 31, 0x1A2758u);
    ctx->pc = 0x1A2754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2750u;
    // 0x1a2754: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A2750u, 0x1A2758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2758u;
label_1a2758:
    // 0x1a2758: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1a2758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1a275c:
    // 0x1a275c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a2760:
    if (ctx->pc == 0x1A2760u) {
        ctx->pc = 0x1A2760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A275Cu;
        // 0x1a2760: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2764u;
        goto label_1a2764;
    }
    ctx->pc = 0x1A275Cu;
    {
        const bool branch_taken_0x1a275c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A275Cu;
        // 0x1a2760: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a275c) {
            ctx->pc = 0x1A2770u;
            goto label_1a2770;
        }
    }
    ctx->pc = 0x1A2764u;
label_1a2764:
    // 0x1a2764: 0x40f809  jalr        $v0
label_1a2768:
    if (ctx->pc == 0x1A2768u) {
        ctx->pc = 0x1A2768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2764u;
        // 0x1a2768: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A276Cu;
        goto label_1a276c;
    }
    ctx->pc = 0x1A2764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A276Cu);
        ctx->pc = 0x1A2768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2764u;
        // 0x1a2768: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2764u, 0x1A276Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A276Cu;
label_1a276c:
    // 0x1a276c: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x1a276cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_1a2770:
    // 0x1a2770: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a2770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a2774:
    // 0x1a2774: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1a2774u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1a2778:
    // 0x1a2778: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a2778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a277c:
    // 0x1a277c: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x1a277cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a2780:
    // 0x1a2780: 0x3e00008  jr          $ra
label_1a2784:
    if (ctx->pc == 0x1A2784u) {
        ctx->pc = 0x1A2784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2780u;
        // 0x1a2784: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2788u;
        goto label_fallthrough_0x1a2780;
    }
    ctx->pc = 0x1A2780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2780u;
        // 0x1a2784: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a2780:
    ctx->pc = 0x1A2788u;
}
