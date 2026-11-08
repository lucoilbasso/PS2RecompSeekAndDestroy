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

// Function: BUtilityMoveAngleDelta__Fiiif
// Address: 0x19df80 - 0x19e010
void BUtilityMoveAngleDelta__Fiiif_0x19df80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BUtilityMoveAngleDelta__Fiiif_0x19df80");
#endif

    ctx->pc = 0x19df80u;

    // 0x19df80: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x19df80u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x19df84: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x19df84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19df88: 0x30847fff  andi        $a0, $a0, 0x7FFF
    ctx->pc = 0x19df88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
    // 0x19df8c: 0x24828000  addiu       $v0, $a0, -0x8000
    ctx->pc = 0x19df8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
    // 0x19df90: 0x28834000  slti        $v1, $a0, 0x4000
    ctx->pc = 0x19df90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x19df94: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x19df94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19df98: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x19df98u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x19df9c: 0x10c0001a  beqz        $a2, . + 4 + (0x1A << 2)
    ctx->pc = 0x19DF9Cu;
    {
        const bool branch_taken_0x19df9c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DF9Cu;
        // 0x19dfa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19df9c) {
            ctx->pc = 0x19E008u;
            goto label_19e008;
        }
    }
    ctx->pc = 0x19DFA4u;
    // 0x19dfa4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19dfa4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19dfa8: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x19dfa8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19dfac: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x19DFACu;
    {
        const bool branch_taken_0x19dfac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19dfac) {
            ctx->pc = 0x19DFE8u;
            goto label_19dfe8;
        }
    }
    ctx->pc = 0x19DFB4u;
    // 0x19dfb4: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x19dfb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x19dfb8: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x19dfb8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x19dfbc: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x19dfbcu;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19dfc0: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x19dfc0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x19dfc4: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x19dfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x19dfc8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19dfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19dfcc: 0x63200b  movn        $a0, $v1, $v1
    ctx->pc = 0x19dfccu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x19dfd0: 0xc40018  mult        $zero, $a2, $a0
    ctx->pc = 0x19dfd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x19dfd4: 0x70002030  pmfhl.lw    $a0
    ctx->pc = 0x19dfd4u;
    SET_GPR_VEC(ctx, 4, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x19dfd8: 0x423fb  dsra        $a0, $a0, 15
    ctx->pc = 0x19dfd8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> 15);
    // 0x19dfdc: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x19dfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19dfe0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x19dfe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dfe4: 0x44300a  movz        $a2, $v0, $a0
    ctx->pc = 0x19dfe4u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_19dfe8:
    // 0x19dfe8: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x19DFE8u;
    {
        const bool branch_taken_0x19dfe8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x19dfe8) {
            ctx->pc = 0x19DFECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19DFE8u;
            // 0x19dfec: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E008u;
            goto label_19e008;
        }
    }
    ctx->pc = 0x19DFF0u;
    // 0x19dff0: 0x70c518e8  pminw       $v1, $a2, $a1
    ctx->pc = 0x19dff0u;
    SET_GPR_VEC(ctx, 3, PS2_PMINW(GPR_VEC(ctx, 6), GPR_VEC(ctx, 5)));
    // 0x19dff4: 0x33000  sll         $a2, $v1, 0
    ctx->pc = 0x19dff4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x19dff8: 0x51023  negu        $v0, $a1
    ctx->pc = 0x19dff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x19dffc: 0x70c210c8  pmaxw       $v0, $a2, $v0
    ctx->pc = 0x19dffcu;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x19e000: 0x23000  sll         $a2, $v0, 0
    ctx->pc = 0x19e000u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x19e004: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x19e004u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19e008:
    // 0x19e008: 0x3e00008  jr          $ra
    ctx->pc = 0x19E008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E010u;
}
