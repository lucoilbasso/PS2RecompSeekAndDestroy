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

// Function: EffectLightFanDraw__FP16ST_EffectSpecialP9ApcPtcSplff
// Address: 0x124750 - 0x12507c
void EffectLightFanDraw__FP16ST_EffectSpecialP9ApcPtcSplff_0x124750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectLightFanDraw__FP16ST_EffectSpecialP9ApcPtcSplff_0x124750");
#endif

    switch (ctx->pc) {
        case 0x124920u: goto label_124920;
        case 0x124928u: goto label_124928;
        case 0x12494cu: goto label_12494c;
        case 0x124a80u: goto label_124a80;
        case 0x124a94u: goto label_124a94;
        case 0x124c10u: goto label_124c10;
        case 0x124c18u: goto label_124c18;
        case 0x124ed8u: goto label_124ed8;
        case 0x124f08u: goto label_124f08;
        case 0x124f10u: goto label_124f10;
        case 0x124f20u: goto label_124f20;
        case 0x124fa0u: goto label_124fa0;
        case 0x124fa8u: goto label_124fa8;
        case 0x124fc8u: goto label_124fc8;
        case 0x124fd0u: goto label_124fd0;
        case 0x124ff8u: goto label_124ff8;
        default: break;
    }

    ctx->pc = 0x124750u;

    // 0x124750: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x124750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x124754: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x124754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124758: 0xffb40130  sd          $s4, 0x130($sp)
    ctx->pc = 0x124758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 20));
    // 0x12475c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x12475cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124760: 0xe7ba0190  swc1        $f26, 0x190($sp)
    ctx->pc = 0x124760u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x124764: 0x46006686  mov.s       $f26, $f12
    ctx->pc = 0x124764u;
    ctx->f[26] = FPU_MOV_S(ctx->f[12]);
    // 0x124768: 0xe7b90188  swc1        $f25, 0x188($sp)
    ctx->pc = 0x124768u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x12476c: 0x46006e46  mov.s       $f25, $f13
    ctx->pc = 0x12476cu;
    ctx->f[25] = FPU_MOV_S(ctx->f[13]);
    // 0x124770: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x124770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x124774: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x124774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
    // 0x124778: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x124778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x12477c: 0xffb30128  sd          $s3, 0x128($sp)
    ctx->pc = 0x12477cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 19));
    // 0x124780: 0xffb50138  sd          $s5, 0x138($sp)
    ctx->pc = 0x124780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 21));
    // 0x124784: 0xffb60140  sd          $s6, 0x140($sp)
    ctx->pc = 0x124784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 22));
    // 0x124788: 0xffb70148  sd          $s7, 0x148($sp)
    ctx->pc = 0x124788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 23));
    // 0x12478c: 0xffbe0150  sd          $fp, 0x150($sp)
    ctx->pc = 0x12478cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 30));
    // 0x124790: 0xffbf0158  sd          $ra, 0x158($sp)
    ctx->pc = 0x124790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 31));
    // 0x124794: 0xe7b80180  swc1        $f24, 0x180($sp)
    ctx->pc = 0x124794u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x124798: 0xe7b70178  swc1        $f23, 0x178($sp)
    ctx->pc = 0x124798u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x12479c: 0xe7b60170  swc1        $f22, 0x170($sp)
    ctx->pc = 0x12479cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x1247a0: 0xe7b50168  swc1        $f21, 0x168($sp)
    ctx->pc = 0x1247a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x1247a4: 0xe7b40160  swc1        $f20, 0x160($sp)
    ctx->pc = 0x1247a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x1247a8: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x1247a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x1247ac: 0x14430220  bne         $v0, $v1, . + 4 + (0x220 << 2)
    ctx->pc = 0x1247ACu;
    {
        const bool branch_taken_0x1247ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1247B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1247ACu;
        // 0x1247b0: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1247ac) {
            ctx->pc = 0x125030u;
            goto label_125030;
        }
    }
    ctx->pc = 0x1247B4u;
    // 0x1247b4: 0x8e8201b0  lw          $v0, 0x1B0($s4)
    ctx->pc = 0x1247b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 432)));
    // 0x1247b8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1247b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1247bc: 0x5060021d  beql        $v1, $zero, . + 4 + (0x21D << 2)
    ctx->pc = 0x1247BCu;
    {
        const bool branch_taken_0x1247bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1247bc) {
            ctx->pc = 0x1247C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1247BCu;
            // 0x1247c0: 0xdfb00110  ld          $s0, 0x110($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125034u;
            goto label_125034;
        }
    }
    ctx->pc = 0x1247C4u;
    // 0x1247c4: 0xafa000fc  sw          $zero, 0xFC($sp)
    ctx->pc = 0x1247c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
    // 0x1247c8: 0xafa000f8  sw          $zero, 0xF8($sp)
    ctx->pc = 0x1247c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 0));
    // 0x1247cc: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x1247ccu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1247d0: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x1247d0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1247d4: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x1247d4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1247d8: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x1247d8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1247dc: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1247dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1247e0: 0xfba50020  sqc2        $vf5, 0x20($sp)
    ctx->pc = 0x1247e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1247e4: 0xfba60010  sqc2        $vf6, 0x10($sp)
    ctx->pc = 0x1247e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1247e8: 0xfba70000  sqc2        $vf7, 0x0($sp)
    ctx->pc = 0x1247e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1247ec: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1247ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1247f0: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x1247f0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1247f4: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x1247f4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1247f8: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x1247f8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1247fc: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x1247fcu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x124800: 0xf8440030  sqc2        $vf4, 0x30($v0)
    ctx->pc = 0x124800u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x124804: 0xf8450020  sqc2        $vf5, 0x20($v0)
    ctx->pc = 0x124804u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x124808: 0xf8460010  sqc2        $vf6, 0x10($v0)
    ctx->pc = 0x124808u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x12480c: 0xf8470000  sqc2        $vf7, 0x0($v0)
    ctx->pc = 0x12480cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x124810: 0xc68201c4  lwc1        $f2, 0x1C4($s4)
    ctx->pc = 0x124810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x124814: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x124814u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x124818: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x124818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x12481c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12481cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x124820: 0x2484f640  addiu       $a0, $a0, -0x9C0
    ctx->pc = 0x124820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964800));
    // 0x124824: 0xc78380c4  lwc1        $f3, -0x7F3C($gp)
    ctx->pc = 0x124824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x124828: 0x3c012000  lui         $at, 0x2000
    ctx->pc = 0x124828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8192 << 16));
    // 0x12482c: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x12482cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x124830: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x124830u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x124834: 0xc68101c0  lwc1        $f1, 0x1C0($s4)
    ctx->pc = 0x124834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x124838: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x124838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12483c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x12483cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x124840: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x124840u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x124844: 0x0  nop
    ctx->pc = 0x124844u;
    // NOP
    // 0x124848: 0x0  nop
    ctx->pc = 0x124848u;
    // NOP
    // 0x12484c: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x12484cu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[3]); }
    // 0x124850: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x124850u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x124854: 0x460010e4  .word       0x460010E4                   # cvt.w.s     $f3, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x124854u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x124858: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x124858u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12485c: 0x24432000  addiu       $v1, $v0, 0x2000
    ctx->pc = 0x12485cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8192));
    // 0x124860: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x124860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x124864: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x124864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x124868: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x124868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12486c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12486cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x124870: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x124870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x124874: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x124874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x124878: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x124878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12487c: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x12487cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x124880: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x124880u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x124884: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x124884u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x124888: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x124888u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12488c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x12488cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x124890: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x124890u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x124894: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x124894u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x124898: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x124898u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x12489c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x12489cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x1248a0: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x1248a0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x1248a4: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1248a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1248a8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1248a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1248ac: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1248acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1248b0: 0x44042000  mfc1        $a0, $f4
    ctx->pc = 0x1248b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1248b4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1248b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1248b8: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x1248b8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1248bc: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x1248bcu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x1248c0: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x1248c0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x1248c4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x1248c4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x1248c8: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x1248c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x1248cc: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x1248ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1248d0: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1248d0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x1248d4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1248d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1248d8: 0x2453d650  addiu       $s3, $v0, -0x29B0
    ctx->pc = 0x1248d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956624));
    // 0x1248dc: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1248dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1248e0: 0x8e620094  lw          $v0, 0x94($s3)
    ctx->pc = 0x1248e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D6E4u));
    // 0x1248e4: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x1248e4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1248e8: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1248e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1248ec: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1248ecu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1248f0: 0xe7a200a4  swc1        $f2, 0xA4($sp)
    ctx->pc = 0x1248f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1248f4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1248F4u;
    {
        const bool branch_taken_0x1248f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1248F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1248F4u;
        // 0x1248f8: 0xe7a300a8  swc1        $f3, 0xA8($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1248f4) {
            ctx->pc = 0x124918u;
            goto label_124918;
        }
    }
    ctx->pc = 0x1248FCu;
    // 0x1248fc: 0x8e620098  lw          $v0, 0x98($s3)
    ctx->pc = 0x1248fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
    // 0x124900: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x124900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x124904: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x124904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x124908: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x124908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x12490c: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x12490cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x124910: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x124910u;
    {
        const bool branch_taken_0x124910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124910u;
        // 0x124914: 0xae630098  sw          $v1, 0x98($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124910) {
            ctx->pc = 0x12494Cu;
            goto label_12494c;
        }
    }
    ctx->pc = 0x124918u;
label_124918:
    // 0x124918: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x124918u;
    SET_GPR_U32(ctx, 31, 0x124920u);
    ctx->pc = 0x12491Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124918u;
    // 0x12491c: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x124918u, 0x124920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124920u;
label_124920:
    // 0x124920: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x124920u;
    SET_GPR_U32(ctx, 31, 0x124928u);
    ctx->pc = 0x124924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124920u;
    // 0x124924: 0x8e640088  lw          $a0, 0x88($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x124920u, 0x124928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124928u;
label_124928:
    // 0x124928: 0x8e70008c  lw          $s0, 0x8C($s3)
    ctx->pc = 0x124928u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x12492c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x12492cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x124930: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x124930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x124934: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x124934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x124938: 0x8e640088  lw          $a0, 0x88($s3)
    ctx->pc = 0x124938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x12493c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12493cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x124940: 0xae65008c  sw          $a1, 0x8C($s3)
    ctx->pc = 0x124940u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 5));
    // 0x124944: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x124944u;
    SET_GPR_U32(ctx, 31, 0x12494Cu);
    ctx->pc = 0x124948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124944u;
    // 0x124948: 0xae620080  sw          $v0, 0x80($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x124944u, 0x12494Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12494Cu;
label_12494c:
    // 0x12494c: 0xafb000f4  sw          $s0, 0xF4($sp)
    ctx->pc = 0x12494cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 16));
    // 0x124950: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x124950u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x124954: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x124954u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x124958: 0x35298006  ori         $t1, $t1, 0x8006
    ctx->pc = 0x124958u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32774);
    // 0x12495c: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x12495cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x124960: 0x3c0b0007  lui         $t3, 0x7
    ctx->pc = 0x124960u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)7 << 16));
    // 0x124964: 0x356b000d  ori         $t3, $t3, 0xD
    ctx->pc = 0x124964u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)13);
    // 0x124968: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x124968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12496c: 0x24100006  addiu       $s0, $zero, 0x6
    ctx->pc = 0x12496cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x124970: 0x8fa400f4  lw          $a0, 0xF4($sp)
    ctx->pc = 0x124970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x124974: 0x24070047  addiu       $a3, $zero, 0x47
    ctx->pc = 0x124974u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x124978: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x124978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x12497c: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x12497cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x124980: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x124980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x124984: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x124984u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x124988: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x124988u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x12498c: 0x24480030  addiu       $t0, $v0, 0x30
    ctx->pc = 0x12498cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x124990: 0xfc690000  sd          $t1, 0x0($v1)
    ctx->pc = 0x124990u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 9));
    // 0x124994: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x124994u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x124998: 0xfca70008  sd          $a3, 0x8($a1)
    ctx->pc = 0x124998u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 7));
    // 0x12499c: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x12499cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1249a0: 0xfcab0000  sd          $t3, 0x0($a1)
    ctx->pc = 0x1249a0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 11));
    // 0x1249a4: 0x240b0014  addiu       $t3, $zero, 0x14
    ctx->pc = 0x1249a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1249a8: 0x240a004e  addiu       $t2, $zero, 0x4E
    ctx->pc = 0x1249a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1249ac: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x1249acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1249b0: 0xdf838c90  ld          $v1, -0x7370($gp)
    ctx->pc = 0x1249b0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
    // 0x1249b4: 0x244c0050  addiu       $t4, $v0, 0x50
    ctx->pc = 0x1249b4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1249b8: 0xfd0a0008  sd          $t2, 0x8($t0)
    ctx->pc = 0x1249b8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 10));
    // 0x1249bc: 0x240d0080  addiu       $t5, $zero, 0x80
    ctx->pc = 0x1249bcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1249c0: 0xfd030000  sd          $v1, 0x0($t0)
    ctx->pc = 0x1249c0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 3));
    // 0x1249c4: 0x240e0060  addiu       $t6, $zero, 0x60
    ctx->pc = 0x1249c4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1249c8: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x1249c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
    // 0x1249cc: 0x244f0060  addiu       $t7, $v0, 0x60
    ctx->pc = 0x1249ccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1249d0: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x1249d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1249d4: 0x24550070  addiu       $s5, $v0, 0x70
    ctx->pc = 0x1249d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1249d8: 0x8e830030  lw          $v1, 0x30($s4)
    ctx->pc = 0x1249d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x1249dc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1249dcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1249e0: 0xfc890008  sd          $t1, 0x8($a0)
    ctx->pc = 0x1249e0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 9));
    // 0x1249e4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1249e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1249e8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1249e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1249ec: 0x3c030007  lui         $v1, 0x7
    ctx->pc = 0x1249ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7 << 16));
    // 0x1249f0: 0xafa30108  sw          $v1, 0x108($sp)
    ctx->pc = 0x1249f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 3));
    // 0x1249f4: 0x269e0120  addiu       $fp, $s4, 0x120
    ctx->pc = 0x1249f4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 288));
    // 0x1249f8: 0xac8d0004  sw          $t5, 0x4($a0)
    ctx->pc = 0x1249f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 13));
    // 0x1249fc: 0xfd8b0008  sd          $t3, 0x8($t4)
    ctx->pc = 0x1249fcu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 11));
    // 0x124a00: 0xfd8e0000  sd          $t6, 0x0($t4)
    ctx->pc = 0x124a00u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 14));
    // 0x124a04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x124a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x124a08: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x124a08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x124a0c: 0x8e8300d0  lw          $v1, 0xD0($s4)
    ctx->pc = 0x124a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 208)));
    // 0x124a10: 0x8fb20100  lw          $s2, 0x100($sp)
    ctx->pc = 0x124a10u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x124a14: 0x46000d46  mov.s       $f21, $f1
    ctx->pc = 0x124a14u;
    ctx->f[21] = FPU_MOV_S(ctx->f[1]);
    // 0x124a18: 0x94650030  lhu         $a1, 0x30($v1)
    ctx->pc = 0x124a18u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x124a1c: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x124a1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x124a20: 0xdc640038  ld          $a0, 0x38($v1)
    ctx->pc = 0x124a20u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x124a24: 0xfdf00008  sd          $s0, 0x8($t7)
    ctx->pc = 0x124a24u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 8), GPR_U64(ctx, 16));
    // 0x124a28: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x124a28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x124a2c: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x124a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x124a30: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x124a30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x124a34: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x124a34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x124a38: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x124a38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x124a3c: 0x34a5f000  ori         $a1, $a1, 0xF000
    ctx->pc = 0x124a3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61440);
    // 0x124a40: 0xafa50108  sw          $a1, 0x108($sp)
    ctx->pc = 0x124a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 5));
    // 0x124a44: 0xfde40000  sd          $a0, 0x0($t7)
    ctx->pc = 0x124a44u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 4));
    // 0x124a48: 0x8e8201c8  lw          $v0, 0x1C8($s4)
    ctx->pc = 0x124a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 456)));
    // 0x124a4c: 0xe2001a  div         $zero, $a3, $v0
    ctx->pc = 0x124a4cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x124a50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x124a50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x124a54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x124a54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x124a58: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x124A58u;
    {
        const bool branch_taken_0x124a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x124a58) {
            ctx->pc = 0x124A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124A58u;
            // 0x124a5c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x124A60u;
            goto label_124a60;
        }
    }
    ctx->pc = 0x124A60u;
label_124a60:
    // 0x124a60: 0xc69701cc  lwc1        $f23, 0x1CC($s4)
    ctx->pc = 0x124a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x124a64: 0xc69601d0  lwc1        $f22, 0x1D0($s4)
    ctx->pc = 0x124a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x124a68: 0x0  nop
    ctx->pc = 0x124a68u;
    // NOP
    // 0x124a6c: 0x0  nop
    ctx->pc = 0x124a6cu;
    // NOP
    // 0x124a70: 0x46000e03  div.s       $f24, $f1, $f0
    ctx->pc = 0x124a70u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[24] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x124a74: 0x3812  mflo        $a3
    ctx->pc = 0x124a74u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x124a78: 0xafa70104  sw          $a3, 0x104($sp)
    ctx->pc = 0x124a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 7));
    // 0x124a7c: 0x0  nop
    ctx->pc = 0x124a7cu;
    // NOP
label_124a80:
    // 0x124a80: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x124a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x124a84: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x124a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124a88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x124a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124a8c: 0xc067b12  jal         func_19EC48
    ctx->pc = 0x124A8Cu;
    SET_GPR_U32(ctx, 31, 0x124A94u);
    ctx->pc = 0x124A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124A8Cu;
    // 0x124a90: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC48u, 0x124A8Cu, 0x124A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124A94u;
label_124a94:
    // 0x124a94: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x124a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x124a98: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x124a98u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x124a9c: 0xdbc50010  lqc2        $vf5, 0x10($fp)
    ctx->pc = 0x124a9cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x124aa0: 0xdbc60020  lqc2        $vf6, 0x20($fp)
    ctx->pc = 0x124aa0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x124aa4: 0xdbc70030  lqc2        $vf7, 0x30($fp)
    ctx->pc = 0x124aa4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 48)));
    // 0x124aa8: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x124aa8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x124aac: 0xd8690010  lqc2        $vf9, 0x10($v1)
    ctx->pc = 0x124aacu;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x124ab0: 0xd86a0020  lqc2        $vf10, 0x20($v1)
    ctx->pc = 0x124ab0u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x124ab4: 0xd86b0030  lqc2        $vf11, 0x30($v1)
    ctx->pc = 0x124ab4u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x124ab8: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x124ab8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x124abc: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x124abcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x124ac0: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x124ac0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x124ac4: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x124ac4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x124ac8: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x124ac8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x124acc: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x124accu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x124ad0: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x124ad0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x124ad4: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x124ad4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x124ad8: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x124ad8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x124adc: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x124adcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x124ae0: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x124ae0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x124ae4: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x124ae4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x124ae8: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x124ae8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x124aec: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x124aecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x124af0: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x124af0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x124af4: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x124af4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x124af8: 0xfbac0000  sqc2        $vf12, 0x0($sp)
    ctx->pc = 0x124af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x124afc: 0xfbad0010  sqc2        $vf13, 0x10($sp)
    ctx->pc = 0x124afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x124b00: 0xfbae0020  sqc2        $vf14, 0x20($sp)
    ctx->pc = 0x124b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x124b04: 0xfbaf0030  sqc2        $vf15, 0x30($sp)
    ctx->pc = 0x124b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x124b08: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x124b08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x124b0c: 0x2484eb70  addiu       $a0, $a0, -0x1490
    ctx->pc = 0x124b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962032));
    // 0x124b10: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x124b10u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21EB70u));
    // 0x124b14: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x124b14u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21EB80u));
    // 0x124b18: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x124b18u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21EB90u));
    // 0x124b1c: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x124b1cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21EBA0u));
    // 0x124b20: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x124b20u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124b24: 0xdba90010  lqc2        $vf9, 0x10($sp)
    ctx->pc = 0x124b24u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124b28: 0xdbaa0020  lqc2        $vf10, 0x20($sp)
    ctx->pc = 0x124b28u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x124b2c: 0xdbab0030  lqc2        $vf11, 0x30($sp)
    ctx->pc = 0x124b2cu;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x124b30: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x124b30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x124b34: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x124b34u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x124b38: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x124b38u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x124b3c: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x124b3cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x124b40: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x124b40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x124b44: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x124b44u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x124b48: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x124b48u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x124b4c: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x124b4cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x124b50: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x124b50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x124b54: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x124b54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x124b58: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x124b58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x124b5c: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x124b5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x124b60: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x124b60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x124b64: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x124b64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x124b68: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x124b68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x124b6c: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x124b6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x124b70: 0xfbac0000  sqc2        $vf12, 0x0($sp)
    ctx->pc = 0x124b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x124b74: 0xfbad0010  sqc2        $vf13, 0x10($sp)
    ctx->pc = 0x124b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x124b78: 0xfbae0020  sqc2        $vf14, 0x20($sp)
    ctx->pc = 0x124b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x124b7c: 0xfbaf0030  sqc2        $vf15, 0x30($sp)
    ctx->pc = 0x124b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x124b80: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x124b80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x124b84: 0x24a5ebf0  addiu       $a1, $a1, -0x1410
    ctx->pc = 0x124b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962160));
    // 0x124b88: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x124b88u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21EBF0u));
    // 0x124b8c: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x124b8cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21EC00u));
    // 0x124b90: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x124b90u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21EC10u));
    // 0x124b94: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x124b94u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21EC20u));
    // 0x124b98: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x124b98u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124b9c: 0xdba90010  lqc2        $vf9, 0x10($sp)
    ctx->pc = 0x124b9cu;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124ba0: 0xdbaa0020  lqc2        $vf10, 0x20($sp)
    ctx->pc = 0x124ba0u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x124ba4: 0xdbab0030  lqc2        $vf11, 0x30($sp)
    ctx->pc = 0x124ba4u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x124ba8: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x124ba8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x124bac: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x124bacu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x124bb0: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x124bb0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x124bb4: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x124bb4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x124bb8: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x124bb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x124bbc: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x124bbcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x124bc0: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x124bc0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x124bc4: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x124bc4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x124bc8: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x124bc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x124bcc: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x124bccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x124bd0: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x124bd0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x124bd4: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x124bd4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x124bd8: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x124bd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x124bdc: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x124bdcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x124be0: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x124be0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x124be4: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x124be4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x124be8: 0xfbac0000  sqc2        $vf12, 0x0($sp)
    ctx->pc = 0x124be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x124bec: 0xfbad0010  sqc2        $vf13, 0x10($sp)
    ctx->pc = 0x124becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x124bf0: 0xfbae0020  sqc2        $vf14, 0x20($sp)
    ctx->pc = 0x124bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x124bf4: 0xfbaf0030  sqc2        $vf15, 0x30($sp)
    ctx->pc = 0x124bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x124bf8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x124bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x124bfc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x124bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124c00: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x124c00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x124c04: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x124c04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x124c08: 0xc06f120  jal         func_1BC480
    ctx->pc = 0x124C08u;
    SET_GPR_U32(ctx, 31, 0x124C10u);
    ctx->pc = 0x124C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124C08u;
    // 0x124c0c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC480u, 0x124C08u, 0x124C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124C10u;
label_124c10:
    // 0x124c10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x124c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124c14: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x124c14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_124c18:
    // 0x124c18: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x124c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x124c1c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x124c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x124c20: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x124c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x124c24: 0x2442a000  addiu       $v0, $v0, -0x6000
    ctx->pc = 0x124c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942720));
    // 0x124c28: 0x2c424001  sltiu       $v0, $v0, 0x4001
    ctx->pc = 0x124c28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16385) ? 1 : 0);
    // 0x124c2c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x124C2Cu;
    {
        const bool branch_taken_0x124c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x124c2c) {
            ctx->pc = 0x124C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124C2Cu;
            // 0x124c30: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124C4Cu;
            goto label_124c4c;
        }
    }
    ctx->pc = 0x124C34u;
    // 0x124c34: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x124c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x124c38: 0x24429c00  addiu       $v0, $v0, -0x6400
    ctx->pc = 0x124c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941696));
    // 0x124c3c: 0x2c423801  sltiu       $v0, $v0, 0x3801
    ctx->pc = 0x124c3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14337) ? 1 : 0);
    // 0x124c40: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x124C40u;
    {
        const bool branch_taken_0x124c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x124c40) {
            ctx->pc = 0x124C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124C40u;
            // 0x124c44: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124C58u;
            goto label_124c58;
        }
    }
    ctx->pc = 0x124C48u;
    // 0x124c48: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x124c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_124c4c:
    // 0x124c4c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x124C4Cu;
    {
        const bool branch_taken_0x124c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124C4Cu;
        // 0x124c50: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124c4c) {
            ctx->pc = 0x124C74u;
            goto label_124c74;
        }
    }
    ctx->pc = 0x124C54u;
    // 0x124c54: 0x0  nop
    ctx->pc = 0x124c54u;
    // NOP
label_124c58:
    // 0x124c58: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x124c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x124c5c: 0x2442f000  addiu       $v0, $v0, -0x1000
    ctx->pc = 0x124c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
    // 0x124c60: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x124c60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x124c64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x124C64u;
    {
        const bool branch_taken_0x124c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124C64u;
        // 0x124c68: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124c64) {
            ctx->pc = 0x124C78u;
            goto label_124c78;
        }
    }
    ctx->pc = 0x124C6Cu;
    // 0x124c6c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x124c6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124c70: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x124c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_124c74:
    // 0x124c74: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x124c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_124c78:
    // 0x124c78: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x124c78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x124c7c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x124C7Cu;
    {
        const bool branch_taken_0x124c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124C7Cu;
        // 0x124c80: 0x41900  sll         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124c7c) {
            ctx->pc = 0x124C18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124c18;
        }
    }
    ctx->pc = 0x124C84u;
    // 0x124c84: 0x8fa400fc  lw          $a0, 0xFC($sp)
    ctx->pc = 0x124c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x124c88: 0x1480002b  bnez        $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x124C88u;
    {
        const bool branch_taken_0x124c88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x124C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124C88u;
        // 0x124c8c: 0x8fa400f8  lw          $a0, 0xF8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124c88) {
            ctx->pc = 0x124D38u;
            goto label_124d38;
        }
    }
    ctx->pc = 0x124C90u;
    // 0x124c90: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x124c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x124c94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x124c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124c98: 0xafa500fc  sw          $a1, 0xFC($sp)
    ctx->pc = 0x124c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 5));
    // 0x124c9c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x124c9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124ca0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x124ca0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x124ca4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x124ca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x124ca8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x124ca8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x124cac: 0x46190002  mul.s       $f0, $f0, $f25
    ctx->pc = 0x124cacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
    // 0x124cb0: 0x4600d001  sub.s       $f0, $f26, $f0
    ctx->pc = 0x124cb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[26], ctx->f[0]);
    // 0x124cb4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x124cb4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x124cb8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x124cb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x124cbc: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x124cbcu;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x124cc0: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x124cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x124cc4: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x124cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x124cc8: 0x704410e8  pminw       $v0, $v0, $a0
    ctx->pc = 0x124cc8u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x124ccc: 0x22800  sll         $a1, $v0, 0
    ctx->pc = 0x124cccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x124cd0: 0xafa500f8  sw          $a1, 0xF8($sp)
    ctx->pc = 0x124cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 5));
    // 0x124cd4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x124cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x124cd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x124cd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124cdc: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x124cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x124ce0: 0x8e8401bc  lw          $a0, 0x1BC($s4)
    ctx->pc = 0x124ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 444)));
    // 0x124ce4: 0xc2182a  slt         $v1, $a2, $v0
    ctx->pc = 0x124ce4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x124ce8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x124ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x124cec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x124cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124cf0: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x124cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
    // 0x124cf4: 0xc3800a  movz        $s0, $a2, $v1
    ctx->pc = 0x124cf4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 6));
    // 0x124cf8: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x124cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x124cfc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x124cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x124d00: 0x704510e8  pminw       $v0, $v0, $a1
    ctx->pc = 0x124d00u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x124d04: 0x21800  sll         $v1, $v0, 0
    ctx->pc = 0x124d04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x124d08: 0x58600006  blezl       $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x124D08u;
    {
        const bool branch_taken_0x124d08 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x124d08) {
            ctx->pc = 0x124D0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124D08u;
            // 0x124d0c: 0x8fa300c0  lw          $v1, 0xC0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124D24u;
            goto label_124d24;
        }
    }
    ctx->pc = 0x124D10u;
    // 0x124d10: 0x93a200c3  lbu         $v0, 0xC3($sp)
    ctx->pc = 0x124d10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 195)));
    // 0x124d14: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x124d14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x124d18: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x124d18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x124d1c: 0xa3a200c3  sb          $v0, 0xC3($sp)
    ctx->pc = 0x124d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 195), (uint8_t)GPR_U32(ctx, 2));
    // 0x124d20: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x124d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_124d24:
    // 0x124d24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x124d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124d28: 0xfea20008  sd          $v0, 0x8($s5)
    ctx->pc = 0x124d28u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 2));
    // 0x124d2c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x124d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x124d30: 0xe6b50004  swc1        $f21, 0x4($s5)
    ctx->pc = 0x124d30u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x124d34: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x124d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_124d38:
    // 0x124d38: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x124d38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x124d3c: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x124d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x124d40: 0x1600001b  bnez        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x124D40u;
    {
        const bool branch_taken_0x124d40 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x124D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D40u;
        // 0x124d44: 0xafa2009c  sw          $v0, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124d40) {
            ctx->pc = 0x124DB0u;
            goto label_124db0;
        }
    }
    ctx->pc = 0x124D48u;
    // 0x124d48: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x124D48u;
    {
        const bool branch_taken_0x124d48 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x124D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D48u;
        // 0x124d4c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124d48) {
            ctx->pc = 0x124D5Cu;
            goto label_124d5c;
        }
    }
    ctx->pc = 0x124D50u;
    // 0x124d50: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x124d50u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124d54: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x124d54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x124d58: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x124d58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_124d5c:
    // 0x124d5c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x124d5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x124d60: 0xe4550008  swc1        $f21, 0x8($v0)
    ctx->pc = 0x124d60u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x124d64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x124d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124d68: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x124d68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x124d6c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x124d6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x124d70: 0xe4560004  swc1        $f22, 0x4($v0)
    ctx->pc = 0x124d70u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x124d74: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x124d74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124d78: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x124d78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124d7c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x124d7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x124d80: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x124d80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x124d84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x124d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124d88: 0xafa60100  sw          $a2, 0x100($sp)
    ctx->pc = 0x124d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 6));
    // 0x124d8c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x124d8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x124d90: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x124d90u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x124d94: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x124d94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x124d98: 0xe4750008  swc1        $f21, 0x8($v1)
    ctx->pc = 0x124d98u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x124d9c: 0xe4740000  swc1        $f20, 0x0($v1)
    ctx->pc = 0x124d9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x124da0: 0xe4770004  swc1        $f23, 0x4($v1)
    ctx->pc = 0x124da0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x124da4: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x124da4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x124da8: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x124DA8u;
    {
        const bool branch_taken_0x124da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124DA8u;
        // 0x124dac: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124da8) {
            ctx->pc = 0x124E60u;
            goto label_124e60;
        }
    }
    ctx->pc = 0x124DB0u;
label_124db0:
    // 0x124db0: 0x1a400010  blez        $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x124DB0u;
    {
        const bool branch_taken_0x124db0 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x124DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124DB0u;
        // 0x124db4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124db0) {
            ctx->pc = 0x124DF4u;
            goto label_124df4;
        }
    }
    ctx->pc = 0x124DB8u;
    // 0x124db8: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x124db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x124dbc: 0x3404e800  ori         $a0, $zero, 0xE800
    ctx->pc = 0x124dbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59392);
    // 0x124dc0: 0x421bc  dsll32      $a0, $a0, 6
    ctx->pc = 0x124dc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 6));
    // 0x124dc4: 0x2431025  or          $v0, $s2, $v1
    ctx->pc = 0x124dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x124dc8: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x124dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x124dcc: 0x31bfc  dsll32      $v1, $v1, 15
    ctx->pc = 0x124dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 15));
    // 0x124dd0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x124dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x124dd4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x124dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x124dd8: 0x31ff8  dsll        $v1, $v1, 31
    ctx->pc = 0x124dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 31);
    // 0x124ddc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x124ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x124de0: 0x24044242  addiu       $a0, $zero, 0x4242
    ctx->pc = 0x124de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16962));
    // 0x124de4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x124de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x124de8: 0xfee40008  sd          $a0, 0x8($s7)
    ctx->pc = 0x124de8u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 8), GPR_U64(ctx, 4));
    // 0x124dec: 0xfee20000  sd          $v0, 0x0($s7)
    ctx->pc = 0x124decu;
    WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 2));
    // 0x124df0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x124df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_124df4:
    // 0x124df4: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x124df4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x124df8: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x124df8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124dfc: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x124dfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x124e00: 0x3c02403a  lui         $v0, 0x403A
    ctx->pc = 0x124e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16442 << 16));
    // 0x124e04: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x124e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x124e08: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x124e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x124e0c: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x124e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
    // 0x124e10: 0x3405c2c2  ori         $a1, $zero, 0xC2C2
    ctx->pc = 0x124e10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49858);
    // 0x124e14: 0xfc850008  sd          $a1, 0x8($a0)
    ctx->pc = 0x124e14u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
    // 0x124e18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x124e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124e1c: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x124e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x124e20: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x124e20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x124e24: 0xe4750008  swc1        $f21, 0x8($v1)
    ctx->pc = 0x124e24u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x124e28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x124e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124e2c: 0xe4740000  swc1        $f20, 0x0($v1)
    ctx->pc = 0x124e2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x124e30: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x124e30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x124e34: 0xe4760004  swc1        $f22, 0x4($v1)
    ctx->pc = 0x124e34u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x124e38: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x124e38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124e3c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x124e3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124e40: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x124e40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x124e44: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x124e44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x124e48: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x124e48u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x124e4c: 0xe4950008  swc1        $f21, 0x8($a0)
    ctx->pc = 0x124e4cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x124e50: 0xe4940000  swc1        $f20, 0x0($a0)
    ctx->pc = 0x124e50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x124e54: 0xe4970004  swc1        $f23, 0x4($a0)
    ctx->pc = 0x124e54u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x124e58: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x124e58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x124e5c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x124e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_124e60:
    // 0x124e60: 0x8fa60104  lw          $a2, 0x104($sp)
    ctx->pc = 0x124e60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x124e64: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x124e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x124e68: 0x2c6b021  addu        $s6, $s6, $a2
    ctx->pc = 0x124e68u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
    // 0x124e6c: 0x76102a  slt         $v0, $v1, $s6
    ctx->pc = 0x124e6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x124e70: 0x1040ff03  beqz        $v0, . + 4 + (-0xFD << 2)
    ctx->pc = 0x124E70u;
    {
        const bool branch_taken_0x124e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E70u;
        // 0x124e74: 0x4618a500  add.s       $f20, $f20, $f24 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x124e70) {
            ctx->pc = 0x124A80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124a80;
        }
    }
    ctx->pc = 0x124E78u;
    // 0x124e78: 0x1a400010  blez        $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x124E78u;
    {
        const bool branch_taken_0x124e78 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x124E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E78u;
        // 0x124e7c: 0x8fa40100  lw          $a0, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124e78) {
            ctx->pc = 0x124EBCu;
            goto label_124ebc;
        }
    }
    ctx->pc = 0x124E80u;
    // 0x124e80: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x124e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x124e84: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x124e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x124e88: 0x31bfc  dsll32      $v1, $v1, 15
    ctx->pc = 0x124e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 15));
    // 0x124e8c: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x124e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x124e90: 0x3404e800  ori         $a0, $zero, 0xE800
    ctx->pc = 0x124e90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59392);
    // 0x124e94: 0x421bc  dsll32      $a0, $a0, 6
    ctx->pc = 0x124e94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 6));
    // 0x124e98: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x124e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x124e9c: 0x24034242  addiu       $v1, $zero, 0x4242
    ctx->pc = 0x124e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16962));
    // 0x124ea0: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x124ea0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x124ea4: 0x52ff8  dsll        $a1, $a1, 31
    ctx->pc = 0x124ea4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 31);
    // 0x124ea8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x124ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x124eac: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x124eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x124eb0: 0xfee30008  sd          $v1, 0x8($s7)
    ctx->pc = 0x124eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 8), GPR_U64(ctx, 3));
    // 0x124eb4: 0xfee20000  sd          $v0, 0x0($s7)
    ctx->pc = 0x124eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 2));
    // 0x124eb8: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x124eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_124ebc:
    // 0x124ebc: 0x14800022  bnez        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x124EBCu;
    {
        const bool branch_taken_0x124ebc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x124EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124EBCu;
        // 0x124ec0: 0x8fb000f4  lw          $s0, 0xF4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124ebc) {
            ctx->pc = 0x124F48u;
            goto label_124f48;
        }
    }
    ctx->pc = 0x124EC4u;
    // 0x124ec4: 0x8e620094  lw          $v0, 0x94($s3)
    ctx->pc = 0x124ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x124ec8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x124EC8u;
    {
        const bool branch_taken_0x124ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124EC8u;
        // 0x124ecc: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124ec8) {
            ctx->pc = 0x124F18u;
            goto label_124f18;
        }
    }
    ctx->pc = 0x124ED0u;
    // 0x124ed0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x124ED0u;
    SET_GPR_U32(ctx, 31, 0x124ED8u);
    ctx->pc = 0x124ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124ED0u;
    // 0x124ed4: 0x8e640088  lw          $a0, 0x88($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x124ED0u, 0x124ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124ED8u;
label_124ed8:
    // 0x124ed8: 0x8e63008c  lw          $v1, 0x8C($s3)
    ctx->pc = 0x124ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x124edc: 0x8fa500f4  lw          $a1, 0xF4($sp)
    ctx->pc = 0x124edcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x124ee0: 0x8fa600f4  lw          $a2, 0xF4($sp)
    ctx->pc = 0x124ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x124ee4: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x124ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x124ee8: 0x8e650080  lw          $a1, 0x80($s3)
    ctx->pc = 0x124ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x124eec: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x124eecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x124ef0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x124ef0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x124ef4: 0x8e640088  lw          $a0, 0x88($s3)
    ctx->pc = 0x124ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x124ef8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x124ef8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x124efc: 0xae650080  sw          $a1, 0x80($s3)
    ctx->pc = 0x124efcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 5));
    // 0x124f00: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x124F00u;
    SET_GPR_U32(ctx, 31, 0x124F08u);
    ctx->pc = 0x124F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124F00u;
    // 0x124f04: 0xae66008c  sw          $a2, 0x8C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x124F00u, 0x124F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124F08u;
label_124f08:
    // 0x124f08: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x124F08u;
    SET_GPR_U32(ctx, 31, 0x124F10u);
    ctx->pc = 0x124F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124F08u;
    // 0x124f0c: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x124F08u, 0x124F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124F10u;
label_124f10:
    // 0x124f10: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x124F10u;
    {
        const bool branch_taken_0x124f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F10u;
        // 0x124f14: 0xdfb00110  ld          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f10) {
            ctx->pc = 0x125034u;
            goto label_125034;
        }
    }
    ctx->pc = 0x124F18u;
label_124f18:
    // 0x124f18: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x124f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x124f1c: 0x0  nop
    ctx->pc = 0x124f1cu;
    // NOP
label_124f20:
    // 0x124f20: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x124f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x124f24: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x124f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x124f28: 0x0  nop
    ctx->pc = 0x124f28u;
    // NOP
    // 0x124f2c: 0x0  nop
    ctx->pc = 0x124f2cu;
    // NOP
    // 0x124f30: 0x0  nop
    ctx->pc = 0x124f30u;
    // NOP
    // 0x124f34: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x124F34u;
    {
        const bool branch_taken_0x124f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F34u;
        // 0x124f38: 0xdfb00110  ld          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f34) {
            ctx->pc = 0x124F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124f20;
        }
    }
    ctx->pc = 0x124F3Cu;
    // 0x124f3c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x124F3Cu;
    {
        const bool branch_taken_0x124f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F3Cu;
        // 0x124f40: 0xdfb10118  ld          $s1, 0x118($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f3c) {
            ctx->pc = 0x125038u;
            goto label_125038;
        }
    }
    ctx->pc = 0x124F44u;
    // 0x124f44: 0x0  nop
    ctx->pc = 0x124f44u;
    // NOP
label_124f48:
    // 0x124f48: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x124f48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x124f4c: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x124f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x124f50: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x124f50u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x124f54: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x124f54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x124f58: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x124f58u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x124f5c: 0x2251823  subu        $v1, $s1, $a1
    ctx->pc = 0x124f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x124f60: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x124f60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124f64: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x124f64u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x124f68: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x124f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x124f6c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x124f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x124f70: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x124f70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x124f74: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x124f74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x124f78: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x124f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x124f7c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x124f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x124f80: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x124f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x124f84: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x124f84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x124f88: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x124f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x124f8c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x124f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x124f90: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x124f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x124f94: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x124f94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x124f98: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x124F98u;
    SET_GPR_U32(ctx, 31, 0x124FA0u);
    ctx->pc = 0x124F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124F98u;
    // 0x124f9c: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x124F98u, 0x124FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124FA0u;
label_124fa0:
    // 0x124fa0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x124fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x124fa4: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x124fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
label_124fa8:
    // 0x124fa8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x124fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x124fac: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x124facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x124fb0: 0x0  nop
    ctx->pc = 0x124fb0u;
    // NOP
    // 0x124fb4: 0x0  nop
    ctx->pc = 0x124fb4u;
    // NOP
    // 0x124fb8: 0x0  nop
    ctx->pc = 0x124fb8u;
    // NOP
    // 0x124fbc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x124FBCu;
    {
        const bool branch_taken_0x124fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x124fbc) {
            ctx->pc = 0x124FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124fa8;
        }
    }
    ctx->pc = 0x124FC4u;
    // 0x124fc4: 0x0  nop
    ctx->pc = 0x124fc4u;
    // NOP
label_124fc8:
    // 0x124fc8: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x124FC8u;
    SET_GPR_U32(ctx, 31, 0x124FD0u);
    ctx->pc = 0x124FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124FC8u;
    // 0x124fcc: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x124FC8u, 0x124FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124FD0u;
label_124fd0:
    // 0x124fd0: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x124fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x124fd4: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x124FD4u;
    {
        const bool branch_taken_0x124fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x124FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124FD4u;
        // 0x124fd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124fd4) {
            ctx->pc = 0x124FC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124fc8;
        }
    }
    ctx->pc = 0x124FDCu;
    // 0x124fdc: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x124fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x124fe0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x124fe0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x124fe4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x124FE4u;
    {
        const bool branch_taken_0x124fe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x124FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124FE4u;
        // 0x124fe8: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124fe4) {
            ctx->pc = 0x124FF8u;
            goto label_124ff8;
        }
    }
    ctx->pc = 0x124FECu;
    // 0x124fec: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x124fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x124ff0: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x124FF0u;
    SET_GPR_U32(ctx, 31, 0x124FF8u);
    ctx->pc = 0x124FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124FF0u;
    // 0x124ff4: 0xae300090  sw          $s0, 0x90($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x124FF0u, 0x124FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124FF8u;
label_124ff8:
    // 0x124ff8: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x124ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x124ffc: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x124ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x125000: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x125000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x125004: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x125004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x125008: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x125008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12500c: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x12500cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x125010: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x125010u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x125014: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x125014u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x125018: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x125018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x12501c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x12501cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x125020: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x125020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x125024: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x125024u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x125028: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x125028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x12502c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x12502cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_125030:
    // 0x125030: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x125030u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_125034:
    // 0x125034: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x125034u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
label_125038:
    // 0x125038: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x125038u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x12503c: 0xdfb30128  ld          $s3, 0x128($sp)
    ctx->pc = 0x12503cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x125040: 0xdfb40130  ld          $s4, 0x130($sp)
    ctx->pc = 0x125040u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x125044: 0xdfb50138  ld          $s5, 0x138($sp)
    ctx->pc = 0x125044u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x125048: 0xdfb60140  ld          $s6, 0x140($sp)
    ctx->pc = 0x125048u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x12504c: 0xdfb70148  ld          $s7, 0x148($sp)
    ctx->pc = 0x12504cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x125050: 0xdfbe0150  ld          $fp, 0x150($sp)
    ctx->pc = 0x125050u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x125054: 0xdfbf0158  ld          $ra, 0x158($sp)
    ctx->pc = 0x125054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x125058: 0xc7ba0190  lwc1        $f26, 0x190($sp)
    ctx->pc = 0x125058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x12505c: 0xc7b90188  lwc1        $f25, 0x188($sp)
    ctx->pc = 0x12505cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x125060: 0xc7b80180  lwc1        $f24, 0x180($sp)
    ctx->pc = 0x125060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x125064: 0xc7b70178  lwc1        $f23, 0x178($sp)
    ctx->pc = 0x125064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x125068: 0xc7b60170  lwc1        $f22, 0x170($sp)
    ctx->pc = 0x125068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x12506c: 0xc7b50168  lwc1        $f21, 0x168($sp)
    ctx->pc = 0x12506cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x125070: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x125070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x125074: 0x3e00008  jr          $ra
    ctx->pc = 0x125074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125074u;
        // 0x125078: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12507Cu;
}
