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

// Function: sCalcFloatCtrl__FP8WcEntityP11BMotionCtrlf
// Address: 0x10c378 - 0x10c3d8
void sCalcFloatCtrl__FP8WcEntityP11BMotionCtrlf_0x10c378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sCalcFloatCtrl__FP8WcEntityP11BMotionCtrlf_0x10c378");
#endif

    ctx->pc = 0x10c378u;

    // 0x10c378: 0x94a20008  lhu         $v0, 0x8($a1)
    ctx->pc = 0x10c378u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x10c37c: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10c37cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x10c380: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x10c380u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x10c384: 0x3401fff9  ori         $at, $zero, 0xFFF9
    ctx->pc = 0x10c384u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x10c388: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x10c388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x10c38c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x10c38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x10c390: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x10c390u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x10c394: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x10C394u;
    {
        const bool branch_taken_0x10c394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c394) {
            ctx->pc = 0x10C3D0u;
            goto label_10c3d0;
        }
    }
    ctx->pc = 0x10C39Cu;
    // 0x10c39c: 0x94a20008  lhu         $v0, 0x8($a1)
    ctx->pc = 0x10c39cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x10c3a0: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x10c3a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x10c3a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10C3A4u;
    {
        const bool branch_taken_0x10c3a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C3A4u;
        // 0x10c3a8: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c3a4) {
            ctx->pc = 0x10C3BCu;
            goto label_10c3bc;
        }
    }
    ctx->pc = 0x10C3ACu;
    // 0x10c3ac: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x10c3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x10c3b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10c3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x10c3b4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10C3B4u;
    {
        const bool branch_taken_0x10c3b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10c3b4) {
            ctx->pc = 0x10C3D0u;
            goto label_10c3d0;
        }
    }
    ctx->pc = 0x10C3BCu;
label_10c3bc:
    // 0x10c3bc: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x10c3bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x10c3c0: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x10c3c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x10c3c4: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x10c3c4u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10c3c8: 0x48262800  qmfc2.ni    $a2, $vf5
    ctx->pc = 0x10c3c8u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10c3cc: 0x63000  sll         $a2, $a2, 0
    ctx->pc = 0x10c3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 0));
label_10c3d0:
    // 0x10c3d0: 0x3e00008  jr          $ra
    ctx->pc = 0x10C3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C3D0u;
        // 0x10c3d4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C3D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C3D8u;
}
