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

// Function: entry_0012c96c
// Address: 0x12c96c - 0x12ca48
void entry_0012c96c_0x12c96c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c96c_0x12c96c");
#endif

    switch (ctx->pc) {
        case 0x12c974u: goto label_12c974;
        case 0x12c988u: goto label_12c988;
        case 0x12c9acu: goto label_12c9ac;
        case 0x12c9d0u: goto label_12c9d0;
        case 0x12c9f4u: goto label_12c9f4;
        default: break;
    }

    ctx->pc = 0x12c96cu;

    // 0x12c96c: 0xc04844a  jal         func_121128
    ctx->pc = 0x12C96Cu;
    SET_GPR_U32(ctx, 31, 0x12C974u);
    ctx->pc = 0x12C970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C96Cu;
    // 0x12c970: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12C96Cu, 0x12C974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C974u;
label_12c974:
    // 0x12c974: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12c974u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c978: 0x12000033  beqz        $s0, . + 4 + (0x33 << 2)
    ctx->pc = 0x12C978u;
    {
        const bool branch_taken_0x12c978 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C978u;
        // 0x12c97c: 0xafb00000  sw          $s0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c978) {
            ctx->pc = 0x12CA48u;
            return;
        }
    }
    ctx->pc = 0x12C980u;
    // 0x12c980: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x12C980u;
    SET_GPR_U32(ctx, 31, 0x12C988u);
    ctx->pc = 0x12C984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C980u;
    // 0x12c984: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x12C980u, 0x12C988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C988u;
label_12c988:
    // 0x12c988: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x12c988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12c98c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12c98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12c990: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12c990u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12c994: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12c994u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12c998: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12c998u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12c99c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12c99cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c9a0: 0xe6200124  swc1        $f0, 0x124($s1)
    ctx->pc = 0x12c9a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 292), bits); }
    // 0x12c9a4: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x12C9A4u;
    SET_GPR_U32(ctx, 31, 0x12C9ACu);
    ctx->pc = 0x12C9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C9A4u;
    // 0x12c9a8: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x12C9A4u, 0x12C9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C9ACu;
label_12c9ac:
    // 0x12c9ac: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x12c9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12c9b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12c9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12c9b4: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12c9b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12c9b8: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12c9b8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12c9bc: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12c9bcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12c9c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12c9c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c9c4: 0xe6200128  swc1        $f0, 0x128($s1)
    ctx->pc = 0x12c9c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 296), bits); }
    // 0x12c9c8: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x12C9C8u;
    SET_GPR_U32(ctx, 31, 0x12C9D0u);
    ctx->pc = 0x12C9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C9C8u;
    // 0x12c9cc: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x12C9C8u, 0x12C9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C9D0u;
label_12c9d0:
    // 0x12c9d0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x12c9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x12c9d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12c9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12c9d8: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12c9d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12c9dc: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12c9dcu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12c9e0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12c9e0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12c9e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12c9e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c9e8: 0xe620012c  swc1        $f0, 0x12C($s1)
    ctx->pc = 0x12c9e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 300), bits); }
    // 0x12c9ec: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x12C9ECu;
    SET_GPR_U32(ctx, 31, 0x12C9F4u);
    ctx->pc = 0x12C9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C9ECu;
    // 0x12c9f0: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x12C9ECu, 0x12C9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C9F4u;
label_12c9f4:
    // 0x12c9f4: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x12c9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x12c9f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12c9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12c9fc: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12c9fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12ca00: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12ca00u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12ca04: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12ca04u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12ca08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12ca08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12ca0c: 0xe6200130  swc1        $f0, 0x130($s1)
    ctx->pc = 0x12ca0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 304), bits); }
    // 0x12ca10: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x12ca10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x12ca14: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12ca14u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12ca18: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12ca18u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12ca1c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12ca1cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12ca20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12ca20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12ca24: 0xe6200134  swc1        $f0, 0x134($s1)
    ctx->pc = 0x12ca24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 308), bits); }
    // 0x12ca28: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x12ca28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x12ca2c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12ca2cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12ca30: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12ca30u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12ca34: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12ca34u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12ca38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12ca38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12ca3c: 0xe6200138  swc1        $f0, 0x138($s1)
    ctx->pc = 0x12ca3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 312), bits); }
    // 0x12ca40: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x12CA40u;
    {
        const bool branch_taken_0x12ca40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CA40u;
        // 0x12ca44: 0xae2000cc  sw          $zero, 0xCC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ca40) {
            ctx->pc = 0x12CAE8u;
            return;
        }
    }
    ctx->pc = 0x12CA48u;
}
