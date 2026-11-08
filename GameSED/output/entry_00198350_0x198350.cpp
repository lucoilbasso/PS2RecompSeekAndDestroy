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

// Function: entry_00198350
// Address: 0x198350 - 0x198400
void entry_00198350_0x198350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198350_0x198350");
#endif

    ctx->pc = 0x198350u;

    // 0x198350: 0x262200d0  addiu       $v0, $s1, 0xD0
    ctx->pc = 0x198350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    // 0x198354: 0xd8880000  lqc2        $vf8, 0x0($a0)
    ctx->pc = 0x198354u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x198358: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x198358u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19835c: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x19835cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x198360: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x198360u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x198364: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x198364u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x198368: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x198368u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19836c: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x19836cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x198370: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x198370u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x198374: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x198374u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x198378: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x198378u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19837c: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x19837cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x198380: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x198380u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x198384: 0x4bec03bc  vdiv        $Q, $vf0w, $vf12w
    ctx->pc = 0x198384u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x198388: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x198388u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x19838c: 0x48c09000  ctc2.ni     $zero, $vi18
    ctx->pc = 0x19838cu;
    ctx->vu0_clip_flags = GPR_U32(ctx, 0) & 0x00FFFFFFu;
    // 0x198390: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x198390u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x198394: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x198394u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x198398: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x198398u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19839c: 0x4be83b4b  vmaddw.xyzw $vf13, $vf7, $vf8w
    ctx->pc = 0x19839cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x1983a0: 0x4a0003bf  vwaitq
    ctx->pc = 0x1983a0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1983a4: 0x4bc0631c  vmulq.xyz   $vf12, $vf12, $Q
    ctx->pc = 0x1983a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1983a8: 0x4bcd69ff  .word       0x4BCD69FF                   # vclipw.xyz  $vf13, $vf13w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1983a8u;
    { __m128 fs = ctx->vu0_vf[13]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x1983ac: 0x4a0002ff  vnop
    ctx->pc = 0x1983acu;
    // NOP operation, no action needed for VU0
    // 0x1983b0: 0x4a0002ff  vnop
    ctx->pc = 0x1983b0u;
    // NOP operation, no action needed for VU0
    // 0x1983b4: 0x4a0002ff  vnop
    ctx->pc = 0x1983b4u;
    // NOP operation, no action needed for VU0
    // 0x1983b8: 0x4a0002ff  vnop
    ctx->pc = 0x1983b8u;
    // NOP operation, no action needed for VU0
    // 0x1983bc: 0xfbac0000  sqc2        $vf12, 0x0($sp)
    ctx->pc = 0x1983bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x1983c0: 0x48439000  cfc2.ni     $v1, $vi18
    ctx->pc = 0x1983c0u;
    SET_GPR_U32(ctx, 3, ctx->vu0_clip_flags & 0x00FFFFFFu);
    // 0x1983c4: 0xc64003dc  lwc1        $f0, 0x3DC($s2)
    ctx->pc = 0x1983c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1983c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1983c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1983cc: 0xc64203d8  lwc1        $f2, 0x3D8($s2)
    ctx->pc = 0x1983ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1983d0: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x1983d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1983d4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1983d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1983d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1983d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1983dc: 0x45010026  bc1t        . + 4 + (0x26 << 2)
    ctx->pc = 0x1983DCu;
    {
        const bool branch_taken_0x1983dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1983E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1983DCu;
        // 0x1983e0: 0xe64103e8  swc1        $f1, 0x3E8($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1000), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1983dc) {
            ctx->pc = 0x198478u;
            return;
        }
    }
    ctx->pc = 0x1983E4u;
    // 0x1983e4: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1983E4u;
    {
        const bool branch_taken_0x1983e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1983e4) {
            ctx->pc = 0x1983E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1983E4u;
            // 0x1983e8: 0xc64103e4  lwc1        $f1, 0x3E4($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x198400u;
            return;
        }
    }
    ctx->pc = 0x1983ECu;
    // 0x1983ec: 0x46000805  abs.s       $f0, $f1
    ctx->pc = 0x1983ecu;
    ctx->f[0] = FPU_ABS_S(ctx->f[1]);
    // 0x1983f0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1983f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1983f4: 0x45010020  bc1t        . + 4 + (0x20 << 2)
    ctx->pc = 0x1983F4u;
    {
        const bool branch_taken_0x1983f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1983F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1983F4u;
        // 0x1983f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1983f4) {
            ctx->pc = 0x198478u;
            return;
        }
    }
    ctx->pc = 0x1983FCu;
    // 0x1983fc: 0xc64103e4  lwc1        $f1, 0x3E4($s2)
    ctx->pc = 0x1983fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    ctx->pc = 0x198400u;
}
