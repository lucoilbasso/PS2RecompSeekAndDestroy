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

// Function: entry_0012f73c
// Address: 0x12f73c - 0x12f8cc
void entry_0012f73c_0x12f73c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f73c_0x12f73c");
#endif

    switch (ctx->pc) {
        case 0x12f74cu: goto label_12f74c;
        case 0x12f780u: goto label_12f780;
        case 0x12f7b4u: goto label_12f7b4;
        default: break;
    }

    ctx->pc = 0x12f73cu;

    // 0x12f73c: 0x12400063  beqz        $s2, . + 4 + (0x63 << 2)
    ctx->pc = 0x12F73Cu;
    {
        const bool branch_taken_0x12f73c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f73c) {
            ctx->pc = 0x12F8CCu;
            return;
        }
    }
    ctx->pc = 0x12F744u;
    // 0x12f744: 0xc066fb4  jal         func_19BED0
    ctx->pc = 0x12F744u;
    SET_GPR_U32(ctx, 31, 0x12F74Cu);
    ctx->pc = 0x12F748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F744u;
    // 0x12f748: 0x26900080  addiu       $s0, $s4, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BED0u, 0x12F744u, 0x12F74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F74Cu;
label_12f74c:
    // 0x12f74c: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x12f74cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x12f750: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x12f750u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12f754: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f754u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f758: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f758u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f75c: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x12f75cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x12f760: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x12f760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x12f764: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12f764u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12f768: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f768u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f76c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f76cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f770: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12f770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f774: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12f774u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12f778: 0xc066fb4  jal         func_19BED0
    ctx->pc = 0x12F778u;
    SET_GPR_U32(ctx, 31, 0x12F780u);
    ctx->pc = 0x12F77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F778u;
    // 0x12f77c: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BED0u, 0x12F778u, 0x12F780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F780u;
label_12f780:
    // 0x12f780: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x12f780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x12f784: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12f784u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12f788: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f788u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f78c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f78cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f790: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x12f790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12f794: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x12f794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x12f798: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x12f798u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12f79c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f79cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f7a0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f7a0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f7a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12f7a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f7a8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12f7a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12f7ac: 0xc066fb4  jal         func_19BED0
    ctx->pc = 0x12F7ACu;
    SET_GPR_U32(ctx, 31, 0x12F7B4u);
    ctx->pc = 0x12F7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F7ACu;
    // 0x12f7b0: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BED0u, 0x12F7ACu, 0x12F7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F7B4u;
label_12f7b4:
    // 0x12f7b4: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x12f7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x12f7b8: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12f7b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12f7bc: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f7bcu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f7c0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f7c0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f7c4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x12f7c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12f7c8: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x12f7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x12f7cc: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x12f7ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12f7d0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f7d0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f7d4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f7d4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f7d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12f7d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f7dc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12f7dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12f7e0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x12f7e0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x12f7e4: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x12f7e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12f7e8: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x12f7e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12f7ec: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x12f7ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x12f7f0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x12f7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x12f7f4: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x12f7f4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x12f7f8: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x12f7f8u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x12f7fc: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x12f7fcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x12f800: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x12f800u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x12f804: 0x26870090  addiu       $a3, $s4, 0x90
    ctx->pc = 0x12f804u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    // 0x12f808: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x12f808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x12f80c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12f80cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12f810: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f810u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f814: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f814u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f818: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x12f818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12f81c: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x12f81cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x12f820: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x12f820u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12f824: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f824u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f828: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f828u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f82c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12f82cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f830: 0x8e460030  lw          $a2, 0x30($s2)
    ctx->pc = 0x12f830u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x12f834: 0x48a62000  qmtc2.ni    $a2, $vf4
    ctx->pc = 0x12f834u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x12f838: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f838u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f83c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f83cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f840: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12f840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f844: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x12f844u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12f848: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x12f848u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12f84c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x12f84cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x12f850: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x12f850u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x12f854: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x12f854u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x12f858: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x12f858u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x12f85c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x12f85cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x12f860: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x12f860u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x12f864: 0x268800a0  addiu       $t0, $s4, 0xA0
    ctx->pc = 0x12f864u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
    // 0x12f868: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x12f868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x12f86c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12f86cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12f870: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f870u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f874: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f874u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f878: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x12f878u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12f87c: 0x8e440038  lw          $a0, 0x38($s2)
    ctx->pc = 0x12f87cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x12f880: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x12f880u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12f884: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f884u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f888: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f888u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f88c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12f88cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f890: 0x8e46003c  lw          $a2, 0x3C($s2)
    ctx->pc = 0x12f890u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x12f894: 0x48a62000  qmtc2.ni    $a2, $vf4
    ctx->pc = 0x12f894u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x12f898: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f898u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f89c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f89cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f8a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12f8a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f8a4: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x12f8a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12f8a8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x12f8a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12f8ac: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x12f8acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x12f8b0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x12f8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x12f8b4: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x12f8b4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x12f8b8: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x12f8b8u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x12f8bc: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x12f8bcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x12f8c0: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x12f8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x12f8c4: 0x9646000c  lhu         $a2, 0xC($s2)
    ctx->pc = 0x12f8c4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x12f8c8: 0xa686002a  sh          $a2, 0x2A($s4)
    ctx->pc = 0x12f8c8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 42), (uint16_t)GPR_U32(ctx, 6));
    ctx->pc = 0x12f8ccu;
}
