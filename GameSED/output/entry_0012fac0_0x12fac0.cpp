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

// Function: entry_0012fac0
// Address: 0x12fac0 - 0x12fc50
void entry_0012fac0_0x12fac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012fac0_0x12fac0");
#endif

    switch (ctx->pc) {
        case 0x12fad0u: goto label_12fad0;
        case 0x12fb04u: goto label_12fb04;
        case 0x12fb38u: goto label_12fb38;
        default: break;
    }

    ctx->pc = 0x12fac0u;

    // 0x12fac0: 0x12400063  beqz        $s2, . + 4 + (0x63 << 2)
    ctx->pc = 0x12FAC0u;
    {
        const bool branch_taken_0x12fac0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fac0) {
            ctx->pc = 0x12FC50u;
            return;
        }
    }
    ctx->pc = 0x12FAC8u;
    // 0x12fac8: 0xc066fb4  jal         func_19BED0
    ctx->pc = 0x12FAC8u;
    SET_GPR_U32(ctx, 31, 0x12FAD0u);
    ctx->pc = 0x12FACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FAC8u;
    // 0x12facc: 0x26900090  addiu       $s0, $s4, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BED0u, 0x12FAC8u, 0x12FAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FAD0u;
label_12fad0:
    // 0x12fad0: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x12fad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x12fad4: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x12fad4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12fad8: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12fad8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12fadc: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12fadcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12fae0: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x12fae0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x12fae4: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x12fae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x12fae8: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12fae8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12faec: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12faecu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12faf0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12faf0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12faf4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12faf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12faf8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12faf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12fafc: 0xc066fb4  jal         func_19BED0
    ctx->pc = 0x12FAFCu;
    SET_GPR_U32(ctx, 31, 0x12FB04u);
    ctx->pc = 0x12FB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FAFCu;
    // 0x12fb00: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BED0u, 0x12FAFCu, 0x12FB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FB04u;
label_12fb04:
    // 0x12fb04: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x12fb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x12fb08: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12fb08u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12fb0c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12fb0cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12fb10: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12fb10u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12fb14: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x12fb14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12fb18: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x12fb18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x12fb1c: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x12fb1cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12fb20: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12fb20u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12fb24: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12fb24u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12fb28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12fb28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12fb2c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12fb2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12fb30: 0xc066fb4  jal         func_19BED0
    ctx->pc = 0x12FB30u;
    SET_GPR_U32(ctx, 31, 0x12FB38u);
    ctx->pc = 0x12FB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FB30u;
    // 0x12fb34: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BED0u, 0x12FB30u, 0x12FB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FB38u;
label_12fb38:
    // 0x12fb38: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x12fb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x12fb3c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12fb3cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12fb40: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12fb40u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12fb44: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12fb44u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12fb48: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x12fb48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12fb4c: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x12fb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x12fb50: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x12fb50u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12fb54: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12fb54u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12fb58: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12fb58u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12fb5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12fb5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12fb60: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12fb60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12fb64: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x12fb64u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x12fb68: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x12fb68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12fb6c: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x12fb6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12fb70: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x12fb70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x12fb74: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x12fb74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x12fb78: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x12fb78u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x12fb7c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x12fb7cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x12fb80: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x12fb80u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x12fb84: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x12fb84u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x12fb88: 0x268700a0  addiu       $a3, $s4, 0xA0
    ctx->pc = 0x12fb88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
    // 0x12fb8c: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x12fb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x12fb90: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12fb90u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12fb94: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12fb94u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12fb98: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12fb98u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12fb9c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x12fb9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12fba0: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x12fba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x12fba4: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x12fba4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12fba8: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12fba8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12fbac: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12fbacu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12fbb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12fbb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12fbb4: 0x8e460030  lw          $a2, 0x30($s2)
    ctx->pc = 0x12fbb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x12fbb8: 0x48a62000  qmtc2.ni    $a2, $vf4
    ctx->pc = 0x12fbb8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x12fbbc: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12fbbcu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12fbc0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12fbc0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12fbc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12fbc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12fbc8: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x12fbc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12fbcc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x12fbccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12fbd0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x12fbd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x12fbd4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x12fbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x12fbd8: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x12fbd8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x12fbdc: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x12fbdcu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x12fbe0: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x12fbe0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x12fbe4: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x12fbe4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x12fbe8: 0x268800b0  addiu       $t0, $s4, 0xB0
    ctx->pc = 0x12fbe8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
    // 0x12fbec: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x12fbecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x12fbf0: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12fbf0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12fbf4: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12fbf4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12fbf8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12fbf8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12fbfc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x12fbfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12fc00: 0x8e440038  lw          $a0, 0x38($s2)
    ctx->pc = 0x12fc00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x12fc04: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x12fc04u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12fc08: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12fc08u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12fc0c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12fc0cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12fc10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12fc10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12fc14: 0x8e46003c  lw          $a2, 0x3C($s2)
    ctx->pc = 0x12fc14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x12fc18: 0x48a62000  qmtc2.ni    $a2, $vf4
    ctx->pc = 0x12fc18u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x12fc1c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12fc1cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12fc20: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12fc20u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12fc24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12fc24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12fc28: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x12fc28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12fc2c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x12fc2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12fc30: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x12fc30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x12fc34: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x12fc34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x12fc38: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x12fc38u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x12fc3c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x12fc3cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x12fc40: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x12fc40u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x12fc44: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x12fc44u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x12fc48: 0x9646000c  lhu         $a2, 0xC($s2)
    ctx->pc = 0x12fc48u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x12fc4c: 0xa6c6002a  sh          $a2, 0x2A($s6)
    ctx->pc = 0x12fc4cu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 42), (uint16_t)GPR_U32(ctx, 6));
    ctx->pc = 0x12fc50u;
}
