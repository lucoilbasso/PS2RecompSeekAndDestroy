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

// Function: entry_001217f8
// Address: 0x1217f8 - 0x12189c
void entry_001217f8_0x1217f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001217f8_0x1217f8");
#endif

    switch (ctx->pc) {
        case 0x121820u: goto label_121820;
        default: break;
    }

    ctx->pc = 0x1217f8u;

    // 0x1217f8: 0x128000f0  beqz        $s4, . + 4 + (0xF0 << 2)
    ctx->pc = 0x1217F8u;
    {
        const bool branch_taken_0x1217f8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1217FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1217F8u;
        // 0x1217fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1217f8) {
            ctx->pc = 0x121BBCu;
            return;
        }
    }
    ctx->pc = 0x121800u;
    // 0x121800: 0xae1400d0  sw          $s4, 0xD0($s0)
    ctx->pc = 0x121800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 20));
    // 0x121804: 0x27b40004  addiu       $s4, $sp, 0x4
    ctx->pc = 0x121804u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x121808: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x121808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12180c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12180cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121810: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x121810u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121814: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x121814u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x121818: 0xc04782c  jal         func_11E0B0
    ctx->pc = 0x121818u;
    SET_GPR_U32(ctx, 31, 0x121820u);
    ctx->pc = 0x12181Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121818u;
    // 0x12181c: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E0B0u, 0x121818u, 0x121820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121820u;
label_121820:
    // 0x121820: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x121820u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x121824: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x121824u;
    {
        const bool branch_taken_0x121824 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x121828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121824u;
        // 0x121828: 0xe60000e0  swc1        $f0, 0xE0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x121824) {
            ctx->pc = 0x12189Cu;
            return;
        }
    }
    ctx->pc = 0x12182Cu;
    // 0x12182c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x12182cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x121830: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x121830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x121834: 0xae0400d8  sw          $a0, 0xD8($s0)
    ctx->pc = 0x121834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 4));
    // 0x121838: 0xae0200dc  sw          $v0, 0xDC($s0)
    ctx->pc = 0x121838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 2));
    // 0x12183c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x12183cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x121840: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x121840u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x121844: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x121844u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x121848: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x121848u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12184c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12184cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121850: 0xe6000140  swc1        $f0, 0x140($s0)
    ctx->pc = 0x121850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 320), bits); }
    // 0x121854: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x121854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x121858: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x121858u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12185c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12185cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x121860: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x121860u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x121864: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x121864u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121868: 0xe6000144  swc1        $f0, 0x144($s0)
    ctx->pc = 0x121868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 324), bits); }
    // 0x12186c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x12186cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x121870: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x121870u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x121874: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x121874u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x121878: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x121878u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12187c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12187cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121880: 0xe6000148  swc1        $f0, 0x148($s0)
    ctx->pc = 0x121880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 328), bits); }
    // 0x121884: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x121884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x121888: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x121888u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12188c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12188cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x121890: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x121890u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x121894: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x121894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121898: 0xe600014c  swc1        $f0, 0x14C($s0)
    ctx->pc = 0x121898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 332), bits); }
    ctx->pc = 0x12189cu;
}
