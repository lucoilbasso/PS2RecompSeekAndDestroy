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

// Function: entry_0012f670
// Address: 0x12f670 - 0x12f73c
void entry_0012f670_0x12f670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f670_0x12f670");
#endif

    switch (ctx->pc) {
        case 0x12f684u: goto label_12f684;
        case 0x12f6b8u: goto label_12f6b8;
        case 0x12f6ecu: goto label_12f6ec;
        default: break;
    }

    ctx->pc = 0x12f670u;

    // 0x12f670: 0x8e7200cc  lw          $s2, 0xCC($s3)
    ctx->pc = 0x12f670u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
    // 0x12f674: 0x12200031  beqz        $s1, . + 4 + (0x31 << 2)
    ctx->pc = 0x12F674u;
    {
        const bool branch_taken_0x12f674 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F674u;
        // 0x12f678: 0x8e7500d0  lw          $s5, 0xD0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f674) {
            ctx->pc = 0x12F73Cu;
            return;
        }
    }
    ctx->pc = 0x12F67Cu;
    // 0x12f67c: 0xc066fb4  jal         func_19BED0
    ctx->pc = 0x12F67Cu;
    SET_GPR_U32(ctx, 31, 0x12F684u);
    ctx->pc = 0x12F680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F67Cu;
    // 0x12f680: 0x26900070  addiu       $s0, $s4, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BED0u, 0x12F67Cu, 0x12F684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F684u;
label_12f684:
    // 0x12f684: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x12f684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x12f688: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x12f688u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12f68c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f68cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f690: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f690u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f694: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x12f694u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x12f698: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x12f698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x12f69c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12f69cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12f6a0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f6a0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f6a4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f6a4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f6a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12f6a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f6ac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12f6acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12f6b0: 0xc066fb4  jal         func_19BED0
    ctx->pc = 0x12F6B0u;
    SET_GPR_U32(ctx, 31, 0x12F6B8u);
    ctx->pc = 0x12F6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F6B0u;
    // 0x12f6b4: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BED0u, 0x12F6B0u, 0x12F6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F6B8u;
label_12f6b8:
    // 0x12f6b8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x12f6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x12f6bc: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12f6bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12f6c0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f6c0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f6c4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f6c4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f6c8: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x12f6c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12f6cc: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x12f6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x12f6d0: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x12f6d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12f6d4: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f6d4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f6d8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f6d8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f6dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12f6dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f6e0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12f6e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12f6e4: 0xc066fb4  jal         func_19BED0
    ctx->pc = 0x12F6E4u;
    SET_GPR_U32(ctx, 31, 0x12F6ECu);
    ctx->pc = 0x12F6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F6E4u;
    // 0x12f6e8: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BED0u, 0x12F6E4u, 0x12F6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F6ECu;
label_12f6ec:
    // 0x12f6ec: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x12f6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x12f6f0: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12f6f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12f6f4: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f6f4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f6f8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f6f8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f6fc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x12f6fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12f700: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x12f700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x12f704: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x12f704u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12f708: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f708u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f70c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f70cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f710: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12f710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f714: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12f714u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12f718: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x12f718u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x12f71c: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x12f71cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12f720: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x12f720u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12f724: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x12f724u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x12f728: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x12f728u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x12f72c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x12f72cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x12f730: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x12f730u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x12f734: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x12f734u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x12f738: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x12f738u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    ctx->pc = 0x12f73cu;
}
