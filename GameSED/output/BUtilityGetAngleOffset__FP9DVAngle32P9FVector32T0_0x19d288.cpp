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

// Function: BUtilityGetAngleOffset__FP9DVAngle32P9FVector32T0
// Address: 0x19d288 - 0x19d614
void BUtilityGetAngleOffset__FP9DVAngle32P9FVector32T0_0x19d288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BUtilityGetAngleOffset__FP9DVAngle32P9FVector32T0_0x19d288");
#endif

    ctx->pc = 0x19d288u;

    // 0x19d288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19d288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19d28c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x19d28cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d290: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x19d290u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d294: 0x7d000000  sq          $zero, 0x0($t0)
    ctx->pc = 0x19d294u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 0));
    // 0x19d298: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x19d298u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19d29c: 0xd8e50000  lqc2        $vf5, 0x0($a3)
    ctx->pc = 0x19d29cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19d2a0: 0x4bc5212a  vmul.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x19d2a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19d2a4: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x19d2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19d2a8: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x19d2a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x19d2ac: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x19d2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19d2b0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x19d2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19d2b4: 0x46000940  add.s       $f5, $f1, $f0
    ctx->pc = 0x19d2b4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19d2b8: 0x46042832  c.eq.s      $f5, $f4
    ctx->pc = 0x19d2b8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19d2bc: 0x45030065  bc1tl       . + 4 + (0x65 << 2)
    ctx->pc = 0x19D2BCu;
    {
        const bool branch_taken_0x19d2bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19d2bc) {
            ctx->pc = 0x19D2C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19D2BCu;
            // 0x19d2c0: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x19D454u;
            goto label_19d454;
        }
    }
    ctx->pc = 0x19D2C4u;
    // 0x19d2c4: 0xc4e20008  lwc1        $f2, 0x8($a3)
    ctx->pc = 0x19d2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19d2c8: 0x46041032  c.eq.s      $f2, $f4
    ctx->pc = 0x19d2c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19d2cc: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x19D2CCu;
    {
        const bool branch_taken_0x19d2cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19D2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D2CCu;
        // 0x19d2d0: 0xc4e30000  lwc1        $f3, 0x0($a3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d2cc) {
            ctx->pc = 0x19D2F8u;
            goto label_19d2f8;
        }
    }
    ctx->pc = 0x19D2D4u;
    // 0x19d2d4: 0x46041832  c.eq.s      $f3, $f4
    ctx->pc = 0x19d2d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19d2d8: 0x45010054  bc1t        . + 4 + (0x54 << 2)
    ctx->pc = 0x19D2D8u;
    {
        const bool branch_taken_0x19d2d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19D2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D2D8u;
        // 0x19d2dc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d2d8) {
            ctx->pc = 0x19D42Cu;
            goto label_19d42c;
        }
    }
    ctx->pc = 0x19D2E0u;
    // 0x19d2e0: 0x46032036  c.le.s      $f4, $f3
    ctx->pc = 0x19d2e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19d2e4: 0x45010051  bc1t        . + 4 + (0x51 << 2)
    ctx->pc = 0x19D2E4u;
    {
        const bool branch_taken_0x19d2e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19D2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D2E4u;
        // 0x19d2e8: 0x24032000  addiu       $v1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d2e4) {
            ctx->pc = 0x19D42Cu;
            goto label_19d42c;
        }
    }
    ctx->pc = 0x19D2ECu;
    // 0x19d2ec: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x19D2ECu;
    {
        const bool branch_taken_0x19d2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D2ECu;
        // 0x19d2f0: 0x2403e000  addiu       $v1, $zero, -0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d2ec) {
            ctx->pc = 0x19D42Cu;
            goto label_19d42c;
        }
    }
    ctx->pc = 0x19D2F4u;
    // 0x19d2f4: 0x0  nop
    ctx->pc = 0x19d2f4u;
    // NOP
label_19d2f8:
    // 0x19d2f8: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x19d2f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x19d2fc: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x19d2fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x19d300: 0x432826  xor         $a1, $v0, $v1
    ctx->pc = 0x19d300u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x19d304: 0x3c047fff  lui         $a0, 0x7FFF
    ctx->pc = 0x19d304u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32767 << 16));
    // 0x19d308: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x19d308u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x19d30c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x19d30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x19d310: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x19d310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x19d314: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x19d314u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x19d318: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x19d318u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x19d31c: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x19d31cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x19d320: 0x48a32800  qmtc2.ni    $v1, $vf5
    ctx->pc = 0x19d320u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x19d324: 0x3c043f7f  lui         $a0, 0x3F7F
    ctx->pc = 0x19d324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16255 << 16));
    // 0x19d328: 0x3484fff5  ori         $a0, $a0, 0xFFF5
    ctx->pc = 0x19d328u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65525);
    // 0x19d32c: 0x48a45800  qmtc2.ni    $a0, $vf11
    ctx->pc = 0x19d32cu;
    ctx->vu0_vf[11] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x19d330: 0x4b042868  vadd.x      $vf1, $vf5, $vf4
    ctx->pc = 0x19d330u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19d334: 0x4b0428ac  vsub.x      $vf2, $vf5, $vf4
    ctx->pc = 0x19d334u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19d338: 0x3c04beaa  lui         $a0, 0xBEAA
    ctx->pc = 0x19d338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48810 << 16));
    // 0x19d33c: 0x3484a61c  ori         $a0, $a0, 0xA61C
    ctx->pc = 0x19d33cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)42524);
    // 0x19d340: 0x48a46000  qmtc2.ni    $a0, $vf12
    ctx->pc = 0x19d340u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x19d344: 0x4a0113bc  vdiv        $Q, $vf2x, $vf1x
    ctx->pc = 0x19d344u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x19d348: 0x3c043e4c  lui         $a0, 0x3E4C
    ctx->pc = 0x19d348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15948 << 16));
    // 0x19d34c: 0x348440a6  ori         $a0, $a0, 0x40A6
    ctx->pc = 0x19d34cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16550);
    // 0x19d350: 0x48a46800  qmtc2.ni    $a0, $vf13
    ctx->pc = 0x19d350u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x19d354: 0x3c04be0e  lui         $a0, 0xBE0E
    ctx->pc = 0x19d354u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48654 << 16));
    // 0x19d358: 0x34846c63  ori         $a0, $a0, 0x6C63
    ctx->pc = 0x19d358u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)27747);
    // 0x19d35c: 0x48a47000  qmtc2.ni    $a0, $vf14
    ctx->pc = 0x19d35cu;
    ctx->vu0_vf[14] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x19d360: 0x3c043dc5  lui         $a0, 0x3DC5
    ctx->pc = 0x19d360u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15813 << 16));
    // 0x19d364: 0x348477df  ori         $a0, $a0, 0x77DF
    ctx->pc = 0x19d364u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30687);
    // 0x19d368: 0x48a47800  qmtc2.ni    $a0, $vf15
    ctx->pc = 0x19d368u;
    ctx->vu0_vf[15] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x19d36c: 0x4a0003bf  vwaitq
    ctx->pc = 0x19d36cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x19d370: 0x4b000120  vaddq.x     $vf4, $vf0, $Q
    ctx->pc = 0x19d370u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19d374: 0x3c04bd65  lui         $a0, 0xBD65
    ctx->pc = 0x19d374u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48485 << 16));
    // 0x19d378: 0x348401c4  ori         $a0, $a0, 0x1C4
    ctx->pc = 0x19d378u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)452);
    // 0x19d37c: 0x4b0420ea  vmul.x      $vf3, $vf4, $vf4
    ctx->pc = 0x19d37cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x19d380: 0x4b045abe  vmula.x     $ACC, $vf11, $vf4
    ctx->pc = 0x19d380u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[11], ctx->vu0_vf[4]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x19d384: 0x48a48000  qmtc2.ni    $a0, $vf16
    ctx->pc = 0x19d384u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x19d388: 0x4b04186a  vmul.x      $vf1, $vf3, $vf4
    ctx->pc = 0x19d388u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19d38c: 0x4a0002ff  vnop
    ctx->pc = 0x19d38cu;
    // NOP operation, no action needed for VU0
    // 0x19d390: 0x3c043cb3  lui         $a0, 0x3CB3
    ctx->pc = 0x19d390u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15539 << 16));
    // 0x19d394: 0x34841652  ori         $a0, $a0, 0x1652
    ctx->pc = 0x19d394u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)5714);
    // 0x19d398: 0x4b0308aa  vmul.x      $vf2, $vf1, $vf3
    ctx->pc = 0x19d398u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19d39c: 0x4b0c0abd  vmadda.x    $ACC, $vf1, $vf12
    ctx->pc = 0x19d39cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[12]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x19d3a0: 0x48a48800  qmtc2.ni    $a0, $vf17
    ctx->pc = 0x19d3a0u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x19d3a4: 0x4b03106a  vmul.x      $vf1, $vf2, $vf3
    ctx->pc = 0x19d3a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19d3a8: 0x4b0d12bd  vmadda.x    $ACC, $vf2, $vf13
    ctx->pc = 0x19d3a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[13]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x19d3ac: 0x3c04bb84  lui         $a0, 0xBB84
    ctx->pc = 0x19d3acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48004 << 16));
    // 0x19d3b0: 0x3484d7e7  ori         $a0, $a0, 0xD7E7
    ctx->pc = 0x19d3b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55271);
    // 0x19d3b4: 0x4b0308aa  vmul.x      $vf2, $vf1, $vf3
    ctx->pc = 0x19d3b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19d3b8: 0x4b0e0abd  vmadda.x    $ACC, $vf1, $vf14
    ctx->pc = 0x19d3b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[14]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x19d3bc: 0x48a49000  qmtc2.ni    $a0, $vf18
    ctx->pc = 0x19d3bcu;
    ctx->vu0_vf[18] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x19d3c0: 0x4b03106a  vmul.x      $vf1, $vf2, $vf3
    ctx->pc = 0x19d3c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19d3c4: 0x4b0f12bd  vmadda.x    $ACC, $vf2, $vf15
    ctx->pc = 0x19d3c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[15]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x19d3c8: 0x3c043f49  lui         $a0, 0x3F49
    ctx->pc = 0x19d3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16201 << 16));
    // 0x19d3cc: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x19d3ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x19d3d0: 0x4b0308aa  vmul.x      $vf2, $vf1, $vf3
    ctx->pc = 0x19d3d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19d3d4: 0x4b100abd  vmadda.x    $ACC, $vf1, $vf16
    ctx->pc = 0x19d3d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[16]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x19d3d8: 0x48a49800  qmtc2.ni    $a0, $vf19
    ctx->pc = 0x19d3d8u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x19d3dc: 0x4b03106a  vmul.x      $vf1, $vf2, $vf3
    ctx->pc = 0x19d3dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19d3e0: 0x4b1112bd  vmadda.x    $ACC, $vf2, $vf17
    ctx->pc = 0x19d3e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[17]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x19d3e4: 0x4b0098bf  vmaddaw.x   $ACC, $vf19, $vf0w
    ctx->pc = 0x19d3e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x19d3e8: 0x4a0002ff  vnop
    ctx->pc = 0x19d3e8u;
    // NOP operation, no action needed for VU0
    // 0x19d3ec: 0x4b1208a9  vmadd.x     $vf2, $vf1, $vf18
    ctx->pc = 0x19d3ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[18]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19d3f0: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x19d3f0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19d3f4: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x19d3f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x19d3f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19d3f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19d3fc: 0xc78185d4  lwc1        $f1, -0x7A2C($gp)
    ctx->pc = 0x19d3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19d400: 0x46041034  c.lt.s      $f2, $f4
    ctx->pc = 0x19d400u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19d404: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x19d404u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x19d408: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19d408u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x19d40c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x19d40cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x19d410: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x19D410u;
    {
        const bool branch_taken_0x19d410 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19D414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D410u;
        // 0x19d414: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d410) {
            ctx->pc = 0x19D42Cu;
            goto label_19d42c;
        }
    }
    ctx->pc = 0x19D418u;
    // 0x19d418: 0x46032036  c.le.s      $f4, $f3
    ctx->pc = 0x19d418u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19d41c: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x19D41Cu;
    {
        const bool branch_taken_0x19d41c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19d41c) {
            ctx->pc = 0x19D420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19D41Cu;
            // 0x19d420: 0x2442c000  addiu       $v0, $v0, -0x4000 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950912));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19D428u;
            goto label_19d428;
        }
    }
    ctx->pc = 0x19D424u;
    // 0x19d424: 0x24424000  addiu       $v0, $v0, 0x4000
    ctx->pc = 0x19d424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16384));
label_19d428:
    // 0x19d428: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19d428u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19d42c:
    // 0x19d42c: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x19D42Cu;
    {
        const bool branch_taken_0x19d42c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D42Cu;
        // 0x19d430: 0xad030004  sw          $v1, 0x4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d42c) {
            ctx->pc = 0x19D450u;
            goto label_19d450;
        }
    }
    ctx->pc = 0x19D434u;
    // 0x19d434: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x19d434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x19d438: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x19d438u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19d43c: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x19d43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x19d440: 0x28444000  slti        $a0, $v0, 0x4000
    ctx->pc = 0x19d440u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x19d444: 0x24438000  addiu       $v1, $v0, -0x8000
    ctx->pc = 0x19d444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x19d448: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x19d448u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x19d44c: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x19d44cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
label_19d450:
    // 0x19d450: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x19d450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19d454:
    // 0x19d454: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x19d454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19d458: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x19d458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19d45c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19d45cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x19d460: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x19d460u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x19d464: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x19d464u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x19d468: 0x46040032  c.eq.s      $f0, $f4
    ctx->pc = 0x19d468u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19d46c: 0x45010067  bc1t        . + 4 + (0x67 << 2)
    ctx->pc = 0x19D46Cu;
    {
        const bool branch_taken_0x19d46c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19D470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D46Cu;
        // 0x19d470: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d46c) {
            ctx->pc = 0x19D60Cu;
            goto label_19d60c;
        }
    }
    ctx->pc = 0x19D474u;
    // 0x19d474: 0xc4e30004  lwc1        $f3, 0x4($a3)
    ctx->pc = 0x19d474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19d478: 0x46050004  c1          0x50004
    ctx->pc = 0x19d478u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x19d47c: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x19d47cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x19d480: 0x46041032  c.eq.s      $f2, $f4
    ctx->pc = 0x19d480u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19d484: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x19D484u;
    {
        const bool branch_taken_0x19d484 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19d484) {
            ctx->pc = 0x19D4B0u;
            goto label_19d4b0;
        }
    }
    ctx->pc = 0x19D48Cu;
    // 0x19d48c: 0x46041832  c.eq.s      $f3, $f4
    ctx->pc = 0x19d48cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19d490: 0x45010053  bc1t        . + 4 + (0x53 << 2)
    ctx->pc = 0x19D490u;
    {
        const bool branch_taken_0x19d490 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19D494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D490u;
        // 0x19d494: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d490) {
            ctx->pc = 0x19D5E0u;
            goto label_19d5e0;
        }
    }
    ctx->pc = 0x19D498u;
    // 0x19d498: 0x46032036  c.le.s      $f4, $f3
    ctx->pc = 0x19d498u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19d49c: 0x45010050  bc1t        . + 4 + (0x50 << 2)
    ctx->pc = 0x19D49Cu;
    {
        const bool branch_taken_0x19d49c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19D4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D49Cu;
        // 0x19d4a0: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d49c) {
            ctx->pc = 0x19D5E0u;
            goto label_19d5e0;
        }
    }
    ctx->pc = 0x19D4A4u;
    // 0x19d4a4: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x19D4A4u;
    {
        const bool branch_taken_0x19d4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D4A4u;
        // 0x19d4a8: 0x2402e000  addiu       $v0, $zero, -0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d4a4) {
            ctx->pc = 0x19D5E0u;
            goto label_19d5e0;
        }
    }
    ctx->pc = 0x19D4ACu;
    // 0x19d4ac: 0x0  nop
    ctx->pc = 0x19d4acu;
    // NOP
label_19d4b0:
    // 0x19d4b0: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x19d4b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x19d4b4: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x19d4b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x19d4b8: 0x432826  xor         $a1, $v0, $v1
    ctx->pc = 0x19d4b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x19d4bc: 0x3c047fff  lui         $a0, 0x7FFF
    ctx->pc = 0x19d4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32767 << 16));
    // 0x19d4c0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x19d4c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x19d4c4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x19d4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x19d4c8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x19d4c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x19d4cc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x19d4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x19d4d0: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x19d4d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x19d4d4: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x19d4d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x19d4d8: 0x48a32800  qmtc2.ni    $v1, $vf5
    ctx->pc = 0x19d4d8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x19d4dc: 0x3c043f7f  lui         $a0, 0x3F7F
    ctx->pc = 0x19d4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16255 << 16));
    // 0x19d4e0: 0x3484fff5  ori         $a0, $a0, 0xFFF5
    ctx->pc = 0x19d4e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65525);
    // 0x19d4e4: 0x48a45800  qmtc2.ni    $a0, $vf11
    ctx->pc = 0x19d4e4u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x19d4e8: 0x4b042868  vadd.x      $vf1, $vf5, $vf4
    ctx->pc = 0x19d4e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19d4ec: 0x4b0428ac  vsub.x      $vf2, $vf5, $vf4
    ctx->pc = 0x19d4ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19d4f0: 0x3c04beaa  lui         $a0, 0xBEAA
    ctx->pc = 0x19d4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48810 << 16));
    // 0x19d4f4: 0x3484a61c  ori         $a0, $a0, 0xA61C
    ctx->pc = 0x19d4f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)42524);
    // 0x19d4f8: 0x48a46000  qmtc2.ni    $a0, $vf12
    ctx->pc = 0x19d4f8u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x19d4fc: 0x4a0113bc  vdiv        $Q, $vf2x, $vf1x
    ctx->pc = 0x19d4fcu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x19d500: 0x3c043e4c  lui         $a0, 0x3E4C
    ctx->pc = 0x19d500u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15948 << 16));
    // 0x19d504: 0x348440a6  ori         $a0, $a0, 0x40A6
    ctx->pc = 0x19d504u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16550);
    // 0x19d508: 0x48a46800  qmtc2.ni    $a0, $vf13
    ctx->pc = 0x19d508u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x19d50c: 0x3c04be0e  lui         $a0, 0xBE0E
    ctx->pc = 0x19d50cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48654 << 16));
    // 0x19d510: 0x34846c63  ori         $a0, $a0, 0x6C63
    ctx->pc = 0x19d510u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)27747);
    // 0x19d514: 0x48a47000  qmtc2.ni    $a0, $vf14
    ctx->pc = 0x19d514u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x19d518: 0x3c043dc5  lui         $a0, 0x3DC5
    ctx->pc = 0x19d518u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15813 << 16));
    // 0x19d51c: 0x348477df  ori         $a0, $a0, 0x77DF
    ctx->pc = 0x19d51cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30687);
    // 0x19d520: 0x48a47800  qmtc2.ni    $a0, $vf15
    ctx->pc = 0x19d520u;
    ctx->vu0_vf[15] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x19d524: 0x4a0003bf  vwaitq
    ctx->pc = 0x19d524u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x19d528: 0x4b000120  vaddq.x     $vf4, $vf0, $Q
    ctx->pc = 0x19d528u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19d52c: 0x3c04bd65  lui         $a0, 0xBD65
    ctx->pc = 0x19d52cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48485 << 16));
    // 0x19d530: 0x348401c4  ori         $a0, $a0, 0x1C4
    ctx->pc = 0x19d530u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)452);
    // 0x19d534: 0x4b0420ea  vmul.x      $vf3, $vf4, $vf4
    ctx->pc = 0x19d534u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x19d538: 0x4b045abe  vmula.x     $ACC, $vf11, $vf4
    ctx->pc = 0x19d538u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[11], ctx->vu0_vf[4]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x19d53c: 0x48a48000  qmtc2.ni    $a0, $vf16
    ctx->pc = 0x19d53cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x19d540: 0x4b04186a  vmul.x      $vf1, $vf3, $vf4
    ctx->pc = 0x19d540u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19d544: 0x4a0002ff  vnop
    ctx->pc = 0x19d544u;
    // NOP operation, no action needed for VU0
    // 0x19d548: 0x3c043cb3  lui         $a0, 0x3CB3
    ctx->pc = 0x19d548u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15539 << 16));
    // 0x19d54c: 0x34841652  ori         $a0, $a0, 0x1652
    ctx->pc = 0x19d54cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)5714);
    // 0x19d550: 0x4b0308aa  vmul.x      $vf2, $vf1, $vf3
    ctx->pc = 0x19d550u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19d554: 0x4b0c0abd  vmadda.x    $ACC, $vf1, $vf12
    ctx->pc = 0x19d554u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[12]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x19d558: 0x48a48800  qmtc2.ni    $a0, $vf17
    ctx->pc = 0x19d558u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x19d55c: 0x4b03106a  vmul.x      $vf1, $vf2, $vf3
    ctx->pc = 0x19d55cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19d560: 0x4b0d12bd  vmadda.x    $ACC, $vf2, $vf13
    ctx->pc = 0x19d560u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[13]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x19d564: 0x3c04bb84  lui         $a0, 0xBB84
    ctx->pc = 0x19d564u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48004 << 16));
    // 0x19d568: 0x3484d7e7  ori         $a0, $a0, 0xD7E7
    ctx->pc = 0x19d568u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55271);
    // 0x19d56c: 0x4b0308aa  vmul.x      $vf2, $vf1, $vf3
    ctx->pc = 0x19d56cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19d570: 0x4b0e0abd  vmadda.x    $ACC, $vf1, $vf14
    ctx->pc = 0x19d570u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[14]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x19d574: 0x48a49000  qmtc2.ni    $a0, $vf18
    ctx->pc = 0x19d574u;
    ctx->vu0_vf[18] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x19d578: 0x4b03106a  vmul.x      $vf1, $vf2, $vf3
    ctx->pc = 0x19d578u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19d57c: 0x4b0f12bd  vmadda.x    $ACC, $vf2, $vf15
    ctx->pc = 0x19d57cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[15]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x19d580: 0x3c043f49  lui         $a0, 0x3F49
    ctx->pc = 0x19d580u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16201 << 16));
    // 0x19d584: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x19d584u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x19d588: 0x4b0308aa  vmul.x      $vf2, $vf1, $vf3
    ctx->pc = 0x19d588u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19d58c: 0x4b100abd  vmadda.x    $ACC, $vf1, $vf16
    ctx->pc = 0x19d58cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[16]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x19d590: 0x48a49800  qmtc2.ni    $a0, $vf19
    ctx->pc = 0x19d590u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x19d594: 0x4b03106a  vmul.x      $vf1, $vf2, $vf3
    ctx->pc = 0x19d594u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19d598: 0x4b1112bd  vmadda.x    $ACC, $vf2, $vf17
    ctx->pc = 0x19d598u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[17]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x19d59c: 0x4b0098bf  vmaddaw.x   $ACC, $vf19, $vf0w
    ctx->pc = 0x19d59cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x19d5a0: 0x4a0002ff  vnop
    ctx->pc = 0x19d5a0u;
    // NOP operation, no action needed for VU0
    // 0x19d5a4: 0x4b1208a9  vmadd.x     $vf2, $vf1, $vf18
    ctx->pc = 0x19d5a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[18]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19d5a8: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x19d5a8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19d5ac: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x19d5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x19d5b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19d5b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19d5b4: 0xc78185d8  lwc1        $f1, -0x7A28($gp)
    ctx->pc = 0x19d5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19d5b8: 0x46041034  c.lt.s      $f2, $f4
    ctx->pc = 0x19d5b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19d5bc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x19d5bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x19d5c0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19d5c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x19d5c4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x19d5c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x19d5c8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x19D5C8u;
    {
        const bool branch_taken_0x19d5c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19D5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D5C8u;
        // 0x19d5cc: 0x21823  negu        $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d5c8) {
            ctx->pc = 0x19D5E4u;
            goto label_19d5e4;
        }
    }
    ctx->pc = 0x19D5D0u;
    // 0x19d5d0: 0x46032036  c.le.s      $f4, $f3
    ctx->pc = 0x19d5d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19d5d4: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x19D5D4u;
    {
        const bool branch_taken_0x19d5d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19d5d4) {
            ctx->pc = 0x19D5D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19D5D4u;
            // 0x19d5d8: 0x2442c000  addiu       $v0, $v0, -0x4000 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950912));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19D5E0u;
            goto label_19d5e0;
        }
    }
    ctx->pc = 0x19D5DCu;
    // 0x19d5dc: 0x24424000  addiu       $v0, $v0, 0x4000
    ctx->pc = 0x19d5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16384));
label_19d5e0:
    // 0x19d5e0: 0x21823  negu        $v1, $v0
    ctx->pc = 0x19d5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_19d5e4:
    // 0x19d5e4: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x19D5E4u;
    {
        const bool branch_taken_0x19d5e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D5E4u;
        // 0x19d5e8: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d5e4) {
            ctx->pc = 0x19D608u;
            goto label_19d608;
        }
    }
    ctx->pc = 0x19D5ECu;
    // 0x19d5ec: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x19d5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19d5f0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x19d5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19d5f4: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x19d5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x19d5f8: 0x28444000  slti        $a0, $v0, 0x4000
    ctx->pc = 0x19d5f8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x19d5fc: 0x24438000  addiu       $v1, $v0, -0x8000
    ctx->pc = 0x19d5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x19d600: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x19d600u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x19d604: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x19d604u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_19d608:
    // 0x19d608: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x19d608u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_19d60c:
    // 0x19d60c: 0x3e00008  jr          $ra
    ctx->pc = 0x19D60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D60Cu;
        // 0x19d610: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D60Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D614u;
}
