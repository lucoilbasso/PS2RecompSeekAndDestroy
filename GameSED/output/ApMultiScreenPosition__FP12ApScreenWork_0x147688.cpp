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

// Function: ApMultiScreenPosition__FP12ApScreenWork
// Address: 0x147688 - 0x1476f8
void ApMultiScreenPosition__FP12ApScreenWork_0x147688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApMultiScreenPosition__FP12ApScreenWork_0x147688");
#endif

    switch (ctx->pc) {
        case 0x1476a0u: goto label_1476a0;
        default: break;
    }

    ctx->pc = 0x147688u;

    // 0x147688: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x147688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14768c: 0xc481001c  lwc1        $f1, 0x1C($a0)
    ctx->pc = 0x14768cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147690: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x147690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147694: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x147694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x147698: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x147698u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14769c: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x14769cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1476a0:
    // 0x1476a0: 0x24a303b0  addiu       $v1, $a1, 0x3B0
    ctx->pc = 0x1476a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 944));
    // 0x1476a4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1476a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1476a8: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x1476a8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x1476ac: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1476acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1476b0: 0x24a20270  addiu       $v0, $a1, 0x270
    ctx->pc = 0x1476b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 624));
    // 0x1476b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1476b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1476b8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1476b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1476bc: 0xd8c80000  lqc2        $vf8, 0x0($a2)
    ctx->pc = 0x1476bcu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1476c0: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1476c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1476c4: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x1476c4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1476c8: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x1476c8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1476cc: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x1476ccu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1476d0: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1476d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1476d4: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1476d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1476d8: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1476d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1476dc: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x1476dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1476e0: 0xf84c0000  sqc2        $vf12, 0x0($v0)
    ctx->pc = 0x1476e0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x1476e4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1476e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1476e8: 0x4e1ffed  bgez        $a3, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1476E8u;
    {
        const bool branch_taken_0x1476e8 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1476ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1476E8u;
        // 0x1476ec: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1476e8) {
            ctx->pc = 0x1476A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1476a0;
        }
    }
    ctx->pc = 0x1476F0u;
    // 0x1476f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1476F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1476F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1476F0u;
        // 0x1476f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1476F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1476F8u;
}
