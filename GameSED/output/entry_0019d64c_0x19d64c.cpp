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

// Function: entry_0019d64c
// Address: 0x19d64c - 0x19d82c
void entry_0019d64c_0x19d64c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d64c_0x19d64c");
#endif

    ctx->pc = 0x19d64cu;

    // 0x19d64c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19d64cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19d650: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x19d650u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d654: 0x2508e060  addiu       $t0, $t0, -0x1FA0
    ctx->pc = 0x19d654u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959200));
    // 0x19d658: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x19d658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19d65c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x19d65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19d660: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x19d660u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x19d664: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x19d664u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19d668: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x19d668u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x19d66c: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x19d66cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x19d670: 0xf9040030  sqc2        $vf4, 0x30($t0)
    ctx->pc = 0x19d670u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19d674: 0xf9050020  sqc2        $vf5, 0x20($t0)
    ctx->pc = 0x19d674u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x19d678: 0xf9060010  sqc2        $vf6, 0x10($t0)
    ctx->pc = 0x19d678u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x19d67c: 0xf9070000  sqc2        $vf7, 0x0($t0)
    ctx->pc = 0x19d67cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x19d680: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x19d680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19d684: 0x46001047  neg.s       $f1, $f2
    ctx->pc = 0x19d684u;
    ctx->f[1] = FPU_NEG_S(ctx->f[2]);
    // 0x19d688: 0xe5000014  swc1        $f0, 0x14($t0)
    ctx->pc = 0x19d688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 20), bits); }
    // 0x19d68c: 0x25070040  addiu       $a3, $t0, 0x40
    ctx->pc = 0x19d68cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x19d690: 0x24832000  addiu       $v1, $a0, 0x2000
    ctx->pc = 0x19d690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8192));
    // 0x19d694: 0x30847fff  andi        $a0, $a0, 0x7FFF
    ctx->pc = 0x19d694u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
    // 0x19d698: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x19d698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x19d69c: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x19d69cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x19d6a0: 0xe5010010  swc1        $f1, 0x10($t0)
    ctx->pc = 0x19d6a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
    // 0x19d6a4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x19d6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19d6a8: 0xe5020004  swc1        $f2, 0x4($t0)
    ctx->pc = 0x19d6a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x19d6ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19d6acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19d6b0: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x19d6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x19d6b4: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x19d6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x19d6b8: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x19d6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19d6bc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x19d6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19d6c0: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x19d6c0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x19d6c4: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x19d6c4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19d6c8: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x19d6c8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x19d6cc: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x19d6ccu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x19d6d0: 0xf8e40030  sqc2        $vf4, 0x30($a3)
    ctx->pc = 0x19d6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19d6d4: 0xf8e50020  sqc2        $vf5, 0x20($a3)
    ctx->pc = 0x19d6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x19d6d8: 0xf8e60010  sqc2        $vf6, 0x10($a3)
    ctx->pc = 0x19d6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x19d6dc: 0xf8e70000  sqc2        $vf7, 0x0($a3)
    ctx->pc = 0x19d6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x19d6e0: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x19d6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x19d6e4: 0x25060080  addiu       $a2, $t0, 0x80
    ctx->pc = 0x19d6e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
    // 0x19d6e8: 0x46001847  neg.s       $f1, $f3
    ctx->pc = 0x19d6e8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
    // 0x19d6ec: 0xe4e00028  swc1        $f0, 0x28($a3)
    ctx->pc = 0x19d6ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
    // 0x19d6f0: 0x24832000  addiu       $v1, $a0, 0x2000
    ctx->pc = 0x19d6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8192));
    // 0x19d6f4: 0x30847fff  andi        $a0, $a0, 0x7FFF
    ctx->pc = 0x19d6f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
    // 0x19d6f8: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x19d6f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x19d6fc: 0xe4e00014  swc1        $f0, 0x14($a3)
    ctx->pc = 0x19d6fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
    // 0x19d700: 0xe4e30018  swc1        $f3, 0x18($a3)
    ctx->pc = 0x19d700u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 24), bits); }
    // 0x19d704: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x19d704u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19d708: 0xe4e10024  swc1        $f1, 0x24($a3)
    ctx->pc = 0x19d708u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
    // 0x19d70c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19d70cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19d710: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x19d710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x19d714: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x19d714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x19d718: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x19d718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19d71c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x19d71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19d720: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x19d720u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x19d724: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x19d724u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19d728: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x19d728u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x19d72c: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x19d72cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x19d730: 0xf8c40030  sqc2        $vf4, 0x30($a2)
    ctx->pc = 0x19d730u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19d734: 0xf8c50020  sqc2        $vf5, 0x20($a2)
    ctx->pc = 0x19d734u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x19d738: 0xf8c60010  sqc2        $vf6, 0x10($a2)
    ctx->pc = 0x19d738u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x19d73c: 0xf8c70000  sqc2        $vf7, 0x0($a2)
    ctx->pc = 0x19d73cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x19d740: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x19d740u;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
    // 0x19d744: 0xe4c10028  swc1        $f1, 0x28($a2)
    ctx->pc = 0x19d744u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
    // 0x19d748: 0xe4c00020  swc1        $f0, 0x20($a2)
    ctx->pc = 0x19d748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
    // 0x19d74c: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x19d74cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x19d750: 0xe4c20008  swc1        $f2, 0x8($a2)
    ctx->pc = 0x19d750u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x19d754: 0x4bff033c  vmove.xyzw  $vf31, $vf0
    ctx->pc = 0x19d754u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x19d758: 0x4bfafb3d  vmr32.xyzw  $vf26, $vf31
    ctx->pc = 0x19d758u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x19d75c: 0x4bf9d33d  vmr32.xyzw  $vf25, $vf26
    ctx->pc = 0x19d75cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[26], ctx->vu0_vf[26], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x19d760: 0x4bf8cb3d  vmr32.xyzw  $vf24, $vf25
    ctx->pc = 0x19d760u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[25], ctx->vu0_vf[25], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x19d764: 0xd9140000  lqc2        $vf20, 0x0($t0)
    ctx->pc = 0x19d764u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x19d768: 0xd9150010  lqc2        $vf21, 0x10($t0)
    ctx->pc = 0x19d768u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x19d76c: 0xd9160020  lqc2        $vf22, 0x20($t0)
    ctx->pc = 0x19d76cu;
    ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x19d770: 0x4bf8a1bc  vmulax.xyzw $ACC, $vf20, $vf24x
    ctx->pc = 0x19d770u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[24], ctx->vu0_vf[24], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19d774: 0x4bf8a8bd  vmadday.xyzw $ACC, $vf21, $vf24y
    ctx->pc = 0x19d774u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[24], ctx->vu0_vf[24], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19d778: 0x4bf8b70a  vmaddz.xyzw $vf28, $vf22, $vf24z
    ctx->pc = 0x19d778u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[24], ctx->vu0_vf[24], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x19d77c: 0x4bf9a1bc  vmulax.xyzw $ACC, $vf20, $vf25x
    ctx->pc = 0x19d77cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[25], ctx->vu0_vf[25], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19d780: 0x4bf9a8bd  vmadday.xyzw $ACC, $vf21, $vf25y
    ctx->pc = 0x19d780u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[25], ctx->vu0_vf[25], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19d784: 0x4bf9b74a  vmaddz.xyzw $vf29, $vf22, $vf25z
    ctx->pc = 0x19d784u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[25], ctx->vu0_vf[25], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x19d788: 0x4bfaa1bc  vmulax.xyzw $ACC, $vf20, $vf26x
    ctx->pc = 0x19d788u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[26], ctx->vu0_vf[26], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19d78c: 0x4bfaa8bd  vmadday.xyzw $ACC, $vf21, $vf26y
    ctx->pc = 0x19d78cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[26], ctx->vu0_vf[26], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19d790: 0x4bfab78a  vmaddz.xyzw $vf30, $vf22, $vf26z
    ctx->pc = 0x19d790u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[26], ctx->vu0_vf[26], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x19d794: 0xd9140040  lqc2        $vf20, 0x40($t0)
    ctx->pc = 0x19d794u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 64)));
    // 0x19d798: 0xd9150050  lqc2        $vf21, 0x50($t0)
    ctx->pc = 0x19d798u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 80)));
    // 0x19d79c: 0xd9160060  lqc2        $vf22, 0x60($t0)
    ctx->pc = 0x19d79cu;
    ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 96)));
    // 0x19d7a0: 0x4bfca1bc  vmulax.xyzw $ACC, $vf20, $vf28x
    ctx->pc = 0x19d7a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19d7a4: 0x4bfca8bd  vmadday.xyzw $ACC, $vf21, $vf28y
    ctx->pc = 0x19d7a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19d7a8: 0x4bfcb60a  vmaddz.xyzw $vf24, $vf22, $vf28z
    ctx->pc = 0x19d7a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x19d7ac: 0x4bfda1bc  vmulax.xyzw $ACC, $vf20, $vf29x
    ctx->pc = 0x19d7acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19d7b0: 0x4bfda8bd  vmadday.xyzw $ACC, $vf21, $vf29y
    ctx->pc = 0x19d7b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19d7b4: 0x4bfdb64a  vmaddz.xyzw $vf25, $vf22, $vf29z
    ctx->pc = 0x19d7b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x19d7b8: 0x4bfea1bc  vmulax.xyzw $ACC, $vf20, $vf30x
    ctx->pc = 0x19d7b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19d7bc: 0x4bfea8bd  vmadday.xyzw $ACC, $vf21, $vf30y
    ctx->pc = 0x19d7bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19d7c0: 0x4bfeb68a  vmaddz.xyzw $vf26, $vf22, $vf30z
    ctx->pc = 0x19d7c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x19d7c4: 0xd9140080  lqc2        $vf20, 0x80($t0)
    ctx->pc = 0x19d7c4u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 128)));
    // 0x19d7c8: 0xd9150090  lqc2        $vf21, 0x90($t0)
    ctx->pc = 0x19d7c8u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 144)));
    // 0x19d7cc: 0xd91600a0  lqc2        $vf22, 0xA0($t0)
    ctx->pc = 0x19d7ccu;
    ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 160)));
    // 0x19d7d0: 0x4bf8a1bc  vmulax.xyzw $ACC, $vf20, $vf24x
    ctx->pc = 0x19d7d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[24], ctx->vu0_vf[24], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19d7d4: 0x4bf8a8bd  vmadday.xyzw $ACC, $vf21, $vf24y
    ctx->pc = 0x19d7d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[24], ctx->vu0_vf[24], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19d7d8: 0x4bf8b70a  vmaddz.xyzw $vf28, $vf22, $vf24z
    ctx->pc = 0x19d7d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[24], ctx->vu0_vf[24], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x19d7dc: 0x4bf9a1bc  vmulax.xyzw $ACC, $vf20, $vf25x
    ctx->pc = 0x19d7dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[25], ctx->vu0_vf[25], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19d7e0: 0x4bf9a8bd  vmadday.xyzw $ACC, $vf21, $vf25y
    ctx->pc = 0x19d7e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[25], ctx->vu0_vf[25], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19d7e4: 0x4bf9b74a  vmaddz.xyzw $vf29, $vf22, $vf25z
    ctx->pc = 0x19d7e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[25], ctx->vu0_vf[25], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x19d7e8: 0x4bfaa1bc  vmulax.xyzw $ACC, $vf20, $vf26x
    ctx->pc = 0x19d7e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[26], ctx->vu0_vf[26], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19d7ec: 0x4bfaa8bd  vmadday.xyzw $ACC, $vf21, $vf26y
    ctx->pc = 0x19d7ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[26], ctx->vu0_vf[26], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19d7f0: 0x4bfab78a  vmaddz.xyzw $vf30, $vf22, $vf26z
    ctx->pc = 0x19d7f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[26], ctx->vu0_vf[26], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x19d7f4: 0xfbbc0000  sqc2        $vf28, 0x0($sp)
    ctx->pc = 0x19d7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x19d7f8: 0xfbbd0010  sqc2        $vf29, 0x10($sp)
    ctx->pc = 0x19d7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x19d7fc: 0xfbbe0020  sqc2        $vf30, 0x20($sp)
    ctx->pc = 0x19d7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x19d800: 0xfbbf0030  sqc2        $vf31, 0x30($sp)
    ctx->pc = 0x19d800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x19d804: 0xd8a80000  lqc2        $vf8, 0x0($a1)
    ctx->pc = 0x19d804u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19d808: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x19d808u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d80c: 0xdba50010  lqc2        $vf5, 0x10($sp)
    ctx->pc = 0x19d80cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d810: 0xdba60020  lqc2        $vf6, 0x20($sp)
    ctx->pc = 0x19d810u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19d814: 0xdba70030  lqc2        $vf7, 0x30($sp)
    ctx->pc = 0x19d814u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19d818: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x19d818u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19d81c: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x19d81cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19d820: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x19d820u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19d824: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x19d824u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x19d828: 0xf84c0000  sqc2        $vf12, 0x0($v0)
    ctx->pc = 0x19d828u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    ctx->pc = 0x19d82cu;
}
