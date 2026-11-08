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

// Function: entry_0012ca48
// Address: 0x12ca48 - 0x12caa8
void entry_0012ca48_0x12ca48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ca48_0x12ca48");
#endif

    switch (ctx->pc) {
        case 0x12ca5cu: goto label_12ca5c;
        default: break;
    }

    ctx->pc = 0x12ca48u;

    // 0x12ca48: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12ca48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ca4c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12ca4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ca50: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x12ca50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ca54: 0xc04782c  jal         func_11E0B0
    ctx->pc = 0x12CA54u;
    SET_GPR_U32(ctx, 31, 0x12CA5Cu);
    ctx->pc = 0x12CA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CA54u;
    // 0x12ca58: 0x2407000f  addiu       $a3, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E0B0u, 0x12CA54u, 0x12CA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CA5Cu;
label_12ca5c:
    // 0x12ca5c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x12ca5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12ca60: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x12CA60u;
    {
        const bool branch_taken_0x12ca60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12CA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CA60u;
        // 0x12ca64: 0xe62000d4  swc1        $f0, 0xD4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ca60) {
            ctx->pc = 0x12CAA8u;
            return;
        }
    }
    ctx->pc = 0x12CA68u;
    // 0x12ca68: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x12ca68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ca6c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x12ca6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12ca70: 0xae2400cc  sw          $a0, 0xCC($s1)
    ctx->pc = 0x12ca70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 4));
    // 0x12ca74: 0xae2200d0  sw          $v0, 0xD0($s1)
    ctx->pc = 0x12ca74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 2));
    // 0x12ca78: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x12ca78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12ca7c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12ca7cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12ca80: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12ca80u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12ca84: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12ca84u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12ca88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12ca88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12ca8c: 0xe6200118  swc1        $f0, 0x118($s1)
    ctx->pc = 0x12ca8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 280), bits); }
    // 0x12ca90: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x12ca90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12ca94: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12ca94u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12ca98: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12ca98u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12ca9c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12ca9cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12caa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12caa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12caa4: 0xe620011c  swc1        $f0, 0x11C($s1)
    ctx->pc = 0x12caa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 284), bits); }
    ctx->pc = 0x12caa8u;
}
