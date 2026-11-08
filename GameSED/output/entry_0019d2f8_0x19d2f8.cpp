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

// Function: entry_0019d2f8
// Address: 0x19d2f8 - 0x19d428
void entry_0019d2f8_0x19d2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d2f8_0x19d2f8");
#endif

    ctx->pc = 0x19d2f8u;

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
            return;
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
            return;
        }
    }
    ctx->pc = 0x19D424u;
    // 0x19d424: 0x24424000  addiu       $v0, $v0, 0x4000
    ctx->pc = 0x19d424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16384));
    ctx->pc = 0x19d428u;
}
