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

// Function: entry_0012fc50
// Address: 0x12fc50 - 0x12fcbc
void entry_0012fc50_0x12fc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012fc50_0x12fc50");
#endif

    switch (ctx->pc) {
        case 0x12fc60u: goto label_12fc60;
        case 0x12fc84u: goto label_12fc84;
        default: break;
    }

    ctx->pc = 0x12fc50u;

    // 0x12fc50: 0x12a0001a  beqz        $s5, . + 4 + (0x1A << 2)
    ctx->pc = 0x12FC50u;
    {
        const bool branch_taken_0x12fc50 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FC50u;
        // 0x12fc54: 0x2ee200c8  sltiu       $v0, $s7, 0xC8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)200) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fc50) {
            ctx->pc = 0x12FCBCu;
            return;
        }
    }
    ctx->pc = 0x12FC58u;
    // 0x12fc58: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x12FC58u;
    SET_GPR_U32(ctx, 31, 0x12FC60u);
    ctx->pc = 0x12FC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FC58u;
    // 0x12fc5c: 0x8ea40010  lw          $a0, 0x10($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x12FC58u, 0x12FC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FC60u;
label_12fc60:
    // 0x12fc60: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x12fc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x12fc64: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12fc64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12fc68: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12fc68u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12fc6c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12fc6cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12fc70: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12fc70u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12fc74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12fc74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12fc78: 0xe6c00058  swc1        $f0, 0x58($s6)
    ctx->pc = 0x12fc78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 88), bits); }
    // 0x12fc7c: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x12FC7Cu;
    SET_GPR_U32(ctx, 31, 0x12FC84u);
    ctx->pc = 0x12FC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FC7Cu;
    // 0x12fc80: 0x8ea40014  lw          $a0, 0x14($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x12FC7Cu, 0x12FC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FC84u;
label_12fc84:
    // 0x12fc84: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x12fc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x12fc88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12fc88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12fc8c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12fc8cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12fc90: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12fc90u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12fc94: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12fc94u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12fc98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12fc98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12fc9c: 0xe6c0005c  swc1        $f0, 0x5C($s6)
    ctx->pc = 0x12fc9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 92), bits); }
    // 0x12fca0: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x12fca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x12fca4: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12fca4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12fca8: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12fca8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12fcac: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12fcacu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12fcb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12fcb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12fcb4: 0xe6c00060  swc1        $f0, 0x60($s6)
    ctx->pc = 0x12fcb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 96), bits); }
    // 0x12fcb8: 0x2ee200c8  sltiu       $v0, $s7, 0xC8
    ctx->pc = 0x12fcb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)200) ? 1 : 0);
    ctx->pc = 0x12fcbcu;
}
