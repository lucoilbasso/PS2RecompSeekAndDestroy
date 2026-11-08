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

// Function: GetPositionMul__17ST_EffectParticleP9FVector32
// Address: 0x1213b8 - 0x12141c
void GetPositionMul__17ST_EffectParticleP9FVector32_0x1213b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPositionMul__17ST_EffectParticleP9FVector32_0x1213b8");
#endif

    ctx->pc = 0x1213b8u;

    // 0x1213b8: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x1213b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1213bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1213bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1213c0: 0x54430012  bnel        $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1213C0u;
    {
        const bool branch_taken_0x1213c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1213c0) {
            ctx->pc = 0x1213C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1213C0u;
            // 0x1213c4: 0xdc820070  ld          $v0, 0x70($a0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12140Cu;
            goto label_12140c;
        }
    }
    ctx->pc = 0x1213C8u;
    // 0x1213c8: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x1213c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1213cc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1213CCu;
    {
        const bool branch_taken_0x1213cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1213D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1213CCu;
        // 0x1213d0: 0x24820070  addiu       $v0, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1213cc) {
            ctx->pc = 0x121408u;
            goto label_121408;
        }
    }
    ctx->pc = 0x1213D4u;
    // 0x1213d4: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x1213d4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1213d8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1213d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1213dc: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x1213dcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1213e0: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x1213e0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1213e4: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x1213e4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1213e8: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1213e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1213ec: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1213ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1213f0: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1213f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1213f4: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x1213f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1213f8: 0xf8ac0000  sqc2        $vf12, 0x0($a1)
    ctx->pc = 0x1213f8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x1213fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1213FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1213FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121404u;
    // 0x121404: 0x0  nop
    ctx->pc = 0x121404u;
    // NOP
label_121408:
    // 0x121408: 0xdc820070  ld          $v0, 0x70($a0)
    ctx->pc = 0x121408u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 112)));
label_12140c:
    // 0x12140c: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x12140cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x121410: 0xdc830078  ld          $v1, 0x78($a0)
    ctx->pc = 0x121410u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x121414: 0x3e00008  jr          $ra
    ctx->pc = 0x121414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121414u;
        // 0x121418: 0xfca30008  sd          $v1, 0x8($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12141Cu;
}
