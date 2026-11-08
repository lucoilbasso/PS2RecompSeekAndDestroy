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

// Function: BMotionMomentMove__FP11BMotionCtrlP11BMotionWorki
// Address: 0x1a2788 - 0x1a298c
void BMotionMomentMove__FP11BMotionCtrlP11BMotionWorki_0x1a2788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMotionMomentMove__FP11BMotionCtrlP11BMotionWorki_0x1a2788");
#endif

    switch (ctx->pc) {
        case 0x1a2788u: goto label_1a2788;
        case 0x1a278cu: goto label_1a278c;
        case 0x1a2790u: goto label_1a2790;
        case 0x1a2794u: goto label_1a2794;
        case 0x1a2798u: goto label_1a2798;
        case 0x1a279cu: goto label_1a279c;
        case 0x1a27a0u: goto label_1a27a0;
        case 0x1a27a4u: goto label_1a27a4;
        case 0x1a27a8u: goto label_1a27a8;
        case 0x1a27acu: goto label_1a27ac;
        case 0x1a27b0u: goto label_1a27b0;
        case 0x1a27b4u: goto label_1a27b4;
        case 0x1a27b8u: goto label_1a27b8;
        case 0x1a27bcu: goto label_1a27bc;
        case 0x1a27c0u: goto label_1a27c0;
        case 0x1a27c4u: goto label_1a27c4;
        case 0x1a27c8u: goto label_1a27c8;
        case 0x1a27ccu: goto label_1a27cc;
        case 0x1a27d0u: goto label_1a27d0;
        case 0x1a27d4u: goto label_1a27d4;
        case 0x1a27d8u: goto label_1a27d8;
        case 0x1a27dcu: goto label_1a27dc;
        case 0x1a27e0u: goto label_1a27e0;
        case 0x1a27e4u: goto label_1a27e4;
        case 0x1a27e8u: goto label_1a27e8;
        case 0x1a27ecu: goto label_1a27ec;
        case 0x1a27f0u: goto label_1a27f0;
        case 0x1a27f4u: goto label_1a27f4;
        case 0x1a27f8u: goto label_1a27f8;
        case 0x1a27fcu: goto label_1a27fc;
        case 0x1a2800u: goto label_1a2800;
        case 0x1a2804u: goto label_1a2804;
        case 0x1a2808u: goto label_1a2808;
        case 0x1a280cu: goto label_1a280c;
        case 0x1a2810u: goto label_1a2810;
        case 0x1a2814u: goto label_1a2814;
        case 0x1a2818u: goto label_1a2818;
        case 0x1a281cu: goto label_1a281c;
        case 0x1a2820u: goto label_1a2820;
        case 0x1a2824u: goto label_1a2824;
        case 0x1a2828u: goto label_1a2828;
        case 0x1a282cu: goto label_1a282c;
        case 0x1a2830u: goto label_1a2830;
        case 0x1a2834u: goto label_1a2834;
        case 0x1a2838u: goto label_1a2838;
        case 0x1a283cu: goto label_1a283c;
        case 0x1a2840u: goto label_1a2840;
        case 0x1a2844u: goto label_1a2844;
        case 0x1a2848u: goto label_1a2848;
        case 0x1a284cu: goto label_1a284c;
        case 0x1a2850u: goto label_1a2850;
        case 0x1a2854u: goto label_1a2854;
        case 0x1a2858u: goto label_1a2858;
        case 0x1a285cu: goto label_1a285c;
        case 0x1a2860u: goto label_1a2860;
        case 0x1a2864u: goto label_1a2864;
        case 0x1a2868u: goto label_1a2868;
        case 0x1a286cu: goto label_1a286c;
        case 0x1a2870u: goto label_1a2870;
        case 0x1a2874u: goto label_1a2874;
        case 0x1a2878u: goto label_1a2878;
        case 0x1a287cu: goto label_1a287c;
        case 0x1a2880u: goto label_1a2880;
        case 0x1a2884u: goto label_1a2884;
        case 0x1a2888u: goto label_1a2888;
        case 0x1a288cu: goto label_1a288c;
        case 0x1a2890u: goto label_1a2890;
        case 0x1a2894u: goto label_1a2894;
        case 0x1a2898u: goto label_1a2898;
        case 0x1a289cu: goto label_1a289c;
        case 0x1a28a0u: goto label_1a28a0;
        case 0x1a28a4u: goto label_1a28a4;
        case 0x1a28a8u: goto label_1a28a8;
        case 0x1a28acu: goto label_1a28ac;
        case 0x1a28b0u: goto label_1a28b0;
        case 0x1a28b4u: goto label_1a28b4;
        case 0x1a28b8u: goto label_1a28b8;
        case 0x1a28bcu: goto label_1a28bc;
        case 0x1a28c0u: goto label_1a28c0;
        case 0x1a28c4u: goto label_1a28c4;
        case 0x1a28c8u: goto label_1a28c8;
        case 0x1a28ccu: goto label_1a28cc;
        case 0x1a28d0u: goto label_1a28d0;
        case 0x1a28d4u: goto label_1a28d4;
        case 0x1a28d8u: goto label_1a28d8;
        case 0x1a28dcu: goto label_1a28dc;
        case 0x1a28e0u: goto label_1a28e0;
        case 0x1a28e4u: goto label_1a28e4;
        case 0x1a28e8u: goto label_1a28e8;
        case 0x1a28ecu: goto label_1a28ec;
        case 0x1a28f0u: goto label_1a28f0;
        case 0x1a28f4u: goto label_1a28f4;
        case 0x1a28f8u: goto label_1a28f8;
        case 0x1a28fcu: goto label_1a28fc;
        case 0x1a2900u: goto label_1a2900;
        case 0x1a2904u: goto label_1a2904;
        case 0x1a2908u: goto label_1a2908;
        case 0x1a290cu: goto label_1a290c;
        case 0x1a2910u: goto label_1a2910;
        case 0x1a2914u: goto label_1a2914;
        case 0x1a2918u: goto label_1a2918;
        case 0x1a291cu: goto label_1a291c;
        case 0x1a2920u: goto label_1a2920;
        case 0x1a2924u: goto label_1a2924;
        case 0x1a2928u: goto label_1a2928;
        case 0x1a292cu: goto label_1a292c;
        case 0x1a2930u: goto label_1a2930;
        case 0x1a2934u: goto label_1a2934;
        case 0x1a2938u: goto label_1a2938;
        case 0x1a293cu: goto label_1a293c;
        case 0x1a2940u: goto label_1a2940;
        case 0x1a2944u: goto label_1a2944;
        case 0x1a2948u: goto label_1a2948;
        case 0x1a294cu: goto label_1a294c;
        case 0x1a2950u: goto label_1a2950;
        case 0x1a2954u: goto label_1a2954;
        case 0x1a2958u: goto label_1a2958;
        case 0x1a295cu: goto label_1a295c;
        case 0x1a2960u: goto label_1a2960;
        case 0x1a2964u: goto label_1a2964;
        case 0x1a2968u: goto label_1a2968;
        case 0x1a296cu: goto label_1a296c;
        case 0x1a2970u: goto label_1a2970;
        case 0x1a2974u: goto label_1a2974;
        case 0x1a2978u: goto label_1a2978;
        case 0x1a297cu: goto label_1a297c;
        case 0x1a2980u: goto label_1a2980;
        case 0x1a2984u: goto label_1a2984;
        case 0x1a2988u: goto label_1a2988;
        default: break;
    }

    ctx->pc = 0x1a2788u;

label_1a2788:
    // 0x1a2788: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a2788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a278c:
    // 0x1a278c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a278cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a2790:
    // 0x1a2790: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a2790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a2794:
    // 0x1a2794: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a2794u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a2798:
    // 0x1a2798: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a2798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a279c:
    // 0x1a279c: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x1a279cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1a27a0:
    // 0x1a27a0: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x1a27a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1a27a4:
    // 0x1a27a4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1a27a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1a27a8:
    // 0x1a27a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a27ac:
    if (ctx->pc == 0x1A27ACu) {
        ctx->pc = 0x1A27ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A27A8u;
        // 0x1a27ac: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A27B0u;
        goto label_1a27b0;
    }
    ctx->pc = 0x1A27A8u;
    {
        const bool branch_taken_0x1a27a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A27ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A27A8u;
        // 0x1a27ac: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a27a8) {
            ctx->pc = 0x1A27C8u;
            goto label_1a27c8;
        }
    }
    ctx->pc = 0x1A27B0u;
label_1a27b0:
    // 0x1a27b0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a27b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a27b4:
    // 0x1a27b4: 0x40f809  jalr        $v0
label_1a27b8:
    if (ctx->pc == 0x1A27B8u) {
        ctx->pc = 0x1A27B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A27B4u;
        // 0x1a27b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A27BCu;
        goto label_1a27bc;
    }
    ctx->pc = 0x1A27B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A27BCu);
        ctx->pc = 0x1A27B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A27B4u;
        // 0x1a27b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A27B4u, 0x1A27BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A27BCu;
label_1a27bc:
    // 0x1a27bc: 0x1000000d  b           . + 4 + (0xD << 2)
label_1a27c0:
    if (ctx->pc == 0x1A27C0u) {
        ctx->pc = 0x1A27C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A27BCu;
        // 0x1a27c0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A27C4u;
        goto label_1a27c4;
    }
    ctx->pc = 0x1A27BCu;
    {
        const bool branch_taken_0x1a27bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A27C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A27BCu;
        // 0x1a27c0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a27bc) {
            ctx->pc = 0x1A27F4u;
            goto label_1a27f4;
        }
    }
    ctx->pc = 0x1A27C4u;
label_1a27c4:
    // 0x1a27c4: 0x0  nop
    ctx->pc = 0x1a27c4u;
    // NOP
label_1a27c8:
    // 0x1a27c8: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x1a27c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_1a27cc:
    // 0x1a27cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a27d0:
    if (ctx->pc == 0x1A27D0u) {
        ctx->pc = 0x1A27D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A27CCu;
        // 0x1a27d0: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A27D4u;
        goto label_1a27d4;
    }
    ctx->pc = 0x1A27CCu;
    {
        const bool branch_taken_0x1a27cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A27D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A27CCu;
        // 0x1a27d0: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a27cc) {
            ctx->pc = 0x1A27E0u;
            goto label_1a27e0;
        }
    }
    ctx->pc = 0x1A27D4u;
label_1a27d4:
    // 0x1a27d4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1a27d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1a27d8:
    // 0x1a27d8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a27dc:
    if (ctx->pc == 0x1A27DCu) {
        ctx->pc = 0x1A27DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A27D8u;
        // 0x1a27dc: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A27E0u;
        goto label_1a27e0;
    }
    ctx->pc = 0x1A27D8u;
    {
        const bool branch_taken_0x1a27d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A27DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A27D8u;
        // 0x1a27dc: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a27d8) {
            ctx->pc = 0x1A27F4u;
            goto label_1a27f4;
        }
    }
    ctx->pc = 0x1A27E0u;
label_1a27e0:
    // 0x1a27e0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1a27e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1a27e4:
    // 0x1a27e4: 0x24a59220  addiu       $a1, $a1, -0x6DE0
    ctx->pc = 0x1a27e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939168));
label_1a27e8:
    // 0x1a27e8: 0xc068186  jal         func_1A0618
label_1a27ec:
    if (ctx->pc == 0x1A27ECu) {
        ctx->pc = 0x1A27ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A27E8u;
        // 0x1a27ec: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A27F0u;
        goto label_1a27f0;
    }
    ctx->pc = 0x1A27E8u;
    SET_GPR_U32(ctx, 31, 0x1A27F0u);
    ctx->pc = 0x1A27ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A27E8u;
    // 0x1a27ec: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A27E8u, 0x1A27F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A27F0u;
label_1a27f0:
    // 0x1a27f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a27f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a27f4:
    // 0x1a27f4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1a27f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a27f8:
    // 0x1a27f8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1a27f8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_1a27fc:
    // 0x1a27fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a27fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a2800:
    // 0x1a2800: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x1a2800u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a2804:
    // 0x1a2804: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1a2808:
    if (ctx->pc == 0x1A2808u) {
        ctx->pc = 0x1A2808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2804u;
        // 0x1a2808: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A280Cu;
        goto label_1a280c;
    }
    ctx->pc = 0x1A2804u;
    {
        const bool branch_taken_0x1a2804 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A2808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2804u;
        // 0x1a2808: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2804) {
            ctx->pc = 0x1A2820u;
            goto label_1a2820;
        }
    }
    ctx->pc = 0x1A280Cu;
label_1a280c:
    // 0x1a280c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1a280cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a2810:
    // 0x1a2810: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a2810u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a2814:
    // 0x1a2814: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1a2814u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a2818:
    // 0x1a2818: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1a281c:
    if (ctx->pc == 0x1A281Cu) {
        ctx->pc = 0x1A2820u;
        goto label_1a2820;
    }
    ctx->pc = 0x1A2818u;
    {
        const bool branch_taken_0x1a2818 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a2818) {
            ctx->pc = 0x1A2824u;
            goto label_1a2824;
        }
    }
    ctx->pc = 0x1A2820u;
label_1a2820:
    // 0x1a2820: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a2820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a2824:
    // 0x1a2824: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
label_1a2828:
    if (ctx->pc == 0x1A2828u) {
        ctx->pc = 0x1A282Cu;
        goto label_1a282c;
    }
    ctx->pc = 0x1A2824u;
    {
        const bool branch_taken_0x1a2824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2824) {
            ctx->pc = 0x1A28F8u;
            goto label_1a28f8;
        }
    }
    ctx->pc = 0x1A282Cu;
label_1a282c:
    // 0x1a282c: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x1a282cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1a2830:
    // 0x1a2830: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a2830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1a2834:
    // 0x1a2834: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
label_1a2838:
    if (ctx->pc == 0x1A2838u) {
        ctx->pc = 0x1A2838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2834u;
        // 0x1a2838: 0xa4820002  sh          $v0, 0x2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A283Cu;
        goto label_1a283c;
    }
    ctx->pc = 0x1A2834u;
    {
        const bool branch_taken_0x1a2834 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2834u;
        // 0x1a2838: 0xa4820002  sh          $v0, 0x2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2834) {
            ctx->pc = 0x1A28F8u;
            goto label_1a28f8;
        }
    }
    ctx->pc = 0x1A283Cu;
label_1a283c:
    // 0x1a283c: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x1a283cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_1a2840:
    // 0x1a2840: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x1a2840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
label_1a2844:
    // 0x1a2844: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1a2848:
    if (ctx->pc == 0x1A2848u) {
        ctx->pc = 0x1A2848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2844u;
        // 0x1a2848: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A284Cu;
        goto label_1a284c;
    }
    ctx->pc = 0x1A2844u;
    {
        const bool branch_taken_0x1a2844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2844u;
        // 0x1a2848: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2844) {
            ctx->pc = 0x1A2880u;
            goto label_1a2880;
        }
    }
    ctx->pc = 0x1A284Cu;
label_1a284c:
    // 0x1a284c: 0x4600a064  .word       0x4600A064                   # cvt.w.s     $f1, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a284cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1a2850:
    // 0x1a2850: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1a2850u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1a2854:
    // 0x1a2854: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a2854u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_1a2858:
    // 0x1a2858: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1a2858u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1a285c:
    // 0x1a285c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1a285cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a2860:
    // 0x1a2860: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1a2860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
label_1a2864:
    // 0x1a2864: 0x28444000  slti        $a0, $v0, 0x4000
    ctx->pc = 0x1a2864u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16384) ? 1 : 0);
label_1a2868:
    // 0x1a2868: 0x24438000  addiu       $v1, $v0, -0x8000
    ctx->pc = 0x1a2868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
label_1a286c:
    // 0x1a286c: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x1a286cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_1a2870:
    // 0x1a2870: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a2870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a2874:
    // 0x1a2874: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a2874u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a2878:
    // 0x1a2878: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a287c:
    if (ctx->pc == 0x1A287Cu) {
        ctx->pc = 0x1A287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2878u;
        // 0x1a287c: 0xc6010004  lwc1        $f1, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2880u;
        goto label_1a2880;
    }
    ctx->pc = 0x1A2878u;
    {
        const bool branch_taken_0x1a2878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2878u;
        // 0x1a287c: 0xc6010004  lwc1        $f1, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2878) {
            ctx->pc = 0x1A2888u;
            goto label_1a2888;
        }
    }
    ctx->pc = 0x1A2880u;
label_1a2880:
    // 0x1a2880: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1a2880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a2884:
    // 0x1a2884: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1a2884u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_1a2888:
    // 0x1a2888: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a2888u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a288c:
    // 0x1a288c: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1a288cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_1a2890:
    // 0x1a2890: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x1a2890u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_1a2894:
    // 0x1a2894: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x1a2894u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1a2898:
    // 0x1a2898: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_1a289c:
    if (ctx->pc == 0x1A289Cu) {
        ctx->pc = 0x1A289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2898u;
        // 0x1a289c: 0xc60c0004  lwc1        $f12, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A28A0u;
        goto label_1a28a0;
    }
    ctx->pc = 0x1A2898u;
    {
        const bool branch_taken_0x1a2898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2898) {
            ctx->pc = 0x1A289Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2898u;
            // 0x1a289c: 0xc60c0004  lwc1        $f12, 0x4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A28D0u;
            goto label_1a28d0;
        }
    }
    ctx->pc = 0x1A28A0u;
label_1a28a0:
    // 0x1a28a0: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1a28a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a28a4:
    // 0x1a28a4: 0xc60c0008  lwc1        $f12, 0x8($s0)
    ctx->pc = 0x1a28a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a28a8:
    // 0x1a28a8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a28a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1a28ac:
    // 0x1a28ac: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1a28acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1a28b0:
    // 0x1a28b0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1a28b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a28b4:
    // 0x1a28b4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a28b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a28b8:
    // 0x1a28b8: 0xc067b68  jal         func_19EDA0
label_1a28bc:
    if (ctx->pc == 0x1A28BCu) {
        ctx->pc = 0x1A28BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A28B8u;
        // 0x1a28bc: 0xe6010004  swc1        $f1, 0x4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A28C0u;
        goto label_1a28c0;
    }
    ctx->pc = 0x1A28B8u;
    SET_GPR_U32(ctx, 31, 0x1A28C0u);
    ctx->pc = 0x1A28BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A28B8u;
    // 0x1a28bc: 0xe6010004  swc1        $f1, 0x4($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EDA0u, 0x1A28B8u, 0x1A28C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A28C0u;
label_1a28c0:
    // 0x1a28c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a28c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a28c4:
    // 0x1a28c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a28c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a28c8:
    // 0x1a28c8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a28cc:
    if (ctx->pc == 0x1A28CCu) {
        ctx->pc = 0x1A28CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A28C8u;
        // 0x1a28cc: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A28D0u;
        goto label_1a28d0;
    }
    ctx->pc = 0x1A28C8u;
    {
        const bool branch_taken_0x1a28c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A28CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A28C8u;
        // 0x1a28cc: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a28c8) {
            ctx->pc = 0x1A28DCu;
            goto label_1a28dc;
        }
    }
    ctx->pc = 0x1A28D0u;
label_1a28d0:
    // 0x1a28d0: 0xc067b78  jal         func_19EDE0
label_1a28d4:
    if (ctx->pc == 0x1A28D4u) {
        ctx->pc = 0x1A28D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A28D0u;
        // 0x1a28d4: 0xc60d0008  lwc1        $f13, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A28D8u;
        goto label_1a28d8;
    }
    ctx->pc = 0x1A28D0u;
    SET_GPR_U32(ctx, 31, 0x1A28D8u);
    ctx->pc = 0x1A28D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A28D0u;
    // 0x1a28d4: 0xc60d0008  lwc1        $f13, 0x8($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EDE0u, 0x1A28D0u, 0x1A28D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A28D8u;
label_1a28d8:
    // 0x1a28d8: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1a28d8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1a28dc:
    // 0x1a28dc: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x1a28dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a28e0:
    // 0x1a28e0: 0xc067b78  jal         func_19EDE0
label_1a28e4:
    if (ctx->pc == 0x1A28E4u) {
        ctx->pc = 0x1A28E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A28E0u;
        // 0x1a28e4: 0xc60d000c  lwc1        $f13, 0xC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A28E8u;
        goto label_1a28e8;
    }
    ctx->pc = 0x1A28E0u;
    SET_GPR_U32(ctx, 31, 0x1A28E8u);
    ctx->pc = 0x1A28E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A28E0u;
    // 0x1a28e4: 0xc60d000c  lwc1        $f13, 0xC($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EDE0u, 0x1A28E0u, 0x1A28E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A28E8u;
label_1a28e8:
    // 0x1a28e8: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1a28e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a28ec:
    // 0x1a28ec: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1a28ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1a28f0:
    // 0x1a28f0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a28f4:
    if (ctx->pc == 0x1A28F4u) {
        ctx->pc = 0x1A28F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A28F0u;
        // 0x1a28f4: 0xe6010004  swc1        $f1, 0x4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A28F8u;
        goto label_1a28f8;
    }
    ctx->pc = 0x1A28F0u;
    {
        const bool branch_taken_0x1a28f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A28F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A28F0u;
        // 0x1a28f4: 0xe6010004  swc1        $f1, 0x4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a28f0) {
            ctx->pc = 0x1A2900u;
            goto label_1a2900;
        }
    }
    ctx->pc = 0x1A28F8u;
label_1a28f8:
    // 0x1a28f8: 0xc06881e  jal         func_1A2078
label_1a28fc:
    if (ctx->pc == 0x1A28FCu) {
        ctx->pc = 0x1A28FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A28F8u;
        // 0x1a28fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2900u;
        goto label_1a2900;
    }
    ctx->pc = 0x1A28F8u;
    SET_GPR_U32(ctx, 31, 0x1A2900u);
    ctx->pc = 0x1A28FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A28F8u;
    // 0x1a28fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2078u, 0x1A28F8u, 0x1A2900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2900u;
label_1a2900:
    // 0x1a2900: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1a2900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a2904:
    // 0x1a2904: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1a2904u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1a2908:
    // 0x1a2908: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a2908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a290c:
    // 0x1a290c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a2910:
    if (ctx->pc == 0x1A2910u) {
        ctx->pc = 0x1A2910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A290Cu;
        // 0x1a2910: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2914u;
        goto label_1a2914;
    }
    ctx->pc = 0x1A290Cu;
    {
        const bool branch_taken_0x1a290c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A290Cu;
        // 0x1a2910: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a290c) {
            ctx->pc = 0x1A2928u;
            goto label_1a2928;
        }
    }
    ctx->pc = 0x1A2914u;
label_1a2914:
    // 0x1a2914: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a2914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a2918:
    // 0x1a2918: 0x40f809  jalr        $v0
label_1a291c:
    if (ctx->pc == 0x1A291Cu) {
        ctx->pc = 0x1A291Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2918u;
        // 0x1a291c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2920u;
        goto label_1a2920;
    }
    ctx->pc = 0x1A2918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A2920u);
        ctx->pc = 0x1A291Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2918u;
        // 0x1a291c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2918u, 0x1A2920u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A2920u;
label_1a2920:
    // 0x1a2920: 0x1000000d  b           . + 4 + (0xD << 2)
label_1a2924:
    if (ctx->pc == 0x1A2924u) {
        ctx->pc = 0x1A2924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2920u;
        // 0x1a2924: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2928u;
        goto label_1a2928;
    }
    ctx->pc = 0x1A2920u;
    {
        const bool branch_taken_0x1a2920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2920u;
        // 0x1a2924: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2920) {
            ctx->pc = 0x1A2958u;
            goto label_1a2958;
        }
    }
    ctx->pc = 0x1A2928u;
label_1a2928:
    // 0x1a2928: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x1a2928u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_1a292c:
    // 0x1a292c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a2930:
    if (ctx->pc == 0x1A2930u) {
        ctx->pc = 0x1A2930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A292Cu;
        // 0x1a2930: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2934u;
        goto label_1a2934;
    }
    ctx->pc = 0x1A292Cu;
    {
        const bool branch_taken_0x1a292c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A292Cu;
        // 0x1a2930: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a292c) {
            ctx->pc = 0x1A2948u;
            goto label_1a2948;
        }
    }
    ctx->pc = 0x1A2934u;
label_1a2934:
    // 0x1a2934: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a2934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1a2938:
    // 0x1a2938: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x1a2938u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
label_1a293c:
    // 0x1a293c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a2940:
    if (ctx->pc == 0x1A2940u) {
        ctx->pc = 0x1A2940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A293Cu;
        // 0x1a2940: 0xe4540000  swc1        $f20, 0x0($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2944u;
        goto label_1a2944;
    }
    ctx->pc = 0x1A293Cu;
    {
        const bool branch_taken_0x1a293c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A293Cu;
        // 0x1a2940: 0xe4540000  swc1        $f20, 0x0($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a293c) {
            ctx->pc = 0x1A2958u;
            goto label_1a2958;
        }
    }
    ctx->pc = 0x1A2944u;
label_1a2944:
    // 0x1a2944: 0x0  nop
    ctx->pc = 0x1a2944u;
    // NOP
label_1a2948:
    // 0x1a2948: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a2948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a294c:
    // 0x1a294c: 0x24a59238  addiu       $a1, $a1, -0x6DC8
    ctx->pc = 0x1a294cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939192));
label_1a2950:
    // 0x1a2950: 0xc068186  jal         func_1A0618
label_1a2954:
    if (ctx->pc == 0x1A2954u) {
        ctx->pc = 0x1A2954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2950u;
        // 0x1a2954: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2958u;
        goto label_1a2958;
    }
    ctx->pc = 0x1A2950u;
    SET_GPR_U32(ctx, 31, 0x1A2958u);
    ctx->pc = 0x1A2954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2950u;
    // 0x1a2954: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A2950u, 0x1A2958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2958u;
label_1a2958:
    // 0x1a2958: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1a2958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1a295c:
    // 0x1a295c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a2960:
    if (ctx->pc == 0x1A2960u) {
        ctx->pc = 0x1A2960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A295Cu;
        // 0x1a2960: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2964u;
        goto label_1a2964;
    }
    ctx->pc = 0x1A295Cu;
    {
        const bool branch_taken_0x1a295c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A295Cu;
        // 0x1a2960: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a295c) {
            ctx->pc = 0x1A2970u;
            goto label_1a2970;
        }
    }
    ctx->pc = 0x1A2964u;
label_1a2964:
    // 0x1a2964: 0x40f809  jalr        $v0
label_1a2968:
    if (ctx->pc == 0x1A2968u) {
        ctx->pc = 0x1A2968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2964u;
        // 0x1a2968: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A296Cu;
        goto label_1a296c;
    }
    ctx->pc = 0x1A2964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A296Cu);
        ctx->pc = 0x1A2968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2964u;
        // 0x1a2968: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2964u, 0x1A296Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A296Cu;
label_1a296c:
    // 0x1a296c: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x1a296cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
label_1a2970:
    // 0x1a2970: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a2970u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a2974:
    // 0x1a2974: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a2974u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a2978:
    // 0x1a2978: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a2978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a297c:
    // 0x1a297c: 0xc7b50020  lwc1        $f21, 0x20($sp)
    ctx->pc = 0x1a297cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1a2980:
    // 0x1a2980: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x1a2980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a2984:
    // 0x1a2984: 0x3e00008  jr          $ra
label_1a2988:
    if (ctx->pc == 0x1A2988u) {
        ctx->pc = 0x1A2988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2984u;
        // 0x1a2988: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A298Cu;
        goto label_fallthrough_0x1a2984;
    }
    ctx->pc = 0x1A2984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2984u;
        // 0x1a2988: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a2984:
    ctx->pc = 0x1A298Cu;
}
