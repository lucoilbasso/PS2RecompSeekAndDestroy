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

// Function: Cmd_MAG_3DPOS_Entry__FP15BsSCDEntControl
// Address: 0x111860 - 0x111920
void Cmd_MAG_3DPOS_Entry__FP15BsSCDEntControl_0x111860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_MAG_3DPOS_Entry__FP15BsSCDEntControl_0x111860");
#endif

    switch (ctx->pc) {
        case 0x11188cu: goto label_11188c;
        case 0x1118e0u: goto label_1118e0;
        default: break;
    }

    ctx->pc = 0x111860u;

    // 0x111860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x111860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x111864: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x111864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x111868: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x111868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11186c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x11186cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x111870: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x111870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x111874: 0x8c50b830  lw          $s0, -0x47D0($v0)
    ctx->pc = 0x111874u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x1FB830u));
    // 0x111878: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x111878u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x11187c: 0x14c30010  bne         $a2, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x11187Cu;
    {
        const bool branch_taken_0x11187c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x111880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11187Cu;
        // 0x111880: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11187c) {
            ctx->pc = 0x1118C0u;
            goto label_1118c0;
        }
    }
    ctx->pc = 0x111884u;
    // 0x111884: 0xc0416dc  jal         func_105B70
    ctx->pc = 0x111884u;
    SET_GPR_U32(ctx, 31, 0x11188Cu);
    ctx->pc = 0x111888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111884u;
    // 0x111888: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B70u, 0x111884u, 0x11188Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11188Cu;
label_11188c:
    // 0x11188c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x11188cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x111890: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x111890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x111894: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x111894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x111898: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x111898u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11189c: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x11189cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1118a0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1118a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1118a4: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1118a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1118a8: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1118a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1118ac: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x1118acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1118b0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1118b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1118b4: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x1118b4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1118b8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1118B8u;
    {
        const bool branch_taken_0x1118b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1118BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1118B8u;
        // 0x1118bc: 0xe6030008  swc1        $f3, 0x8($s0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1118b8) {
            ctx->pc = 0x111910u;
            goto label_111910;
        }
    }
    ctx->pc = 0x1118C0u;
label_1118c0:
    // 0x1118c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1118c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1118c4: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1118C4u;
    {
        const bool branch_taken_0x1118c4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1118C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1118C4u;
        // 0x1118c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1118c4) {
            ctx->pc = 0x1118E8u;
            goto label_1118e8;
        }
    }
    ctx->pc = 0x1118CCu;
    // 0x1118cc: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x1118ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1118d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1118d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1118d4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1118d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1118d8: 0xc0614f6  jal         func_1853D8
    ctx->pc = 0x1118D8u;
    SET_GPR_U32(ctx, 31, 0x1118E0u);
    ctx->pc = 0x1118DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1118D8u;
    // 0x1118dc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1853D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1853D8u, 0x1118D8u, 0x1118E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1118E0u;
label_1118e0:
    // 0x1118e0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1118E0u;
    {
        const bool branch_taken_0x1118e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1118E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1118E0u;
        // 0x1118e4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1118e0) {
            ctx->pc = 0x111914u;
            goto label_111914;
        }
    }
    ctx->pc = 0x1118E8u;
label_1118e8:
    // 0x1118e8: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x1118e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1118ec: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x1118ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1118f0: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x1118f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1118f4: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x1118f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1118f8: 0x4a6503be  vrsqrt      $Q, $vf0w, $vf5x
    ctx->pc = 0x1118f8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1118fc: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x1118fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x111900: 0x4be43183  vaddw.xyzw  $vf6, $vf6, $vf4w
    ctx->pc = 0x111900u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x111904: 0x4a0003bf  vwaitq
    ctx->pc = 0x111904u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x111908: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x111908u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x11190c: 0xf8a60000  sqc2        $vf6, 0x0($a1)
    ctx->pc = 0x11190cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[6]));
label_111910:
    // 0x111910: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x111910u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_111914:
    // 0x111914: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x111914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x111918: 0x3e00008  jr          $ra
    ctx->pc = 0x111918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11191Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111918u;
        // 0x11191c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111920u;
}
