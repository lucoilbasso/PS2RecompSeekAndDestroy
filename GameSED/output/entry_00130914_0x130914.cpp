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

// Function: entry_00130914
// Address: 0x130914 - 0x1309f8
void entry_00130914_0x130914(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130914_0x130914");
#endif

    ctx->pc = 0x130914u;

    // 0x130914: 0x10a00038  beqz        $a1, . + 4 + (0x38 << 2)
    ctx->pc = 0x130914u;
    {
        const bool branch_taken_0x130914 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x130918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130914u;
        // 0x130918: 0x26280020  addiu       $t0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130914) {
            ctx->pc = 0x1309F8u;
            return;
        }
    }
    ctx->pc = 0x13091Cu;
    // 0x13091c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x13091cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x130920: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x130920u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x130924: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x130924u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x130928: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x130928u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x13092c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x13092cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x130930: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x130930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x130934: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x130934u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x130938: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x130938u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x13093c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x13093cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x130940: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x130940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x130944: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x130944u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x130948: 0x48a62000  qmtc2.ni    $a2, $vf4
    ctx->pc = 0x130948u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x13094c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x13094cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x130950: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x130950u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x130954: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x130954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x130958: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x130958u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x13095c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x13095cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x130960: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x130960u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x130964: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x130964u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x130968: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x130968u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x13096c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x13096cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x130970: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x130970u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x130974: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x130974u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x130978: 0x8e2700d8  lw          $a3, 0xD8($s1)
    ctx->pc = 0x130978u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x13097c: 0x26280030  addiu       $t0, $s1, 0x30
    ctx->pc = 0x13097cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x130980: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x130980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x130984: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x130984u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x130988: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x130988u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x13098c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x13098cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x130990: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x130990u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x130994: 0x8ce40014  lw          $a0, 0x14($a3)
    ctx->pc = 0x130994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x130998: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x130998u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x13099c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x13099cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1309a0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1309a0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1309a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1309a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1309a8: 0x8ce60018  lw          $a2, 0x18($a3)
    ctx->pc = 0x1309a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x1309ac: 0x48a62000  qmtc2.ni    $a2, $vf4
    ctx->pc = 0x1309acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1309b0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1309b0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1309b4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1309b4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1309b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1309b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1309bc: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1309bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1309c0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1309c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1309c4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1309c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1309c8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1309c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1309cc: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x1309ccu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1309d0: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x1309d0u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x1309d4: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x1309d4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x1309d8: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x1309d8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x1309dc: 0x8e2600d8  lw          $a2, 0xD8($s1)
    ctx->pc = 0x1309dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x1309e0: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x1309e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x1309e4: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x1309e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x1309e8: 0x8cc30020  lw          $v1, 0x20($a2)
    ctx->pc = 0x1309e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1309ec: 0xae230044  sw          $v1, 0x44($s1)
    ctx->pc = 0x1309ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
    // 0x1309f0: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x1309f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x1309f4: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x1309f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    ctx->pc = 0x1309f8u;
}
