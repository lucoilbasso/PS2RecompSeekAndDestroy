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

// Function: ApMotionForwardProc__FP11BMotionCtrlP11BMotionWorki
// Address: 0x139770 - 0x139894
void ApMotionForwardProc__FP11BMotionCtrlP11BMotionWorki_0x139770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApMotionForwardProc__FP11BMotionCtrlP11BMotionWorki_0x139770");
#endif

    switch (ctx->pc) {
        case 0x1397acu: goto label_1397ac;
        case 0x1397ecu: goto label_1397ec;
        case 0x1397f4u: goto label_1397f4;
        case 0x139834u: goto label_139834;
        case 0x139860u: goto label_139860;
        default: break;
    }

    ctx->pc = 0x139770u;

    // 0x139770: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x139770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x139774: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x139774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x139778: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x139778u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13977c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13977cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139780: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x139780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x139784: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x139784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x139788: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x139788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x13978c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x13978cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x139790: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x139790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x139794: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x139794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x139798: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x139798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x13979c: 0xe7b40068  swc1        $f20, 0x68($sp)
    ctx->pc = 0x13979cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1397a0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1397a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1397a4: 0xc069236  jal         func_1A48D8
    ctx->pc = 0x1397A4u;
    SET_GPR_U32(ctx, 31, 0x1397ACu);
    ctx->pc = 0x1397A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1397A4u;
    // 0x1397a8: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A48D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A48D8u, 0x1397A4u, 0x1397ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1397ACu;
label_1397ac:
    // 0x1397ac: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1397acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1397b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1397b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1397b4: 0x8e160014  lw          $s6, 0x14($s0)
    ctx->pc = 0x1397b4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1397b8: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x1397b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1397bc: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x1397bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1397c0: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x1397c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1397c4: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1397c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1397c8: 0xc6340088  lwc1        $f20, 0x88($s1)
    ctx->pc = 0x1397c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1397cc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1397ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1397d0: 0x26130020  addiu       $s3, $s0, 0x20
    ctx->pc = 0x1397d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1397d4: 0x96620002  lhu         $v0, 0x2($s3)
    ctx->pc = 0x1397d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x1397d8: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x1397d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x1397dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1397DCu;
    {
        const bool branch_taken_0x1397dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1397E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1397DCu;
        // 0x1397e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1397dc) {
            ctx->pc = 0x1397ECu;
            goto label_1397ec;
        }
    }
    ctx->pc = 0x1397E4u;
    // 0x1397e4: 0xc061920  jal         func_186480
    ctx->pc = 0x1397E4u;
    SET_GPR_U32(ctx, 31, 0x1397ECu);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x1397E4u, 0x1397ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1397ECu;
label_1397ec:
    // 0x1397ec: 0xc061422  jal         func_185088
    ctx->pc = 0x1397ECu;
    SET_GPR_U32(ctx, 31, 0x1397F4u);
    ctx->pc = 0x1397F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1397ECu;
    // 0x1397f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x1397ECu, 0x1397F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1397F4u;
label_1397f4:
    // 0x1397f4: 0x260300e0  addiu       $v1, $s0, 0xE0
    ctx->pc = 0x1397f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x1397f8: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1397f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1397fc: 0x7ea20000  sq          $v0, 0x0($s5)
    ctx->pc = 0x1397fcu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 2));
    // 0x139800: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x139800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x139804: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x139804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139808: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x139808u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13980c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x13980Cu;
    {
        const bool branch_taken_0x13980c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x139810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13980Cu;
        // 0x139810: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13980c) {
            ctx->pc = 0x13982Cu;
            goto label_13982c;
        }
    }
    ctx->pc = 0x139814u;
    // 0x139814: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x139814u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x139818: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x139818u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x13981c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x13981cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x139820: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x139820u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x139824: 0xfa810000  sqc2        $vf1, 0x0($s4)
    ctx->pc = 0x139824u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x139828: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x139828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13982c:
    // 0x13982c: 0xc04e4f2  jal         func_1393C8
    ctx->pc = 0x13982Cu;
    SET_GPR_U32(ctx, 31, 0x139834u);
    ctx->pc = 0x139830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13982Cu;
    // 0x139830: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1393C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1393C8u, 0x13982Cu, 0x139834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139834u;
label_139834:
    // 0x139834: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x139834u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x139838: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x139838u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13983c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x13983cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x139840: 0xfa420000  sqc2        $vf2, 0x0($s2)
    ctx->pc = 0x139840u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x139844: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x139844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x139848: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x139848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13984c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13984cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139850: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x139850u;
    {
        const bool branch_taken_0x139850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x139854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139850u;
        // 0x139854: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139850) {
            ctx->pc = 0x139864u;
            goto label_139864;
        }
    }
    ctx->pc = 0x139858u;
    // 0x139858: 0xc06924e  jal         func_1A4938
    ctx->pc = 0x139858u;
    SET_GPR_U32(ctx, 31, 0x139860u);
    ctx->pc = 0x1A4938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4938u, 0x139858u, 0x139860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139860u;
label_139860:
    // 0x139860: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x139860u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_139864:
    // 0x139864: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x139864u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x139868: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x139868u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13986c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x13986cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x139870: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x139870u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x139874: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x139874u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x139878: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x139878u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13987c: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x13987cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x139880: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x139880u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x139884: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x139884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x139888: 0xc7b40068  lwc1        $f20, 0x68($sp)
    ctx->pc = 0x139888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13988c: 0x3e00008  jr          $ra
    ctx->pc = 0x13988Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13988Cu;
        // 0x139890: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13988Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139894u;
}
