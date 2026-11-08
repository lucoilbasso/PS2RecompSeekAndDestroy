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

// Function: entry_001645e8
// Address: 0x1645e8 - 0x1646b4
void entry_001645e8_0x1645e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001645e8_0x1645e8");
#endif

    ctx->pc = 0x1645e8u;

label_1645e8:
    // 0x1645e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1645e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1645ec: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1645ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1645f0: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1645f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1645f4: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1645f4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1645f8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1645f8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1645fc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1645fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x164600: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x164600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x164604: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x164604u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x164608: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x164608u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x16460c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x16460cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x164610: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x164610u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x164614: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x164614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x164618: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x164618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16461c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x16461cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x164620: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x164620u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x164624: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x164624u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x164628: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x164628u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16462c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16462cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x164630: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x164630u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x164634: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x164634u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x164638: 0x48a62000  qmtc2.ni    $a2, $vf4
    ctx->pc = 0x164638u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x16463c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x16463cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x164640: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x164640u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x164644: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x164644u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164648: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x164648u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16464c: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x16464cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x164650: 0x44041800  mfc1        $a0, $f3
    ctx->pc = 0x164650u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x164654: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x164654u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x164658: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x164658u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x16465c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x16465cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x164660: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x164660u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x164664: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x164664u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x164668: 0x25060010  addiu       $a2, $t0, 0x10
    ctx->pc = 0x164668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x16466c: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x16466cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x164670: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x164670u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x164674: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x164674u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x164678: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x164678u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x16467c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x16467cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x164680: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x164680u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x164684: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x164684u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x164688: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x164688u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x16468c: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x16468cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x164690: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x164690u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x164694: 0xad000020  sw          $zero, 0x20($t0)
    ctx->pc = 0x164694u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 0));
    // 0x164698: 0x127382a  slt         $a3, $t1, $a3
    ctx->pc = 0x164698u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x16469c: 0xe5040028  swc1        $f4, 0x28($t0)
    ctx->pc = 0x16469cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 40), bits); }
    // 0x1646a0: 0xe504002c  swc1        $f4, 0x2C($t0)
    ctx->pc = 0x1646a0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 44), bits); }
    // 0x1646a4: 0xad000030  sw          $zero, 0x30($t0)
    ctx->pc = 0x1646a4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 48), GPR_U32(ctx, 0));
    // 0x1646a8: 0xad000034  sw          $zero, 0x34($t0)
    ctx->pc = 0x1646a8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 52), GPR_U32(ctx, 0));
    // 0x1646ac: 0x14e0ffce  bnez        $a3, . + 4 + (-0x32 << 2)
    ctx->pc = 0x1646ACu;
    {
        const bool branch_taken_0x1646ac = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1646B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1646ACu;
        // 0x1646b0: 0x25080040  addiu       $t0, $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1646ac) {
            ctx->pc = 0x1645E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1645e8;
        }
    }
    ctx->pc = 0x1646B4u;
}
