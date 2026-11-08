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

// Function: EffectSendLozenge__17ST_EffectParticlePUiUiP20ST_ParticleGenerator
// Address: 0x11f2f0 - 0x11f3d0
void EffectSendLozenge__17ST_EffectParticlePUiUiP20ST_ParticleGenerator_0x11f2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectSendLozenge__17ST_EffectParticlePUiUiP20ST_ParticleGenerator_0x11f2f0");
#endif

    switch (ctx->pc) {
        case 0x11f348u: goto label_11f348;
        default: break;
    }

    ctx->pc = 0x11f2f0u;

    // 0x11f2f0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x11f2f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f2f4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x11f2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x11f2f8: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x11f2f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x11f2fc: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x11f2fcu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11f300: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x11f300u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11f304: 0x44825800  mtc1        $v0, $f11
    ctx->pc = 0x11f304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x11f308: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x11f308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x11f30c: 0x48a52000  qmtc2.ni    $a1, $vf4
    ctx->pc = 0x11f30cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x11f310: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x11f310u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11f314: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x11f314u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11f318: 0x44825000  mtc1        $v0, $f10
    ctx->pc = 0x11f318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x11f31c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x11f31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x11f320: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x11f320u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x11f324: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x11f324u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11f328: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x11f328u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11f32c: 0x44824800  mtc1        $v0, $f9
    ctx->pc = 0x11f32cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x11f330: 0x10c00025  beqz        $a2, . + 4 + (0x25 << 2)
    ctx->pc = 0x11F330u;
    {
        const bool branch_taken_0x11f330 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F330u;
        // 0x11f334: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f330) {
            ctx->pc = 0x11F3C8u;
            goto label_11f3c8;
        }
    }
    ctx->pc = 0x11F338u;
    // 0x11f338: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x11f338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x11f33c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x11f33cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x11f340: 0x244448c0  addiu       $a0, $v0, 0x48C0
    ctx->pc = 0x11f340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 18624));
    // 0x11f344: 0x24630790  addiu       $v1, $v1, 0x790
    ctx->pc = 0x11f344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1936));
label_11f348:
    // 0x11f348: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11f348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11f34c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x11F34Cu;
    {
        const bool branch_taken_0x11f34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F34Cu;
        // 0x11f350: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f34c) {
            ctx->pc = 0x11F3B8u;
            goto label_11f3b8;
        }
    }
    ctx->pc = 0x11F354u;
    // 0x11f354: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x11f354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f358: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x11f358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11f35c: 0x460b0002  mul.s       $f0, $f0, $f11
    ctx->pc = 0x11f35cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
    // 0x11f360: 0xc4850008  lwc1        $f5, 0x8($a0)
    ctx->pc = 0x11f360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x11f364: 0xc4430070  lwc1        $f3, 0x70($v0)
    ctx->pc = 0x11f364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11f368: 0x460a1082  mul.s       $f2, $f2, $f10
    ctx->pc = 0x11f368u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
    // 0x11f36c: 0x46092942  mul.s       $f5, $f5, $f9
    ctx->pc = 0x11f36cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
    // 0x11f370: 0xc488000c  lwc1        $f8, 0xC($a0)
    ctx->pc = 0x11f370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x11f374: 0xc4460074  lwc1        $f6, 0x74($v0)
    ctx->pc = 0x11f374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x11f378: 0xc4470078  lwc1        $f7, 0x78($v0)
    ctx->pc = 0x11f378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x11f37c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x11f37cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x11f380: 0xc4440080  lwc1        $f4, 0x80($v0)
    ctx->pc = 0x11f380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11f384: 0x46023180  add.s       $f6, $f6, $f2
    ctx->pc = 0x11f384u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x11f388: 0xc4410084  lwc1        $f1, 0x84($v0)
    ctx->pc = 0x11f388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11f38c: 0x460539c0  add.s       $f7, $f7, $f5
    ctx->pc = 0x11f38cu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[5]);
    // 0x11f390: 0xc4400088  lwc1        $f0, 0x88($v0)
    ctx->pc = 0x11f390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f394: 0x46082102  mul.s       $f4, $f4, $f8
    ctx->pc = 0x11f394u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[8]);
    // 0x11f398: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x11f398u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x11f39c: 0xe4430070  swc1        $f3, 0x70($v0)
    ctx->pc = 0x11f39cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x11f3a0: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x11f3a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x11f3a4: 0xe4460074  swc1        $f6, 0x74($v0)
    ctx->pc = 0x11f3a4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x11f3a8: 0xe4470078  swc1        $f7, 0x78($v0)
    ctx->pc = 0x11f3a8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x11f3ac: 0xe4440080  swc1        $f4, 0x80($v0)
    ctx->pc = 0x11f3acu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x11f3b0: 0xe4410084  swc1        $f1, 0x84($v0)
    ctx->pc = 0x11f3b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x11f3b4: 0xe4400088  swc1        $f0, 0x88($v0)
    ctx->pc = 0x11f3b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
label_11f3b8:
    // 0x11f3b8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x11f3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x11f3bc: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x11f3bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11f3c0: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x11F3C0u;
    {
        const bool branch_taken_0x11f3c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F3C0u;
        // 0x11f3c4: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f3c0) {
            ctx->pc = 0x11F348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f348;
        }
    }
    ctx->pc = 0x11F3C8u;
label_11f3c8:
    // 0x11f3c8: 0x3e00008  jr          $ra
    ctx->pc = 0x11F3C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F3C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F3D0u;
}
