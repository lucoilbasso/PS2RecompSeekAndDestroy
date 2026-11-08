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

// Function: entry_0010a254
// Address: 0x10a254 - 0x10a30c
void entry_0010a254_0x10a254(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a254_0x10a254");
#endif

    ctx->pc = 0x10a254u;

    // 0x10a254: 0x95280008  lhu         $t0, 0x8($t1)
    ctx->pc = 0x10a254u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x10a258: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x10a258u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x10a25c: 0xa5220050  sh          $v0, 0x50($t1)
    ctx->pc = 0x10a25cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 80), (uint16_t)GPR_U32(ctx, 2));
    // 0x10a260: 0x61bc0  sll         $v1, $a2, 15
    ctx->pc = 0x10a260u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 15));
    // 0x10a264: 0xa5250052  sh          $a1, 0x52($t1)
    ctx->pc = 0x10a264u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 82), (uint16_t)GPR_U32(ctx, 5));
    // 0x10a268: 0x24634000  addiu       $v1, $v1, 0x4000
    ctx->pc = 0x10a268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16384));
    // 0x10a26c: 0xa5240054  sh          $a0, 0x54($t1)
    ctx->pc = 0x10a26cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 84), (uint16_t)GPR_U32(ctx, 4));
    // 0x10a270: 0xa52a0056  sh          $t2, 0x56($t1)
    ctx->pc = 0x10a270u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 86), (uint16_t)GPR_U32(ctx, 10));
    // 0x10a274: 0x1031807  srav        $v1, $v1, $t0
    ctx->pc = 0x10a274u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 8) & 0x1F));
    // 0x10a278: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x10a278u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x10a27c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x10a27cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10a280: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x10a280u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10a284: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10a284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a288: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x10a288u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x10a28c: 0x9527000a  lhu         $a3, 0xA($t1)
    ctx->pc = 0x10a28cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 10)));
    // 0x10a290: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x10a290u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x10a294: 0xe5200060  swc1        $f0, 0x60($t1)
    ctx->pc = 0x10a294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 96), bits); }
    // 0x10a298: 0x51bc0  sll         $v1, $a1, 15
    ctx->pc = 0x10a298u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 15));
    // 0x10a29c: 0x24634000  addiu       $v1, $v1, 0x4000
    ctx->pc = 0x10a29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16384));
    // 0x10a2a0: 0xe31807  srav        $v1, $v1, $a3
    ctx->pc = 0x10a2a0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
    // 0x10a2a4: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x10a2a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x10a2a8: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x10a2a8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10a2ac: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x10a2acu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10a2b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10a2b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a2b4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x10a2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x10a2b8: 0xe5200064  swc1        $f0, 0x64($t1)
    ctx->pc = 0x10a2b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 100), bits); }
    // 0x10a2bc: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x10a2bcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x10a2c0: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x10a2c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x10a2c4: 0x633c0  sll         $a2, $a2, 15
    ctx->pc = 0x10a2c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 15));
    // 0x10a2c8: 0x24c6c000  addiu       $a2, $a2, -0x4000
    ctx->pc = 0x10a2c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950912));
    // 0x10a2cc: 0x1063007  srav        $a2, $a2, $t0
    ctx->pc = 0x10a2ccu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 8) & 0x1F));
    // 0x10a2d0: 0x48a62000  qmtc2.ni    $a2, $vf4
    ctx->pc = 0x10a2d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x10a2d4: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x10a2d4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10a2d8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x10a2d8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10a2dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10a2dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a2e0: 0xa1c00  sll         $v1, $t2, 16
    ctx->pc = 0x10a2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x10a2e4: 0xe5200068  swc1        $f0, 0x68($t1)
    ctx->pc = 0x10a2e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 104), bits); }
    // 0x10a2e8: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x10a2e8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x10a2ec: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x10a2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x10a2f0: 0x52bc0  sll         $a1, $a1, 15
    ctx->pc = 0x10a2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 15));
    // 0x10a2f4: 0x24a5c000  addiu       $a1, $a1, -0x4000
    ctx->pc = 0x10a2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950912));
    // 0x10a2f8: 0xe52807  srav        $a1, $a1, $a3
    ctx->pc = 0x10a2f8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 7) & 0x1F));
    // 0x10a2fc: 0x48a52000  qmtc2.ni    $a1, $vf4
    ctx->pc = 0x10a2fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x10a300: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x10a300u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10a304: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x10a304u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10a308: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10a308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    ctx->pc = 0x10a30cu;
}
