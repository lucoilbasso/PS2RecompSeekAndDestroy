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

// Function: ResetModelSize__8WcObject
// Address: 0x195228 - 0x19528c
void ResetModelSize__8WcObject_0x195228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetModelSize__8WcObject_0x195228");
#endif

    switch (ctx->pc) {
        case 0x195280u: goto label_195280;
        default: break;
    }

    ctx->pc = 0x195228u;

    // 0x195228: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x195228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19522c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19522cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x195230: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x195230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x195234: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x195234u;
    {
        const bool branch_taken_0x195234 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x195238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195234u;
        // 0x195238: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195234) {
            ctx->pc = 0x195280u;
            goto label_195280;
        }
    }
    ctx->pc = 0x19523Cu;
    // 0x19523c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x19523cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x195240: 0x54620010  bnel        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x195240u;
    {
        const bool branch_taken_0x195240 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x195240) {
            ctx->pc = 0x195244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x195240u;
            // 0x195244: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x195284u;
            goto label_195284;
        }
    }
    ctx->pc = 0x195248u;
    // 0x195248: 0x248300d0  addiu       $v1, $a0, 0xD0
    ctx->pc = 0x195248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    // 0x19524c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x19524cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x195250: 0x4bc421ea  vmul.xyz    $vf7, $vf4, $vf4
    ctx->pc = 0x195250u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x195254: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x195254u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x195258: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x195258u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x19525c: 0x4a2703bd  .word       0x4A2703BD                   # vsqrt       $Q, $vf7x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x19525cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x195260: 0x4a0003bf  vwaitq
    ctx->pc = 0x195260u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x195264: 0x4b0001e0  vaddq.x     $vf7, $vf0, $Q
    ctx->pc = 0x195264u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x195268: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x195268u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x19526c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19526cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x195270: 0xc48c0190  lwc1        $f12, 0x190($a0)
    ctx->pc = 0x195270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x195274: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x195274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195278: 0xc06546c  jal         func_1951B0
    ctx->pc = 0x195278u;
    SET_GPR_U32(ctx, 31, 0x195280u);
    ctx->pc = 0x19527Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195278u;
    // 0x19527c: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1951B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1951B0u, 0x195278u, 0x195280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195280u;
label_195280:
    // 0x195280: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x195280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_195284:
    // 0x195284: 0x3e00008  jr          $ra
    ctx->pc = 0x195284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195284u;
        // 0x195288: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19528Cu;
}
