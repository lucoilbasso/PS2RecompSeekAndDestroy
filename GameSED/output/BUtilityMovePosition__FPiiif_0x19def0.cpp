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

// Function: BUtilityMovePosition__FPiiif
// Address: 0x19def0 - 0x19df7c
void BUtilityMovePosition__FPiiif_0x19def0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BUtilityMovePosition__FPiiif_0x19def0");
#endif

    ctx->pc = 0x19def0u;

    // 0x19def0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x19def0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19def4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x19def4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19def8: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x19def8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x19defc: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x19DEFCu;
    {
        const bool branch_taken_0x19defc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DEFCu;
        // 0x19df00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19defc) {
            ctx->pc = 0x19DF68u;
            goto label_19df68;
        }
    }
    ctx->pc = 0x19DF04u;
    // 0x19df04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19df04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19df08: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x19df08u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19df0c: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x19DF0Cu;
    {
        const bool branch_taken_0x19df0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19df0c) {
            ctx->pc = 0x19DF48u;
            goto label_19df48;
        }
    }
    ctx->pc = 0x19DF14u;
    // 0x19df14: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x19df14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x19df18: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x19df18u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x19df1c: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x19df1cu;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19df20: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x19df20u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x19df24: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x19df24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x19df28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19df28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19df2c: 0x63200b  movn        $a0, $v1, $v1
    ctx->pc = 0x19df2cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x19df30: 0xa40018  mult        $zero, $a1, $a0
    ctx->pc = 0x19df30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x19df34: 0x70002030  pmfhl.lw    $a0
    ctx->pc = 0x19df34u;
    SET_GPR_VEC(ctx, 4, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x19df38: 0x423fb  dsra        $a0, $a0, 15
    ctx->pc = 0x19df38u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> 15);
    // 0x19df3c: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x19df3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19df40: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x19df40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19df44: 0x44280a  movz        $a1, $v0, $a0
    ctx->pc = 0x19df44u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_19df48:
    // 0x19df48: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x19DF48u;
    {
        const bool branch_taken_0x19df48 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DF48u;
        // 0x19df4c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19df48) {
            ctx->pc = 0x19DF68u;
            goto label_19df68;
        }
    }
    ctx->pc = 0x19DF50u;
    // 0x19df50: 0x70a618e8  pminw       $v1, $a1, $a2
    ctx->pc = 0x19df50u;
    SET_GPR_VEC(ctx, 3, PS2_PMINW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x19df54: 0x32800  sll         $a1, $v1, 0
    ctx->pc = 0x19df54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x19df58: 0x61023  negu        $v0, $a2
    ctx->pc = 0x19df58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x19df5c: 0x70a210c8  pmaxw       $v0, $a1, $v0
    ctx->pc = 0x19df5cu;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x19df60: 0x22800  sll         $a1, $v0, 0
    ctx->pc = 0x19df60u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x19df64: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x19df64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19df68:
    // 0x19df68: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x19df68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19df6c: 0x4102b  sltu        $v0, $zero, $a0
    ctx->pc = 0x19df6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x19df70: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19df70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19df74: 0x3e00008  jr          $ra
    ctx->pc = 0x19DF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DF74u;
        // 0x19df78: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DF74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DF7Cu;
}
