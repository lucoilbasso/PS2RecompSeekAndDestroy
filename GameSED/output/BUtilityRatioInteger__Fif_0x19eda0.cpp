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

// Function: BUtilityRatioInteger__Fif
// Address: 0x19eda0 - 0x19ede0
void BUtilityRatioInteger__Fif_0x19eda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BUtilityRatioInteger__Fif_0x19eda0");
#endif

    ctx->pc = 0x19eda0u;

    // 0x19eda0: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x19eda0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x19eda4: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x19eda4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x19eda8: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x19eda8u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19edac: 0x48252800  qmfc2.ni    $a1, $vf5
    ctx->pc = 0x19edacu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x19edb0: 0x52800  sll         $a1, $a1, 0
    ctx->pc = 0x19edb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
    // 0x19edb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19edb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19edb8: 0xa5180b  movn        $v1, $a1, $a1
    ctx->pc = 0x19edb8u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x19edbc: 0x830018  mult        $zero, $a0, $v1
    ctx->pc = 0x19edbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x19edc0: 0x70001830  pmfhl.lw    $v1
    ctx->pc = 0x19edc0u;
    SET_GPR_VEC(ctx, 3, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x19edc4: 0x31bfb  dsra        $v1, $v1, 15
    ctx->pc = 0x19edc4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 15);
    // 0x19edc8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19EDC8u;
    {
        const bool branch_taken_0x19edc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19edc8) {
            ctx->pc = 0x19EDD8u;
            goto label_19edd8;
        }
    }
    ctx->pc = 0x19EDD0u;
    // 0x19edd0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x19edd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19edd4: 0x43180a  movz        $v1, $v0, $v1
    ctx->pc = 0x19edd4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_19edd8:
    // 0x19edd8: 0x3e00008  jr          $ra
    ctx->pc = 0x19EDD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EDD8u;
        // 0x19eddc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EDD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19EDE0u;
}
