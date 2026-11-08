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

// Function: sCalcCtrlFloat__FP8WcEntityP11BMotionCtrli
// Address: 0x10c2d8 - 0x10c378
void sCalcCtrlFloat__FP8WcEntityP11BMotionCtrli_0x10c2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sCalcCtrlFloat__FP8WcEntityP11BMotionCtrli_0x10c2d8");
#endif

    ctx->pc = 0x10c2d8u;

    // 0x10c2d8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x10c2d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c2dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10c2dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c2e0: 0x94e30008  lhu         $v1, 0x8($a3)
    ctx->pc = 0x10c2e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x10c2e4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x10c2e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c2e8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x10c2e8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10c2ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x10c2ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x10c2f0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x10c2f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x10c2f4: 0x3401fff9  ori         $at, $zero, 0xFFF9
    ctx->pc = 0x10c2f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x10c2f8: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x10c2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x10c2fc: 0x2c820010  sltiu       $v0, $a0, 0x10
    ctx->pc = 0x10c2fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x10c300: 0x2c840011  sltiu       $a0, $a0, 0x11
    ctx->pc = 0x10c300u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x10c304: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10c304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x10c308: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x10c308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x10c30c: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x10c30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x10c310: 0x82280b  movn        $a1, $a0, $v0
    ctx->pc = 0x10c310u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x10c314: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10C314u;
    {
        const bool branch_taken_0x10c314 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C314u;
        // 0x10c318: 0x2c630004  sltiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c314) {
            ctx->pc = 0x10C324u;
            goto label_10c324;
        }
    }
    ctx->pc = 0x10C31Cu;
    // 0x10c31c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x10C31Cu;
    {
        const bool branch_taken_0x10c31c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c31c) {
            ctx->pc = 0x10C370u;
            goto label_10c370;
        }
    }
    ctx->pc = 0x10C324u;
label_10c324:
    // 0x10c324: 0x94e20008  lhu         $v0, 0x8($a3)
    ctx->pc = 0x10c324u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x10c328: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x10c328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x10c32c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x10C32Cu;
    {
        const bool branch_taken_0x10c32c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10c32c) {
            ctx->pc = 0x10C330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C32Cu;
            // 0x10c330: 0x8d020010  lw          $v0, 0x10($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C350u;
            goto label_10c350;
        }
    }
    ctx->pc = 0x10C334u;
    // 0x10c334: 0x48a62000  qmtc2.ni    $a2, $vf4
    ctx->pc = 0x10c334u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x10c338: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x10c338u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10c33c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x10c33cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10c340: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10c340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10c344: 0x3e00008  jr          $ra
    ctx->pc = 0x10C344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C34Cu;
    // 0x10c34c: 0x0  nop
    ctx->pc = 0x10c34cu;
    // NOP
label_10c350:
    // 0x10c350: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x10c350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x10c354: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10c354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x10c358: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10C358u;
    {
        const bool branch_taken_0x10c358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10c358) {
            ctx->pc = 0x10C370u;
            goto label_10c370;
        }
    }
    ctx->pc = 0x10C360u;
    // 0x10c360: 0x48a62000  qmtc2.ni    $a2, $vf4
    ctx->pc = 0x10c360u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x10c364: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x10c364u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10c368: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x10c368u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10c36c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10c36cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10c370:
    // 0x10c370: 0x3e00008  jr          $ra
    ctx->pc = 0x10C370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C378u;
}
