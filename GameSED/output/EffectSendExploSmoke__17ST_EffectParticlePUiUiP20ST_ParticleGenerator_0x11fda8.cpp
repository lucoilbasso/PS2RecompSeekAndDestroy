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

// Function: EffectSendExploSmoke__17ST_EffectParticlePUiUiP20ST_ParticleGenerator
// Address: 0x11fda8 - 0x11fec4
void EffectSendExploSmoke__17ST_EffectParticlePUiUiP20ST_ParticleGenerator_0x11fda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectSendExploSmoke__17ST_EffectParticlePUiUiP20ST_ParticleGenerator_0x11fda8");
#endif

    switch (ctx->pc) {
        case 0x11fe48u: goto label_11fe48;
        default: break;
    }

    ctx->pc = 0x11fda8u;

    // 0x11fda8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x11fda8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fdac: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x11fdacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x11fdb0: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x11fdb0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x11fdb4: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x11fdb4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11fdb8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x11fdb8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11fdbc: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x11fdbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x11fdc0: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x11fdc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x11fdc4: 0x48a52000  qmtc2.ni    $a1, $vf4
    ctx->pc = 0x11fdc4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x11fdc8: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x11fdc8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11fdcc: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x11fdccu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11fdd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11fdd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11fdd4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x11fdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x11fdd8: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x11fdd8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x11fddc: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x11fddcu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11fde0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x11fde0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11fde4: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x11fde4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x11fde8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x11fde8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x11fdec: 0x48a52000  qmtc2.ni    $a1, $vf4
    ctx->pc = 0x11fdecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x11fdf0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x11fdf0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11fdf4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x11fdf4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11fdf8: 0x44823800  mtc1        $v0, $f7
    ctx->pc = 0x11fdf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x11fdfc: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x11fdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x11fe00: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x11fe00u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x11fe04: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x11fe04u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11fe08: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x11fe08u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11fe0c: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x11fe0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x11fe10: 0x2ce4000d  sltiu       $a0, $a3, 0xD
    ctx->pc = 0x11fe10u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x11fe14: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x11fe14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x11fe18: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x11fe18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x11fe1c: 0x44380a  movz        $a3, $v0, $a0
    ctx->pc = 0x11fe1cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x11fe20: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11FE20u;
    {
        const bool branch_taken_0x11fe20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11fe20) {
            ctx->pc = 0x11FE24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FE20u;
            // 0x11fe24: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FE28u;
            goto label_11fe28;
        }
    }
    ctx->pc = 0x11FE28u;
label_11fe28:
    // 0x11fe28: 0x18e00024  blez        $a3, . + 4 + (0x24 << 2)
    ctx->pc = 0x11FE28u;
    {
        const bool branch_taken_0x11fe28 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x11FE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE28u;
        // 0x11fe2c: 0x3c030041  lui         $v1, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fe28) {
            ctx->pc = 0x11FEBCu;
            goto label_11febc;
        }
    }
    ctx->pc = 0x11FE30u;
    // 0x11fe30: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x11fe30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11fe34: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x11fe34u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x11fe38: 0x24467100  addiu       $a2, $v0, 0x7100
    ctx->pc = 0x11fe38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 28928));
    // 0x11fe3c: 0x24680790  addiu       $t0, $v1, 0x790
    ctx->pc = 0x11fe3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 1936));
    // 0x11fe40: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x11fe40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fe44: 0x0  nop
    ctx->pc = 0x11fe44u;
    // NOP
label_11fe48:
    // 0x11fe48: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x11fe48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x11fe4c: 0x24830080  addiu       $v1, $a0, 0x80
    ctx->pc = 0x11fe4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x11fe50: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x11fe50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x11fe54: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x11fe54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x11fe58: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x11fe58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x11fe5c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x11fe5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x11fe60: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x11fe60u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x11fe64: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x11fe64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11fe68: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x11fe68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x11fe6c: 0xc4810070  lwc1        $f1, 0x70($a0)
    ctx->pc = 0x11fe6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11fe70: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x11fe70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x11fe74: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x11fe74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x11fe78: 0xc4820078  lwc1        $f2, 0x78($a0)
    ctx->pc = 0x11fe78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11fe7c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x11fe7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x11fe80: 0xe4810070  swc1        $f1, 0x70($a0)
    ctx->pc = 0x11fe80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x11fe84: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x11fe84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11fe88: 0xe4870094  swc1        $f7, 0x94($a0)
    ctx->pc = 0x11fe88u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
    // 0x11fe8c: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x11fe8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x11fe90: 0xe48600a4  swc1        $f6, 0xA4($a0)
    ctx->pc = 0x11fe90u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
    // 0x11fe94: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x11fe94u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x11fe98: 0xe4820078  swc1        $f2, 0x78($a0)
    ctx->pc = 0x11fe98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
    // 0x11fe9c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x11fe9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11fea0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x11fea0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x11fea4: 0xe4800090  swc1        $f0, 0x90($a0)
    ctx->pc = 0x11fea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
    // 0x11fea8: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x11fea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11feac: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x11feacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x11feb0: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x11feb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x11feb4: 0x14a0ffe4  bnez        $a1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x11FEB4u;
    {
        const bool branch_taken_0x11feb4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FEB4u;
        // 0x11feb8: 0xe4810098  swc1        $f1, 0x98($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11feb4) {
            ctx->pc = 0x11FE48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11fe48;
        }
    }
    ctx->pc = 0x11FEBCu;
label_11febc:
    // 0x11febc: 0x3e00008  jr          $ra
    ctx->pc = 0x11FEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FEBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FEC4u;
}
