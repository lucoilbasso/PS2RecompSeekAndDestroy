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

// Function: EffectLazerSetUp__Fv
// Address: 0x128a08 - 0x128ad0
void EffectLazerSetUp__Fv_0x128a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectLazerSetUp__Fv_0x128a08");
#endif

    switch (ctx->pc) {
        case 0x128a40u: goto label_128a40;
        case 0x128a4cu: goto label_128a4c;
        case 0x128a58u: goto label_128a58;
        default: break;
    }

    ctx->pc = 0x128a08u;

    // 0x128a08: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x128a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x128a0c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x128a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x128a10: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x128a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x128a14: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x128a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x128a18: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x128a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x128a1c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x128a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x128a20: 0x7fa00000  sq          $zero, 0x0($sp)
    ctx->pc = 0x128a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 0));
    // 0x128a24: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x128a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x128a28: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x128a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x128a2c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x128a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x128a30: 0x247383a0  addiu       $s3, $v1, -0x7C60
    ctx->pc = 0x128a30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935456));
    // 0x128a34: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x128a34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128a38: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x128a38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x128a3c: 0x24110140  addiu       $s1, $zero, 0x140
    ctx->pc = 0x128a3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_128a40:
    // 0x128a40: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x128a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x128a44: 0xc067a86  jal         func_19EA18
    ctx->pc = 0x128A44u;
    SET_GPR_U32(ctx, 31, 0x128A4Cu);
    ctx->pc = 0x128A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128A44u;
    // 0x128a48: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EA18u, 0x128A44u, 0x128A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128A4Cu;
label_128a4c:
    // 0x128a4c: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x128a4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128a50: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x128a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x128a54: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x128a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_128a58:
    // 0x128a58: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x128a58u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x128a5c: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x128a5cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x128a60: 0xda050010  lqc2        $vf5, 0x10($s0)
    ctx->pc = 0x128a60u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x128a64: 0xda060020  lqc2        $vf6, 0x20($s0)
    ctx->pc = 0x128a64u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x128a68: 0xda070030  lqc2        $vf7, 0x30($s0)
    ctx->pc = 0x128a68u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x128a6c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x128a6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x128a70: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x128a70u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x128a74: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x128a74u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x128a78: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x128a78u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x128a7c: 0xf84c0000  sqc2        $vf12, 0x0($v0)
    ctx->pc = 0x128a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x128a80: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x128a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x128a84: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x128a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x128a88: 0x0  nop
    ctx->pc = 0x128a88u;
    // NOP
    // 0x128a8c: 0x0  nop
    ctx->pc = 0x128a8cu;
    // NOP
    // 0x128a90: 0x481fff1  bgez        $a0, . + 4 + (-0xF << 2)
    ctx->pc = 0x128A90u;
    {
        const bool branch_taken_0x128a90 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x128A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128A90u;
        // 0x128a94: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128a90) {
            ctx->pc = 0x128A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128a58;
        }
    }
    ctx->pc = 0x128A98u;
    // 0x128a98: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x128a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x128a9c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x128a9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x128aa0: 0x2a430008  slti        $v1, $s2, 0x8
    ctx->pc = 0x128aa0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x128aa4: 0x26310140  addiu       $s1, $s1, 0x140
    ctx->pc = 0x128aa4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
    // 0x128aa8: 0x24421000  addiu       $v0, $v0, 0x1000
    ctx->pc = 0x128aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4096));
    // 0x128aac: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x128AACu;
    {
        const bool branch_taken_0x128aac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x128AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128AACu;
        // 0x128ab0: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128aac) {
            ctx->pc = 0x128A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128a40;
        }
    }
    ctx->pc = 0x128AB4u;
    // 0x128ab4: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x128ab4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x128ab8: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x128ab8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x128abc: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x128abcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x128ac0: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x128ac0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x128ac4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x128ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x128ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x128AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128AC8u;
        // 0x128acc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128AD0u;
}
