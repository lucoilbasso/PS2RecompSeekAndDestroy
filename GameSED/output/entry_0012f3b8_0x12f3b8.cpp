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

// Function: entry_0012f3b8
// Address: 0x12f3b8 - 0x12f548
void entry_0012f3b8_0x12f3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f3b8_0x12f3b8");
#endif

    switch (ctx->pc) {
        case 0x12f3c8u: goto label_12f3c8;
        case 0x12f3fcu: goto label_12f3fc;
        case 0x12f430u: goto label_12f430;
        default: break;
    }

    ctx->pc = 0x12f3b8u;

    // 0x12f3b8: 0x12400063  beqz        $s2, . + 4 + (0x63 << 2)
    ctx->pc = 0x12F3B8u;
    {
        const bool branch_taken_0x12f3b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f3b8) {
            ctx->pc = 0x12F548u;
            return;
        }
    }
    ctx->pc = 0x12F3C0u;
    // 0x12f3c0: 0xc066fb4  jal         func_19BED0
    ctx->pc = 0x12F3C0u;
    SET_GPR_U32(ctx, 31, 0x12F3C8u);
    ctx->pc = 0x12F3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F3C0u;
    // 0x12f3c4: 0x26900090  addiu       $s0, $s4, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BED0u, 0x12F3C0u, 0x12F3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F3C8u;
label_12f3c8:
    // 0x12f3c8: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x12f3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x12f3cc: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x12f3ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12f3d0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f3d0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f3d4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f3d4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f3d8: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x12f3d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x12f3dc: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x12f3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x12f3e0: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12f3e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12f3e4: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f3e4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f3e8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f3e8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f3ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12f3ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f3f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12f3f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12f3f4: 0xc066fb4  jal         func_19BED0
    ctx->pc = 0x12F3F4u;
    SET_GPR_U32(ctx, 31, 0x12F3FCu);
    ctx->pc = 0x12F3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F3F4u;
    // 0x12f3f8: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BED0u, 0x12F3F4u, 0x12F3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F3FCu;
label_12f3fc:
    // 0x12f3fc: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x12f3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x12f400: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12f400u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12f404: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f404u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f408: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f408u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f40c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x12f40cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12f410: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x12f410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x12f414: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x12f414u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12f418: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f418u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f41c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f41cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f420: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12f420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f424: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12f424u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12f428: 0xc066fb4  jal         func_19BED0
    ctx->pc = 0x12F428u;
    SET_GPR_U32(ctx, 31, 0x12F430u);
    ctx->pc = 0x12F42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F428u;
    // 0x12f42c: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BED0u, 0x12F428u, 0x12F430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F430u;
label_12f430:
    // 0x12f430: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x12f430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x12f434: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12f434u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12f438: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f438u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f43c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f43cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f440: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x12f440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12f444: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x12f444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x12f448: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x12f448u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12f44c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f44cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f450: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f450u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f454: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12f454u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f458: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12f458u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12f45c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x12f45cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x12f460: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x12f460u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12f464: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x12f464u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12f468: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x12f468u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x12f46c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x12f46cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x12f470: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x12f470u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x12f474: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x12f474u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x12f478: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x12f478u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x12f47c: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x12f47cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x12f480: 0x268700a0  addiu       $a3, $s4, 0xA0
    ctx->pc = 0x12f480u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
    // 0x12f484: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x12f484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x12f488: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12f488u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12f48c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f48cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f490: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f490u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f494: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x12f494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12f498: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x12f498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x12f49c: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x12f49cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12f4a0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f4a0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f4a4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f4a4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f4a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12f4a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f4ac: 0x8e460030  lw          $a2, 0x30($s2)
    ctx->pc = 0x12f4acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x12f4b0: 0x48a62000  qmtc2.ni    $a2, $vf4
    ctx->pc = 0x12f4b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x12f4b4: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f4b4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f4b8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f4b8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f4bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12f4bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f4c0: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x12f4c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12f4c4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x12f4c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12f4c8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x12f4c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x12f4cc: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x12f4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x12f4d0: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x12f4d0u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x12f4d4: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x12f4d4u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x12f4d8: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x12f4d8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x12f4dc: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x12f4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x12f4e0: 0x268800b0  addiu       $t0, $s4, 0xB0
    ctx->pc = 0x12f4e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
    // 0x12f4e4: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x12f4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x12f4e8: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12f4e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12f4ec: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f4ecu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f4f0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f4f0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f4f4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x12f4f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12f4f8: 0x8e440038  lw          $a0, 0x38($s2)
    ctx->pc = 0x12f4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x12f4fc: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x12f4fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12f500: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f500u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f504: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f504u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f508: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12f508u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f50c: 0x8e46003c  lw          $a2, 0x3C($s2)
    ctx->pc = 0x12f50cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x12f510: 0x48a62000  qmtc2.ni    $a2, $vf4
    ctx->pc = 0x12f510u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x12f514: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f514u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f518: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f518u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f51c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12f51cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f520: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x12f520u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12f524: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x12f524u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12f528: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x12f528u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x12f52c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x12f52cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x12f530: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x12f530u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x12f534: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x12f534u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x12f538: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x12f538u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x12f53c: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x12f53cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x12f540: 0x9646000c  lhu         $a2, 0xC($s2)
    ctx->pc = 0x12f540u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x12f544: 0xa6c6002a  sh          $a2, 0x2A($s6)
    ctx->pc = 0x12f544u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 42), (uint16_t)GPR_U32(ctx, 6));
    ctx->pc = 0x12f548u;
}
