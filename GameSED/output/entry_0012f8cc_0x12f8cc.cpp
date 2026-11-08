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

// Function: entry_0012f8cc
// Address: 0x12f8cc - 0x12f938
void entry_0012f8cc_0x12f8cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f8cc_0x12f8cc");
#endif

    switch (ctx->pc) {
        case 0x12f8dcu: goto label_12f8dc;
        case 0x12f900u: goto label_12f900;
        default: break;
    }

    ctx->pc = 0x12f8ccu;

    // 0x12f8cc: 0x12a0001a  beqz        $s5, . + 4 + (0x1A << 2)
    ctx->pc = 0x12F8CCu;
    {
        const bool branch_taken_0x12f8cc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F8CCu;
        // 0x12f8d0: 0x2ee200c8  sltiu       $v0, $s7, 0xC8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)200) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f8cc) {
            ctx->pc = 0x12F938u;
            return;
        }
    }
    ctx->pc = 0x12F8D4u;
    // 0x12f8d4: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x12F8D4u;
    SET_GPR_U32(ctx, 31, 0x12F8DCu);
    ctx->pc = 0x12F8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F8D4u;
    // 0x12f8d8: 0x8ea40010  lw          $a0, 0x10($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x12F8D4u, 0x12F8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F8DCu;
label_12f8dc:
    // 0x12f8dc: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x12f8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x12f8e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12f8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12f8e4: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12f8e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12f8e8: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f8e8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f8ec: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f8ecu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f8f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12f8f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f8f4: 0xe6800058  swc1        $f0, 0x58($s4)
    ctx->pc = 0x12f8f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 88), bits); }
    // 0x12f8f8: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x12F8F8u;
    SET_GPR_U32(ctx, 31, 0x12F900u);
    ctx->pc = 0x12F8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F8F8u;
    // 0x12f8fc: 0x8ea40014  lw          $a0, 0x14($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x12F8F8u, 0x12F900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F900u;
label_12f900:
    // 0x12f900: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x12f900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x12f904: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12f904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12f908: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12f908u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12f90c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f90cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f910: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f910u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f914: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12f914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f918: 0xe680005c  swc1        $f0, 0x5C($s4)
    ctx->pc = 0x12f918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 92), bits); }
    // 0x12f91c: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x12f91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x12f920: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12f920u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12f924: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f924u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f928: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f928u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f92c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12f92cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f930: 0xe6800060  swc1        $f0, 0x60($s4)
    ctx->pc = 0x12f930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 96), bits); }
    // 0x12f934: 0x2ee200c8  sltiu       $v0, $s7, 0xC8
    ctx->pc = 0x12f934u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)200) ? 1 : 0);
    ctx->pc = 0x12f938u;
}
