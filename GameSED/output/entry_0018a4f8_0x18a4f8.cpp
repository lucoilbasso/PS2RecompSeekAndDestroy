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

// Function: entry_0018a4f8
// Address: 0x18a4f8 - 0x18a5a4
void entry_0018a4f8_0x18a4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a4f8_0x18a4f8");
#endif

    ctx->pc = 0x18a4f8u;

    // 0x18a4f8: 0x94e20204  lhu         $v0, 0x204($a3)
    ctx->pc = 0x18a4f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 516)));
    // 0x18a4fc: 0x24e60150  addiu       $a2, $a3, 0x150
    ctx->pc = 0x18a4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 336));
    // 0x18a500: 0x94e40206  lhu         $a0, 0x206($a3)
    ctx->pc = 0x18a500u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 518)));
    // 0x18a504: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x18a504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x18a508: 0x84e801a4  lh          $t0, 0x1A4($a3)
    ctx->pc = 0x18a508u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 420)));
    // 0x18a50c: 0x22c00  sll         $a1, $v0, 16
    ctx->pc = 0x18a50cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x18a510: 0x84ea01a6  lh          $t2, 0x1A6($a3)
    ctx->pc = 0x18a510u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 422)));
    // 0x18a514: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x18a514u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x18a518: 0x94c90008  lhu         $t1, 0x8($a2)
    ctx->pc = 0x18a518u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x18a51c: 0x51bc0  sll         $v1, $a1, 15
    ctx->pc = 0x18a51cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 15));
    // 0x18a520: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x18a520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x18a524: 0x24634000  addiu       $v1, $v1, 0x4000
    ctx->pc = 0x18a524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16384));
    // 0x18a528: 0xa4c20050  sh          $v0, 0x50($a2)
    ctx->pc = 0x18a528u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 80), (uint16_t)GPR_U32(ctx, 2));
    // 0x18a52c: 0xa4c40052  sh          $a0, 0x52($a2)
    ctx->pc = 0x18a52cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 82), (uint16_t)GPR_U32(ctx, 4));
    // 0x18a530: 0x1231807  srav        $v1, $v1, $t1
    ctx->pc = 0x18a530u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 9) & 0x1F));
    // 0x18a534: 0xa4c80054  sh          $t0, 0x54($a2)
    ctx->pc = 0x18a534u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 84), (uint16_t)GPR_U32(ctx, 8));
    // 0x18a538: 0xa4ca0056  sh          $t2, 0x56($a2)
    ctx->pc = 0x18a538u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 86), (uint16_t)GPR_U32(ctx, 10));
    // 0x18a53c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x18a53cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x18a540: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x18a540u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18a544: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x18a544u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x18a548: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18a548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a54c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x18a54cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x18a550: 0x94c7000a  lhu         $a3, 0xA($a2)
    ctx->pc = 0x18a550u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x18a554: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x18a554u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x18a558: 0xe4c00060  swc1        $f0, 0x60($a2)
    ctx->pc = 0x18a558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 96), bits); }
    // 0x18a55c: 0x41bc0  sll         $v1, $a0, 15
    ctx->pc = 0x18a55cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 15));
    // 0x18a560: 0x24634000  addiu       $v1, $v1, 0x4000
    ctx->pc = 0x18a560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16384));
    // 0x18a564: 0xe31807  srav        $v1, $v1, $a3
    ctx->pc = 0x18a564u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
    // 0x18a568: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x18a568u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x18a56c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x18a56cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18a570: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x18a570u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x18a574: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18a574u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a578: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x18a578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x18a57c: 0xe4c00064  swc1        $f0, 0x64($a2)
    ctx->pc = 0x18a57cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 100), bits); }
    // 0x18a580: 0x52bc0  sll         $a1, $a1, 15
    ctx->pc = 0x18a580u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 15));
    // 0x18a584: 0x24a5c000  addiu       $a1, $a1, -0x4000
    ctx->pc = 0x18a584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950912));
    // 0x18a588: 0x1252807  srav        $a1, $a1, $t1
    ctx->pc = 0x18a588u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 9) & 0x1F));
    // 0x18a58c: 0x48a52000  qmtc2.ni    $a1, $vf4
    ctx->pc = 0x18a58cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x18a590: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x18a590u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18a594: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x18a594u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x18a598: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18a598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a59c: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x18a59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x18a5a0: 0xe4c00068  swc1        $f0, 0x68($a2)
    ctx->pc = 0x18a5a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 104), bits); }
    ctx->pc = 0x18a5a4u;
}
