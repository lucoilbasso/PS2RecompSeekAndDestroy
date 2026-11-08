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

// Function: BUtilityVectorRotateRev__FP9FVector32T0P9DVAngle32
// Address: 0x19d940 - 0x19db68
void BUtilityVectorRotateRev__FP9FVector32T0P9DVAngle32_0x19d940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BUtilityVectorRotateRev__FP9FVector32T0P9DVAngle32_0x19d940");
#endif

    ctx->pc = 0x19d940u;

    // 0x19d940: 0x8cc70004  lw          $a3, 0x4($a2)
    ctx->pc = 0x19d940u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x19d944: 0x3c090022  lui         $t1, 0x22
    ctx->pc = 0x19d944u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)34 << 16));
    // 0x19d948: 0x2529f640  addiu       $t1, $t1, -0x9C0
    ctx->pc = 0x19d948u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294964800));
    // 0x19d94c: 0x3c080027  lui         $t0, 0x27
    ctx->pc = 0x19d94cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)39 << 16));
    // 0x19d950: 0x73823  negu        $a3, $a3
    ctx->pc = 0x19d950u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x19d954: 0x3c012000  lui         $at, 0x2000
    ctx->pc = 0x19d954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8192 << 16));
    // 0x19d958: 0x294821  addu        $t1, $at, $t1
    ctx->pc = 0x19d958u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 9)));
    // 0x19d95c: 0x24e32000  addiu       $v1, $a3, 0x2000
    ctx->pc = 0x19d95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 8192));
    // 0x19d960: 0x30e77fff  andi        $a3, $a3, 0x7FFF
    ctx->pc = 0x19d960u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32767);
    // 0x19d964: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x19d964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x19d968: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x19d968u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x19d96c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19d96cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19d970: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x19d970u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x19d974: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x19d974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x19d978: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19d978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19d97c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x19d97cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d980: 0x2508e060  addiu       $t0, $t0, -0x1FA0
    ctx->pc = 0x19d980u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959200));
    // 0x19d984: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x19d984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19d988: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x19d988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19d98c: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x19d98cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x19d990: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x19d990u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19d994: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x19d994u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x19d998: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x19d998u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x19d99c: 0xf9040030  sqc2        $vf4, 0x30($t0)
    ctx->pc = 0x19d99cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19d9a0: 0xf9050020  sqc2        $vf5, 0x20($t0)
    ctx->pc = 0x19d9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x19d9a4: 0xf9060010  sqc2        $vf6, 0x10($t0)
    ctx->pc = 0x19d9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x19d9a8: 0xf9070000  sqc2        $vf7, 0x0($t0)
    ctx->pc = 0x19d9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x19d9ac: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x19d9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19d9b0: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x19d9b0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
    // 0x19d9b4: 0xe5000020  swc1        $f0, 0x20($t0)
    ctx->pc = 0x19d9b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
    // 0x19d9b8: 0x25070040  addiu       $a3, $t0, 0x40
    ctx->pc = 0x19d9b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x19d9bc: 0x42023  negu        $a0, $a0
    ctx->pc = 0x19d9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x19d9c0: 0xe5010028  swc1        $f1, 0x28($t0)
    ctx->pc = 0x19d9c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 40), bits); }
    // 0x19d9c4: 0x24832000  addiu       $v1, $a0, 0x2000
    ctx->pc = 0x19d9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8192));
    // 0x19d9c8: 0x30847fff  andi        $a0, $a0, 0x7FFF
    ctx->pc = 0x19d9c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
    // 0x19d9cc: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x19d9ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x19d9d0: 0xe5020008  swc1        $f2, 0x8($t0)
    ctx->pc = 0x19d9d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x19d9d4: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x19d9d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x19d9d8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x19d9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19d9dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19d9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19d9e0: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x19d9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x19d9e4: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x19d9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x19d9e8: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x19d9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19d9ec: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x19d9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19d9f0: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x19d9f0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x19d9f4: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x19d9f4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19d9f8: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x19d9f8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x19d9fc: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x19d9fcu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x19da00: 0xf8e40030  sqc2        $vf4, 0x30($a3)
    ctx->pc = 0x19da00u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19da04: 0xf8e50020  sqc2        $vf5, 0x20($a3)
    ctx->pc = 0x19da04u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x19da08: 0xf8e60010  sqc2        $vf6, 0x10($a3)
    ctx->pc = 0x19da08u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x19da0c: 0xf8e70000  sqc2        $vf7, 0x0($a3)
    ctx->pc = 0x19da0cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x19da10: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x19da10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x19da14: 0x25060080  addiu       $a2, $t0, 0x80
    ctx->pc = 0x19da14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
    // 0x19da18: 0x46001047  neg.s       $f1, $f2
    ctx->pc = 0x19da18u;
    ctx->f[1] = FPU_NEG_S(ctx->f[2]);
    // 0x19da1c: 0xe4e00028  swc1        $f0, 0x28($a3)
    ctx->pc = 0x19da1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
    // 0x19da20: 0x42023  negu        $a0, $a0
    ctx->pc = 0x19da20u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x19da24: 0xe4e00014  swc1        $f0, 0x14($a3)
    ctx->pc = 0x19da24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
    // 0x19da28: 0x24832000  addiu       $v1, $a0, 0x2000
    ctx->pc = 0x19da28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8192));
    // 0x19da2c: 0x30847fff  andi        $a0, $a0, 0x7FFF
    ctx->pc = 0x19da2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
    // 0x19da30: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x19da30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x19da34: 0xe4e20018  swc1        $f2, 0x18($a3)
    ctx->pc = 0x19da34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 24), bits); }
    // 0x19da38: 0xe4e10024  swc1        $f1, 0x24($a3)
    ctx->pc = 0x19da38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
    // 0x19da3c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x19da3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19da40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19da40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19da44: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x19da44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x19da48: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x19da48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x19da4c: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x19da4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19da50: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x19da50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19da54: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x19da54u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x19da58: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x19da58u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19da5c: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x19da5cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x19da60: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x19da60u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x19da64: 0xf8c40030  sqc2        $vf4, 0x30($a2)
    ctx->pc = 0x19da64u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19da68: 0xf8c50020  sqc2        $vf5, 0x20($a2)
    ctx->pc = 0x19da68u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x19da6c: 0xf8c60010  sqc2        $vf6, 0x10($a2)
    ctx->pc = 0x19da6cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x19da70: 0xf8c70000  sqc2        $vf7, 0x0($a2)
    ctx->pc = 0x19da70u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x19da74: 0x46000887  neg.s       $f2, $f1
    ctx->pc = 0x19da74u;
    ctx->f[2] = FPU_NEG_S(ctx->f[1]);
    // 0x19da78: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x19da78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x19da7c: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x19da7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x19da80: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x19da80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x19da84: 0xe4c20010  swc1        $f2, 0x10($a2)
    ctx->pc = 0x19da84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x19da88: 0x4bff033c  vmove.xyzw  $vf31, $vf0
    ctx->pc = 0x19da88u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x19da8c: 0x4bfafb3d  vmr32.xyzw  $vf26, $vf31
    ctx->pc = 0x19da8cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x19da90: 0x4bf9d33d  vmr32.xyzw  $vf25, $vf26
    ctx->pc = 0x19da90u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[26], ctx->vu0_vf[26], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x19da94: 0x4bf8cb3d  vmr32.xyzw  $vf24, $vf25
    ctx->pc = 0x19da94u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[25], ctx->vu0_vf[25], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x19da98: 0xd9140000  lqc2        $vf20, 0x0($t0)
    ctx->pc = 0x19da98u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x19da9c: 0xd9150010  lqc2        $vf21, 0x10($t0)
    ctx->pc = 0x19da9cu;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x19daa0: 0xd9160020  lqc2        $vf22, 0x20($t0)
    ctx->pc = 0x19daa0u;
    ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x19daa4: 0x4bf8a1bc  vmulax.xyzw $ACC, $vf20, $vf24x
    ctx->pc = 0x19daa4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[24], ctx->vu0_vf[24], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19daa8: 0x4bf8a8bd  vmadday.xyzw $ACC, $vf21, $vf24y
    ctx->pc = 0x19daa8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[24], ctx->vu0_vf[24], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19daac: 0x4bf8b70a  vmaddz.xyzw $vf28, $vf22, $vf24z
    ctx->pc = 0x19daacu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[24], ctx->vu0_vf[24], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x19dab0: 0x4bf9a1bc  vmulax.xyzw $ACC, $vf20, $vf25x
    ctx->pc = 0x19dab0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[25], ctx->vu0_vf[25], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19dab4: 0x4bf9a8bd  vmadday.xyzw $ACC, $vf21, $vf25y
    ctx->pc = 0x19dab4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[25], ctx->vu0_vf[25], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19dab8: 0x4bf9b74a  vmaddz.xyzw $vf29, $vf22, $vf25z
    ctx->pc = 0x19dab8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[25], ctx->vu0_vf[25], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x19dabc: 0x4bfaa1bc  vmulax.xyzw $ACC, $vf20, $vf26x
    ctx->pc = 0x19dabcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[26], ctx->vu0_vf[26], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19dac0: 0x4bfaa8bd  vmadday.xyzw $ACC, $vf21, $vf26y
    ctx->pc = 0x19dac0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[26], ctx->vu0_vf[26], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19dac4: 0x4bfab78a  vmaddz.xyzw $vf30, $vf22, $vf26z
    ctx->pc = 0x19dac4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[26], ctx->vu0_vf[26], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x19dac8: 0xd9140040  lqc2        $vf20, 0x40($t0)
    ctx->pc = 0x19dac8u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 64)));
    // 0x19dacc: 0xd9150050  lqc2        $vf21, 0x50($t0)
    ctx->pc = 0x19daccu;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 80)));
    // 0x19dad0: 0xd9160060  lqc2        $vf22, 0x60($t0)
    ctx->pc = 0x19dad0u;
    ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 96)));
    // 0x19dad4: 0x4bfca1bc  vmulax.xyzw $ACC, $vf20, $vf28x
    ctx->pc = 0x19dad4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19dad8: 0x4bfca8bd  vmadday.xyzw $ACC, $vf21, $vf28y
    ctx->pc = 0x19dad8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19dadc: 0x4bfcb60a  vmaddz.xyzw $vf24, $vf22, $vf28z
    ctx->pc = 0x19dadcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x19dae0: 0x4bfda1bc  vmulax.xyzw $ACC, $vf20, $vf29x
    ctx->pc = 0x19dae0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19dae4: 0x4bfda8bd  vmadday.xyzw $ACC, $vf21, $vf29y
    ctx->pc = 0x19dae4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19dae8: 0x4bfdb64a  vmaddz.xyzw $vf25, $vf22, $vf29z
    ctx->pc = 0x19dae8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x19daec: 0x4bfea1bc  vmulax.xyzw $ACC, $vf20, $vf30x
    ctx->pc = 0x19daecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19daf0: 0x4bfea8bd  vmadday.xyzw $ACC, $vf21, $vf30y
    ctx->pc = 0x19daf0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19daf4: 0x4bfeb68a  vmaddz.xyzw $vf26, $vf22, $vf30z
    ctx->pc = 0x19daf4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x19daf8: 0xd9140080  lqc2        $vf20, 0x80($t0)
    ctx->pc = 0x19daf8u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 128)));
    // 0x19dafc: 0xd9150090  lqc2        $vf21, 0x90($t0)
    ctx->pc = 0x19dafcu;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 144)));
    // 0x19db00: 0xd91600a0  lqc2        $vf22, 0xA0($t0)
    ctx->pc = 0x19db00u;
    ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 160)));
    // 0x19db04: 0x4bf8a1bc  vmulax.xyzw $ACC, $vf20, $vf24x
    ctx->pc = 0x19db04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[24], ctx->vu0_vf[24], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19db08: 0x4bf8a8bd  vmadday.xyzw $ACC, $vf21, $vf24y
    ctx->pc = 0x19db08u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[24], ctx->vu0_vf[24], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19db0c: 0x4bf8b70a  vmaddz.xyzw $vf28, $vf22, $vf24z
    ctx->pc = 0x19db0cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[24], ctx->vu0_vf[24], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x19db10: 0x4bf9a1bc  vmulax.xyzw $ACC, $vf20, $vf25x
    ctx->pc = 0x19db10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[25], ctx->vu0_vf[25], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19db14: 0x4bf9a8bd  vmadday.xyzw $ACC, $vf21, $vf25y
    ctx->pc = 0x19db14u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[25], ctx->vu0_vf[25], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19db18: 0x4bf9b74a  vmaddz.xyzw $vf29, $vf22, $vf25z
    ctx->pc = 0x19db18u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[25], ctx->vu0_vf[25], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x19db1c: 0x4bfaa1bc  vmulax.xyzw $ACC, $vf20, $vf26x
    ctx->pc = 0x19db1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[26], ctx->vu0_vf[26], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19db20: 0x4bfaa8bd  vmadday.xyzw $ACC, $vf21, $vf26y
    ctx->pc = 0x19db20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[26], ctx->vu0_vf[26], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19db24: 0x4bfab78a  vmaddz.xyzw $vf30, $vf22, $vf26z
    ctx->pc = 0x19db24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[26], ctx->vu0_vf[26], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x19db28: 0xfbbc0000  sqc2        $vf28, 0x0($sp)
    ctx->pc = 0x19db28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x19db2c: 0xfbbd0010  sqc2        $vf29, 0x10($sp)
    ctx->pc = 0x19db2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x19db30: 0xfbbe0020  sqc2        $vf30, 0x20($sp)
    ctx->pc = 0x19db30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x19db34: 0xfbbf0030  sqc2        $vf31, 0x30($sp)
    ctx->pc = 0x19db34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x19db38: 0xd8a80000  lqc2        $vf8, 0x0($a1)
    ctx->pc = 0x19db38u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19db3c: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x19db3cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19db40: 0xdba50010  lqc2        $vf5, 0x10($sp)
    ctx->pc = 0x19db40u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19db44: 0xdba60020  lqc2        $vf6, 0x20($sp)
    ctx->pc = 0x19db44u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19db48: 0xdba70030  lqc2        $vf7, 0x30($sp)
    ctx->pc = 0x19db48u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19db4c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x19db4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19db50: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x19db50u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19db54: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x19db54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19db58: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x19db58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x19db5c: 0xf84c0000  sqc2        $vf12, 0x0($v0)
    ctx->pc = 0x19db5cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x19db60: 0x3e00008  jr          $ra
    ctx->pc = 0x19DB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DB60u;
        // 0x19db64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DB60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DB68u;
}
