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

// Function: BUtilityMoveInteger__Fiif
// Address: 0x19ef30 - 0x19efa8
void BUtilityMoveInteger__Fiif_0x19ef30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BUtilityMoveInteger__Fiif_0x19ef30");
#endif

    ctx->pc = 0x19ef30u;

    // 0x19ef30: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x19ef30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ef34: 0x10c0001a  beqz        $a2, . + 4 + (0x1A << 2)
    ctx->pc = 0x19EF34u;
    {
        const bool branch_taken_0x19ef34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EF34u;
        // 0x19ef38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ef34) {
            ctx->pc = 0x19EFA0u;
            goto label_19efa0;
        }
    }
    ctx->pc = 0x19EF3Cu;
    // 0x19ef3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19ef3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ef40: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x19ef40u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19ef44: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x19EF44u;
    {
        const bool branch_taken_0x19ef44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19ef44) {
            ctx->pc = 0x19EF80u;
            goto label_19ef80;
        }
    }
    ctx->pc = 0x19EF4Cu;
    // 0x19ef4c: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x19ef4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x19ef50: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x19ef50u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x19ef54: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x19ef54u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19ef58: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x19ef58u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x19ef5c: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x19ef5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x19ef60: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19ef60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ef64: 0x63200b  movn        $a0, $v1, $v1
    ctx->pc = 0x19ef64u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x19ef68: 0xc40018  mult        $zero, $a2, $a0
    ctx->pc = 0x19ef68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x19ef6c: 0x70002030  pmfhl.lw    $a0
    ctx->pc = 0x19ef6cu;
    SET_GPR_VEC(ctx, 4, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x19ef70: 0x423fb  dsra        $a0, $a0, 15
    ctx->pc = 0x19ef70u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> 15);
    // 0x19ef74: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x19ef74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19ef78: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x19ef78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ef7c: 0x44300a  movz        $a2, $v0, $a0
    ctx->pc = 0x19ef7cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_19ef80:
    // 0x19ef80: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x19EF80u;
    {
        const bool branch_taken_0x19ef80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ef80) {
            ctx->pc = 0x19EF84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19EF80u;
            // 0x19ef84: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19EFA0u;
            goto label_19efa0;
        }
    }
    ctx->pc = 0x19EF88u;
    // 0x19ef88: 0x70c518e8  pminw       $v1, $a2, $a1
    ctx->pc = 0x19ef88u;
    SET_GPR_VEC(ctx, 3, PS2_PMINW(GPR_VEC(ctx, 6), GPR_VEC(ctx, 5)));
    // 0x19ef8c: 0x33000  sll         $a2, $v1, 0
    ctx->pc = 0x19ef8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x19ef90: 0x51023  negu        $v0, $a1
    ctx->pc = 0x19ef90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x19ef94: 0x70c210c8  pmaxw       $v0, $a2, $v0
    ctx->pc = 0x19ef94u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x19ef98: 0x23000  sll         $a2, $v0, 0
    ctx->pc = 0x19ef98u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x19ef9c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x19ef9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19efa0:
    // 0x19efa0: 0x3e00008  jr          $ra
    ctx->pc = 0x19EFA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EFA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19EFA8u;
}
