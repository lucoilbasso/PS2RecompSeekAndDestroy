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

// Function: entry_0012f548
// Address: 0x12f548 - 0x12f5b4
void entry_0012f548_0x12f548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f548_0x12f548");
#endif

    switch (ctx->pc) {
        case 0x12f558u: goto label_12f558;
        case 0x12f57cu: goto label_12f57c;
        default: break;
    }

    ctx->pc = 0x12f548u;

    // 0x12f548: 0x12a0001a  beqz        $s5, . + 4 + (0x1A << 2)
    ctx->pc = 0x12F548u;
    {
        const bool branch_taken_0x12f548 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F548u;
        // 0x12f54c: 0x2ee200c8  sltiu       $v0, $s7, 0xC8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)200) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f548) {
            ctx->pc = 0x12F5B4u;
            return;
        }
    }
    ctx->pc = 0x12F550u;
    // 0x12f550: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x12F550u;
    SET_GPR_U32(ctx, 31, 0x12F558u);
    ctx->pc = 0x12F554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F550u;
    // 0x12f554: 0x8ea40010  lw          $a0, 0x10($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x12F550u, 0x12F558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F558u;
label_12f558:
    // 0x12f558: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x12f558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x12f55c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12f55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12f560: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12f560u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12f564: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f564u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f568: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f568u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f56c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12f56cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f570: 0xe6c00058  swc1        $f0, 0x58($s6)
    ctx->pc = 0x12f570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 88), bits); }
    // 0x12f574: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x12F574u;
    SET_GPR_U32(ctx, 31, 0x12F57Cu);
    ctx->pc = 0x12F578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F574u;
    // 0x12f578: 0x8ea40014  lw          $a0, 0x14($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x12F574u, 0x12F57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F57Cu;
label_12f57c:
    // 0x12f57c: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x12f57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x12f580: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12f580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12f584: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12f584u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12f588: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f588u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f58c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f58cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f590: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12f590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f594: 0xe6c0005c  swc1        $f0, 0x5C($s6)
    ctx->pc = 0x12f594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 92), bits); }
    // 0x12f598: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x12f598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x12f59c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12f59cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12f5a0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f5a0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f5a4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f5a4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f5a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12f5a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f5ac: 0xe6c00060  swc1        $f0, 0x60($s6)
    ctx->pc = 0x12f5acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 96), bits); }
    // 0x12f5b0: 0x2ee200c8  sltiu       $v0, $s7, 0xC8
    ctx->pc = 0x12f5b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)200) ? 1 : 0);
    ctx->pc = 0x12f5b4u;
}
