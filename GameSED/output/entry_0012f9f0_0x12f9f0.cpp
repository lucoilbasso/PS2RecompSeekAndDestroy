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

// Function: entry_0012f9f0
// Address: 0x12f9f0 - 0x12fac0
void entry_0012f9f0_0x12f9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f9f0_0x12f9f0");
#endif

    switch (ctx->pc) {
        case 0x12fa08u: goto label_12fa08;
        case 0x12fa3cu: goto label_12fa3c;
        case 0x12fa70u: goto label_12fa70;
        default: break;
    }

    ctx->pc = 0x12f9f0u;

    // 0x12f9f0: 0x26960010  addiu       $s6, $s4, 0x10
    ctx->pc = 0x12f9f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x12f9f4: 0x8e7200cc  lw          $s2, 0xCC($s3)
    ctx->pc = 0x12f9f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
    // 0x12f9f8: 0x12200031  beqz        $s1, . + 4 + (0x31 << 2)
    ctx->pc = 0x12F9F8u;
    {
        const bool branch_taken_0x12f9f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F9F8u;
        // 0x12f9fc: 0x8e7500d0  lw          $s5, 0xD0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f9f8) {
            ctx->pc = 0x12FAC0u;
            return;
        }
    }
    ctx->pc = 0x12FA00u;
    // 0x12fa00: 0xc066fb4  jal         func_19BED0
    ctx->pc = 0x12FA00u;
    SET_GPR_U32(ctx, 31, 0x12FA08u);
    ctx->pc = 0x12FA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FA00u;
    // 0x12fa04: 0x26900080  addiu       $s0, $s4, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BED0u, 0x12FA00u, 0x12FA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FA08u;
label_12fa08:
    // 0x12fa08: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x12fa08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x12fa0c: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x12fa0cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12fa10: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12fa10u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12fa14: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12fa14u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12fa18: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x12fa18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x12fa1c: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x12fa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x12fa20: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12fa20u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12fa24: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12fa24u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12fa28: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12fa28u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12fa2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12fa2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12fa30: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12fa30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12fa34: 0xc066fb4  jal         func_19BED0
    ctx->pc = 0x12FA34u;
    SET_GPR_U32(ctx, 31, 0x12FA3Cu);
    ctx->pc = 0x12FA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FA34u;
    // 0x12fa38: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BED0u, 0x12FA34u, 0x12FA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FA3Cu;
label_12fa3c:
    // 0x12fa3c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x12fa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x12fa40: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12fa40u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12fa44: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12fa44u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12fa48: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12fa48u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12fa4c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x12fa4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12fa50: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x12fa50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x12fa54: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x12fa54u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12fa58: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12fa58u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12fa5c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12fa5cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12fa60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12fa60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12fa64: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12fa64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12fa68: 0xc066fb4  jal         func_19BED0
    ctx->pc = 0x12FA68u;
    SET_GPR_U32(ctx, 31, 0x12FA70u);
    ctx->pc = 0x12FA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FA68u;
    // 0x12fa6c: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BED0u, 0x12FA68u, 0x12FA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FA70u;
label_12fa70:
    // 0x12fa70: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x12fa70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x12fa74: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12fa74u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12fa78: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12fa78u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12fa7c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12fa7cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12fa80: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x12fa80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12fa84: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x12fa84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x12fa88: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x12fa88u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12fa8c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12fa8cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12fa90: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12fa90u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12fa94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12fa94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12fa98: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12fa98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12fa9c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x12fa9cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x12faa0: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x12faa0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12faa4: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x12faa4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12faa8: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x12faa8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x12faac: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x12faacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x12fab0: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x12fab0u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x12fab4: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x12fab4u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x12fab8: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x12fab8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x12fabc: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x12fabcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    ctx->pc = 0x12fac0u;
}
