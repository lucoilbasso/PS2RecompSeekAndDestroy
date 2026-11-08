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

// Function: entry_0012c7fc
// Address: 0x12c7fc - 0x12c8d8
void entry_0012c7fc_0x12c7fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c7fc_0x12c7fc");
#endif

    switch (ctx->pc) {
        case 0x12c808u: goto label_12c808;
        case 0x12c82cu: goto label_12c82c;
        case 0x12c850u: goto label_12c850;
        case 0x12c874u: goto label_12c874;
        default: break;
    }

    ctx->pc = 0x12c7fcu;

    // 0x12c7fc: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x12c7fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x12c800: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x12C800u;
    SET_GPR_U32(ctx, 31, 0x12C808u);
    ctx->pc = 0x12C804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C800u;
    // 0x12c804: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x12C800u, 0x12C808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C808u;
label_12c808:
    // 0x12c808: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x12c808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12c80c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12c80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12c810: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12c810u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12c814: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12c814u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12c818: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12c818u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12c81c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12c81cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c820: 0xe6200124  swc1        $f0, 0x124($s1)
    ctx->pc = 0x12c820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 292), bits); }
    // 0x12c824: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x12C824u;
    SET_GPR_U32(ctx, 31, 0x12C82Cu);
    ctx->pc = 0x12C828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C824u;
    // 0x12c828: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x12C824u, 0x12C82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C82Cu;
label_12c82c:
    // 0x12c82c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x12c82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12c830: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12c830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12c834: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12c834u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12c838: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12c838u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12c83c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12c83cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12c840: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12c840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c844: 0xe6200128  swc1        $f0, 0x128($s1)
    ctx->pc = 0x12c844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 296), bits); }
    // 0x12c848: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x12C848u;
    SET_GPR_U32(ctx, 31, 0x12C850u);
    ctx->pc = 0x12C84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C848u;
    // 0x12c84c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x12C848u, 0x12C850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C850u;
label_12c850:
    // 0x12c850: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x12c850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x12c854: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12c854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12c858: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12c858u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12c85c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12c85cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12c860: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12c860u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12c864: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12c864u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c868: 0xe620012c  swc1        $f0, 0x12C($s1)
    ctx->pc = 0x12c868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 300), bits); }
    // 0x12c86c: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x12C86Cu;
    SET_GPR_U32(ctx, 31, 0x12C874u);
    ctx->pc = 0x12C870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C86Cu;
    // 0x12c870: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x12C86Cu, 0x12C874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C874u;
label_12c874:
    // 0x12c874: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x12c874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x12c878: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12c878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12c87c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12c87cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12c880: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12c880u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12c884: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12c884u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12c888: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12c888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c88c: 0xe6200130  swc1        $f0, 0x130($s1)
    ctx->pc = 0x12c88cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 304), bits); }
    // 0x12c890: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x12c890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x12c894: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12c894u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12c898: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12c898u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12c89c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12c89cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12c8a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12c8a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c8a4: 0xe6200134  swc1        $f0, 0x134($s1)
    ctx->pc = 0x12c8a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 308), bits); }
    // 0x12c8a8: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x12c8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x12c8ac: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12c8acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12c8b0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12c8b0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12c8b4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12c8b4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12c8b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12c8b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c8bc: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x12c8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x12c8c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12c8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c8c4: 0xe6200138  swc1        $f0, 0x138($s1)
    ctx->pc = 0x12c8c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 312), bits); }
    // 0x12c8c8: 0xae240120  sw          $a0, 0x120($s1)
    ctx->pc = 0x12c8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 4));
    // 0x12c8cc: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x12C8CCu;
    {
        const bool branch_taken_0x12c8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C8CCu;
        // 0x12c8d0: 0xae2000cc  sw          $zero, 0xCC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c8cc) {
            ctx->pc = 0x12CB20u;
            return;
        }
    }
    ctx->pc = 0x12C8D4u;
    // 0x12c8d4: 0x0  nop
    ctx->pc = 0x12c8d4u;
    // NOP
    ctx->pc = 0x12c8d8u;
}
