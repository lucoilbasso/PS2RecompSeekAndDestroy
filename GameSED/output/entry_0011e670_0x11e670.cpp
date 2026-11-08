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

// Function: entry_0011e670
// Address: 0x11e670 - 0x11e6e0
void entry_0011e670_0x11e670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e670_0x11e670");
#endif

    switch (ctx->pc) {
        case 0x11e688u: goto label_11e688;
        case 0x11e6acu: goto label_11e6ac;
        default: break;
    }

    ctx->pc = 0x11e670u;

    // 0x11e670: 0x5200001b  beql        $s0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x11E670u;
    {
        const bool branch_taken_0x11e670 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e670) {
            ctx->pc = 0x11E674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E670u;
            // 0x11e674: 0x96420000  lhu         $v0, 0x0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E6E0u;
            return;
        }
    }
    ctx->pc = 0x11E678u;
    // 0x11e678: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x11e678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x11e67c: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x11e67cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x11e680: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x11E680u;
    SET_GPR_U32(ctx, 31, 0x11E688u);
    ctx->pc = 0x11E684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E680u;
    // 0x11e684: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x11E680u, 0x11E688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E688u;
label_11e688:
    // 0x11e688: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x11e688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x11e68c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11e68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11e690: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x11e690u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x11e694: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x11e694u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11e698: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x11e698u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11e69c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11e69cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e6a0: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x11e6a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x11e6a4: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x11E6A4u;
    SET_GPR_U32(ctx, 31, 0x11E6ACu);
    ctx->pc = 0x11E6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E6A4u;
    // 0x11e6a8: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x11E6A4u, 0x11E6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E6ACu;
label_11e6ac:
    // 0x11e6ac: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x11e6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x11e6b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11e6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11e6b4: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x11e6b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x11e6b8: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x11e6b8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11e6bc: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x11e6bcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11e6c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11e6c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e6c4: 0x9224004b  lbu         $a0, 0x4B($s1)
    ctx->pc = 0x11e6c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 75)));
    // 0x11e6c8: 0xe6200054  swc1        $f0, 0x54($s1)
    ctx->pc = 0x11e6c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
    // 0x11e6cc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x11e6ccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11e6d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x11e6d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x11e6d4: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x11e6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
    // 0x11e6d8: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x11E6D8u;
    {
        const bool branch_taken_0x11e6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E6D8u;
        // 0x11e6dc: 0xe621004c  swc1        $f1, 0x4C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e6d8) {
            ctx->pc = 0x11E7D4u;
            return;
        }
    }
    ctx->pc = 0x11E6E0u;
}
