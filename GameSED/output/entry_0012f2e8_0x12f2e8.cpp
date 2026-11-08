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

// Function: entry_0012f2e8
// Address: 0x12f2e8 - 0x12f3b8
void entry_0012f2e8_0x12f2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f2e8_0x12f2e8");
#endif

    switch (ctx->pc) {
        case 0x12f300u: goto label_12f300;
        case 0x12f334u: goto label_12f334;
        case 0x12f368u: goto label_12f368;
        default: break;
    }

    ctx->pc = 0x12f2e8u;

    // 0x12f2e8: 0x26960010  addiu       $s6, $s4, 0x10
    ctx->pc = 0x12f2e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x12f2ec: 0x8e7200cc  lw          $s2, 0xCC($s3)
    ctx->pc = 0x12f2ecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
    // 0x12f2f0: 0x12200031  beqz        $s1, . + 4 + (0x31 << 2)
    ctx->pc = 0x12F2F0u;
    {
        const bool branch_taken_0x12f2f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F2F0u;
        // 0x12f2f4: 0x8e7500d0  lw          $s5, 0xD0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f2f0) {
            ctx->pc = 0x12F3B8u;
            return;
        }
    }
    ctx->pc = 0x12F2F8u;
    // 0x12f2f8: 0xc066fb4  jal         func_19BED0
    ctx->pc = 0x12F2F8u;
    SET_GPR_U32(ctx, 31, 0x12F300u);
    ctx->pc = 0x12F2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F2F8u;
    // 0x12f2fc: 0x26900080  addiu       $s0, $s4, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BED0u, 0x12F2F8u, 0x12F300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F300u;
label_12f300:
    // 0x12f300: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x12f300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x12f304: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x12f304u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12f308: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f308u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f30c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f30cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f310: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x12f310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x12f314: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x12f314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x12f318: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12f318u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12f31c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f31cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f320: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f320u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f324: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12f324u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f328: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12f328u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12f32c: 0xc066fb4  jal         func_19BED0
    ctx->pc = 0x12F32Cu;
    SET_GPR_U32(ctx, 31, 0x12F334u);
    ctx->pc = 0x12F330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F32Cu;
    // 0x12f330: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BED0u, 0x12F32Cu, 0x12F334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F334u;
label_12f334:
    // 0x12f334: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x12f334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x12f338: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12f338u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12f33c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f33cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f340: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f340u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f344: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x12f344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12f348: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x12f348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x12f34c: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x12f34cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12f350: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f350u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f354: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f354u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f358: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12f358u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f35c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12f35cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12f360: 0xc066fb4  jal         func_19BED0
    ctx->pc = 0x12F360u;
    SET_GPR_U32(ctx, 31, 0x12F368u);
    ctx->pc = 0x12F364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F360u;
    // 0x12f364: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BED0u, 0x12F360u, 0x12F368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F368u;
label_12f368:
    // 0x12f368: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x12f368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x12f36c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12f36cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12f370: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f370u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f374: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f374u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f378: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x12f378u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12f37c: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x12f37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x12f380: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x12f380u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12f384: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f384u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f388: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f388u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f38c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12f38cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f390: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12f390u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12f394: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x12f394u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x12f398: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x12f398u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12f39c: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x12f39cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12f3a0: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x12f3a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x12f3a4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x12f3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x12f3a8: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x12f3a8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x12f3ac: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x12f3acu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x12f3b0: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x12f3b0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x12f3b4: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x12f3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    ctx->pc = 0x12f3b8u;
}
