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

// Function: entry_0012c8d8
// Address: 0x12c8d8 - 0x12c96c
void entry_0012c8d8_0x12c8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c8d8_0x12c8d8");
#endif

    switch (ctx->pc) {
        case 0x12c8f4u: goto label_12c8f4;
        default: break;
    }

    ctx->pc = 0x12c8d8u;

    // 0x12c8d8: 0x27b30004  addiu       $s3, $sp, 0x4
    ctx->pc = 0x12c8d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x12c8dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12c8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c8e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12c8e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c8e4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x12c8e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c8e8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x12c8e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12c8ec: 0xc04782c  jal         func_11E0B0
    ctx->pc = 0x12C8ECu;
    SET_GPR_U32(ctx, 31, 0x12C8F4u);
    ctx->pc = 0x12C8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C8ECu;
    // 0x12c8f0: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E0B0u, 0x12C8ECu, 0x12C8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C8F4u;
label_12c8f4:
    // 0x12c8f4: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x12c8f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12c8f8: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x12C8F8u;
    {
        const bool branch_taken_0x12c8f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12C8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C8F8u;
        // 0x12c8fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c8f8) {
            ctx->pc = 0x12C96Cu;
            return;
        }
    }
    ctx->pc = 0x12C900u;
    // 0x12c900: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x12c900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c904: 0xae2400c8  sw          $a0, 0xC8($s1)
    ctx->pc = 0x12c904u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 4));
    // 0x12c908: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x12c908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12c90c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12c90cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12c910: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12c910u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12c914: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12c914u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12c918: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12c918u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c91c: 0xe6200108  swc1        $f0, 0x108($s1)
    ctx->pc = 0x12c91cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 264), bits); }
    // 0x12c920: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x12c920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12c924: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12c924u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12c928: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12c928u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12c92c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12c92cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12c930: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12c930u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c934: 0xe620010c  swc1        $f0, 0x10C($s1)
    ctx->pc = 0x12c934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 268), bits); }
    // 0x12c938: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x12c938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x12c93c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12c93cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12c940: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12c940u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12c944: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12c944u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12c948: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12c948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c94c: 0xe6200110  swc1        $f0, 0x110($s1)
    ctx->pc = 0x12c94cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 272), bits); }
    // 0x12c950: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x12c950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x12c954: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12c954u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12c958: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12c958u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12c95c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12c95cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12c960: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12c960u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c964: 0xe6200114  swc1        $f0, 0x114($s1)
    ctx->pc = 0x12c964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 276), bits); }
    // 0x12c968: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12c968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12c96cu;
}
