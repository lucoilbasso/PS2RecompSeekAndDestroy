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

// Function: EffectStungunCalc__FP16ST_EffectSpecial
// Address: 0x127bb8 - 0x128218
void EffectStungunCalc__FP16ST_EffectSpecial_0x127bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectStungunCalc__FP16ST_EffectSpecial_0x127bb8");
#endif

    switch (ctx->pc) {
        case 0x127be8u: goto label_127be8;
        case 0x127d70u: goto label_127d70;
        case 0x127e18u: goto label_127e18;
        default: break;
    }

    ctx->pc = 0x127bb8u;

    // 0x127bb8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x127bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x127bbc: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x127bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x127bc0: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x127bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x127bc4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x127bc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127bc8: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x127bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x127bcc: 0x263001b0  addiu       $s0, $s1, 0x1B0
    ctx->pc = 0x127bccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
    // 0x127bd0: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x127bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x127bd4: 0x8e120048  lw          $s2, 0x48($s0)
    ctx->pc = 0x127bd4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x127bd8: 0x12400189  beqz        $s2, . + 4 + (0x189 << 2)
    ctx->pc = 0x127BD8u;
    {
        const bool branch_taken_0x127bd8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x127BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127BD8u;
        // 0x127bdc: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127bd8) {
            ctx->pc = 0x128200u;
            goto label_128200;
        }
    }
    ctx->pc = 0x127BE0u;
    // 0x127be0: 0xc047a1a  jal         func_11E868
    ctx->pc = 0x127BE0u;
    SET_GPR_U32(ctx, 31, 0x127BE8u);
    ctx->pc = 0x127BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127BE0u;
    // 0x127be4: 0x262501bc  addiu       $a1, $s1, 0x1BC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 444));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E868u, 0x127BE0u, 0x127BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127BE8u;
label_127be8:
    // 0x127be8: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x127be8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x127bec: 0x5440007e  bnel        $v0, $zero, . + 4 + (0x7E << 2)
    ctx->pc = 0x127BECu;
    {
        const bool branch_taken_0x127bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127bec) {
            ctx->pc = 0x127BF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127BECu;
            // 0x127bf0: 0x8e2201a0  lw          $v0, 0x1A0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127DE8u;
            goto label_127de8;
        }
    }
    ctx->pc = 0x127BF4u;
    // 0x127bf4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x127bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127bf8: 0x26220120  addiu       $v0, $s1, 0x120
    ctx->pc = 0x127bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x127bfc: 0xa6030010  sh          $v1, 0x10($s0)
    ctx->pc = 0x127bfcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x127c00: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x127c00u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x127c04: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x127c04u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x127c08: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x127c08u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x127c0c: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x127c0cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x127c10: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x127c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x127c14: 0xfba50010  sqc2        $vf5, 0x10($sp)
    ctx->pc = 0x127c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x127c18: 0xfba60020  sqc2        $vf6, 0x20($sp)
    ctx->pc = 0x127c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x127c1c: 0xfba70030  sqc2        $vf7, 0x30($sp)
    ctx->pc = 0x127c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x127c20: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x127c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x127c24: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x127C24u;
    {
        const bool branch_taken_0x127c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x127c24) {
            ctx->pc = 0x127C28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127C24u;
            // 0x127c28: 0x27a20040  addiu       $v0, $sp, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127CA0u;
            goto label_127ca0;
        }
    }
    ctx->pc = 0x127C2Cu;
    // 0x127c2c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x127c2cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x127c30: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x127c30u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x127c34: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x127c34u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x127c38: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x127c38u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x127c3c: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x127c3cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127c40: 0xdba90010  lqc2        $vf9, 0x10($sp)
    ctx->pc = 0x127c40u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127c44: 0xdbaa0020  lqc2        $vf10, 0x20($sp)
    ctx->pc = 0x127c44u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127c48: 0xdbab0030  lqc2        $vf11, 0x30($sp)
    ctx->pc = 0x127c48u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x127c4c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x127c4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127c50: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x127c50u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127c54: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x127c54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127c58: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x127c58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x127c5c: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x127c5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127c60: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x127c60u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127c64: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x127c64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127c68: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x127c68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x127c6c: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x127c6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127c70: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x127c70u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127c74: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x127c74u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127c78: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x127c78u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x127c7c: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x127c7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127c80: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x127c80u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127c84: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x127c84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127c88: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x127c88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x127c8c: 0xfbac0000  sqc2        $vf12, 0x0($sp)
    ctx->pc = 0x127c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x127c90: 0xfbad0010  sqc2        $vf13, 0x10($sp)
    ctx->pc = 0x127c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x127c94: 0xfbae0020  sqc2        $vf14, 0x20($sp)
    ctx->pc = 0x127c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x127c98: 0xfbaf0030  sqc2        $vf15, 0x30($sp)
    ctx->pc = 0x127c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x127c9c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x127c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_127ca0:
    // 0x127ca0: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x127ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x127ca4: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x127ca4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x127ca8: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x127ca8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127cac: 0xdba50010  lqc2        $vf5, 0x10($sp)
    ctx->pc = 0x127cacu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127cb0: 0xdba60020  lqc2        $vf6, 0x20($sp)
    ctx->pc = 0x127cb0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127cb4: 0xdba70030  lqc2        $vf7, 0x30($sp)
    ctx->pc = 0x127cb4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x127cb8: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x127cb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127cbc: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x127cbcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127cc0: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x127cc0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127cc4: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x127cc4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x127cc8: 0xfa4c0000  sqc2        $vf12, 0x0($s2)
    ctx->pc = 0x127cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x127ccc: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x127cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x127cd0: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x127cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x127cd4: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x127cd4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x127cd8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x127cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x127cdc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x127cdcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x127ce0: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x127ce0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x127ce4: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x127ce4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x127ce8: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x127ce8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x127cec: 0x4a6503be  vrsqrt      $Q, $vf0w, $vf5x
    ctx->pc = 0x127cecu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x127cf0: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x127cf0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x127cf4: 0x4be43183  vaddw.xyzw  $vf6, $vf6, $vf4w
    ctx->pc = 0x127cf4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x127cf8: 0x4a0003bf  vwaitq
    ctx->pc = 0x127cf8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x127cfc: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x127cfcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x127d00: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x127d00u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x127d04: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x127d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x127d08: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x127d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x127d0c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x127d0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x127d10: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x127d10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x127d14: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x127d14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x127d18: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x127d18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x127d1c: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x127d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x127d20: 0x26430240  addiu       $v1, $s2, 0x240
    ctx->pc = 0x127d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 576));
    // 0x127d24: 0xd8880000  lqc2        $vf8, 0x0($a0)
    ctx->pc = 0x127d24u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x127d28: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x127d28u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127d2c: 0xdba50010  lqc2        $vf5, 0x10($sp)
    ctx->pc = 0x127d2cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127d30: 0xdba60020  lqc2        $vf6, 0x20($sp)
    ctx->pc = 0x127d30u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127d34: 0xdba70030  lqc2        $vf7, 0x30($sp)
    ctx->pc = 0x127d34u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x127d38: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x127d38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127d3c: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x127d3cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127d40: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x127d40u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127d44: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x127d44u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x127d48: 0xf86c0000  sqc2        $vf12, 0x0($v1)
    ctx->pc = 0x127d48u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x127d4c: 0x8e420480  lw          $v0, 0x480($s2)
    ctx->pc = 0x127d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1152)));
    // 0x127d50: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x127d50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127d54: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x127d54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x127d58: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x127D58u;
    {
        const bool branch_taken_0x127d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x127d58) {
            ctx->pc = 0x127D5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127D58u;
            // 0x127d5c: 0x8603000a  lh          $v1, 0xA($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127D9Cu;
            goto label_127d9c;
        }
    }
    ctx->pc = 0x127D60u;
    // 0x127d60: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x127d60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127d64: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x127d64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127d68: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x127d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x127d6c: 0x0  nop
    ctx->pc = 0x127d6cu;
    // NOP
label_127d70:
    // 0x127d70: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x127d70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x127d74: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x127d74u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x127d78: 0x24a30240  addiu       $v1, $a1, 0x240
    ctx->pc = 0x127d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 576));
    // 0x127d7c: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x127d7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x127d80: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x127d80u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x127d84: 0x8e440480  lw          $a0, 0x480($s2)
    ctx->pc = 0x127d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1152)));
    // 0x127d88: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x127d88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x127d8c: 0x104202a  slt         $a0, $t0, $a0
    ctx->pc = 0x127d8cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x127d90: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x127D90u;
    {
        const bool branch_taken_0x127d90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x127D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127D90u;
        // 0x127d94: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127d90) {
            ctx->pc = 0x127D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_127d70;
        }
    }
    ctx->pc = 0x127D98u;
    // 0x127d98: 0x8603000a  lh          $v1, 0xA($s0)
    ctx->pc = 0x127d98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
label_127d9c:
    // 0x127d9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x127d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127da0: 0x54620111  bnel        $v1, $v0, . + 4 + (0x111 << 2)
    ctx->pc = 0x127DA0u;
    {
        const bool branch_taken_0x127da0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x127da0) {
            ctx->pc = 0x127DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127DA0u;
            // 0x127da4: 0x8e430480  lw          $v1, 0x480($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1281E8u;
            goto label_1281e8;
        }
    }
    ctx->pc = 0x127DA8u;
    // 0x127da8: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x127da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x127dac: 0x26430240  addiu       $v1, $s2, 0x240
    ctx->pc = 0x127dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 576));
    // 0x127db0: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x127db0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x127db4: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x127db4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x127db8: 0x4bc521ac  vsub.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x127db8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x127dbc: 0x4bc631ea  vmul.xyz    $vf7, $vf6, $vf6
    ctx->pc = 0x127dbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x127dc0: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x127dc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x127dc4: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x127dc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x127dc8: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x127dc8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x127dcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x127dccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x127dd0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x127dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x127dd4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x127dd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x127dd8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x127dd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x127ddc: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x127ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x127de0: 0x10000100  b           . + 4 + (0x100 << 2)
    ctx->pc = 0x127DE0u;
    {
        const bool branch_taken_0x127de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127DE0u;
        // 0x127de4: 0xe6210068  swc1        $f1, 0x68($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x127de0) {
            ctx->pc = 0x1281E4u;
            goto label_1281e4;
        }
    }
    ctx->pc = 0x127DE8u;
label_127de8:
    // 0x127de8: 0x8e2301a4  lw          $v1, 0x1A4($s1)
    ctx->pc = 0x127de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 420)));
    // 0x127dec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x127decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x127df0: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x127df0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x127df4: 0x1060009c  beqz        $v1, . + 4 + (0x9C << 2)
    ctx->pc = 0x127DF4u;
    {
        const bool branch_taken_0x127df4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x127DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127DF4u;
        // 0x127df8: 0xae2201a0  sw          $v0, 0x1A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127df4) {
            ctx->pc = 0x128068u;
            goto label_128068;
        }
    }
    ctx->pc = 0x127DFCu;
    // 0x127dfc: 0xae2001a0  sw          $zero, 0x1A0($s1)
    ctx->pc = 0x127dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 0));
    // 0x127e00: 0x8e420480  lw          $v0, 0x480($s2)
    ctx->pc = 0x127e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1152)));
    // 0x127e04: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x127e04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x127e08: 0x58c0000e  blezl       $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x127E08u;
    {
        const bool branch_taken_0x127e08 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x127e08) {
            ctx->pc = 0x127E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127E08u;
            // 0x127e0c: 0x8602000a  lh          $v0, 0xA($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127E44u;
            goto label_127e44;
        }
    }
    ctx->pc = 0x127E10u;
    // 0x127e10: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x127e10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x127e14: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x127e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_127e18:
    // 0x127e18: 0x2465fff0  addiu       $a1, $v1, -0x10
    ctx->pc = 0x127e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x127e1c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x127e1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x127e20: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x127e20u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x127e24: 0x24640230  addiu       $a0, $v1, 0x230
    ctx->pc = 0x127e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 560));
    // 0x127e28: 0x24630240  addiu       $v1, $v1, 0x240
    ctx->pc = 0x127e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 576));
    // 0x127e2c: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x127e2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x127e30: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x127e30u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x127e34: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x127e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x127e38: 0x1cc0fff7  bgtz        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x127E38u;
    {
        const bool branch_taken_0x127e38 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x127E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127E38u;
        // 0x127e3c: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127e38) {
            ctx->pc = 0x127E18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_127e18;
        }
    }
    ctx->pc = 0x127E40u;
    // 0x127e40: 0x8602000a  lh          $v0, 0xA($s0)
    ctx->pc = 0x127e40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
label_127e44:
    // 0x127e44: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x127e44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x127e48: 0x50400056  beql        $v0, $zero, . + 4 + (0x56 << 2)
    ctx->pc = 0x127E48u;
    {
        const bool branch_taken_0x127e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x127e48) {
            ctx->pc = 0x127E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127E48u;
            // 0x127e4c: 0x8603000a  lh          $v1, 0xA($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127FA4u;
            goto label_127fa4;
        }
    }
    ctx->pc = 0x127E50u;
    // 0x127e50: 0x26220120  addiu       $v0, $s1, 0x120
    ctx->pc = 0x127e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x127e54: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x127e54u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x127e58: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x127e58u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x127e5c: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x127e5cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x127e60: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x127e60u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x127e64: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x127e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x127e68: 0xfba50010  sqc2        $vf5, 0x10($sp)
    ctx->pc = 0x127e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x127e6c: 0xfba60020  sqc2        $vf6, 0x20($sp)
    ctx->pc = 0x127e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x127e70: 0xfba70030  sqc2        $vf7, 0x30($sp)
    ctx->pc = 0x127e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x127e74: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x127e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x127e78: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x127E78u;
    {
        const bool branch_taken_0x127e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x127e78) {
            ctx->pc = 0x127E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127E78u;
            // 0x127e7c: 0x27a20040  addiu       $v0, $sp, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127EF4u;
            goto label_127ef4;
        }
    }
    ctx->pc = 0x127E80u;
    // 0x127e80: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x127e80u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x127e84: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x127e84u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x127e88: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x127e88u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x127e8c: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x127e8cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x127e90: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x127e90u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127e94: 0xdba90010  lqc2        $vf9, 0x10($sp)
    ctx->pc = 0x127e94u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127e98: 0xdbaa0020  lqc2        $vf10, 0x20($sp)
    ctx->pc = 0x127e98u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127e9c: 0xdbab0030  lqc2        $vf11, 0x30($sp)
    ctx->pc = 0x127e9cu;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x127ea0: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x127ea0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127ea4: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x127ea4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127ea8: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x127ea8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127eac: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x127eacu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x127eb0: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x127eb0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127eb4: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x127eb4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127eb8: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x127eb8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127ebc: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x127ebcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x127ec0: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x127ec0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127ec4: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x127ec4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127ec8: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x127ec8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127ecc: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x127eccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x127ed0: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x127ed0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127ed4: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x127ed4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127ed8: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x127ed8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127edc: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x127edcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x127ee0: 0xfbac0000  sqc2        $vf12, 0x0($sp)
    ctx->pc = 0x127ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x127ee4: 0xfbad0010  sqc2        $vf13, 0x10($sp)
    ctx->pc = 0x127ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x127ee8: 0xfbae0020  sqc2        $vf14, 0x20($sp)
    ctx->pc = 0x127ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x127eec: 0xfbaf0030  sqc2        $vf15, 0x30($sp)
    ctx->pc = 0x127eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x127ef0: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x127ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_127ef4:
    // 0x127ef4: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x127ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x127ef8: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x127ef8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x127efc: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x127efcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127f00: 0xdba50010  lqc2        $vf5, 0x10($sp)
    ctx->pc = 0x127f00u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127f04: 0xdba60020  lqc2        $vf6, 0x20($sp)
    ctx->pc = 0x127f04u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127f08: 0xdba70030  lqc2        $vf7, 0x30($sp)
    ctx->pc = 0x127f08u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x127f0c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x127f0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127f10: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x127f10u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127f14: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x127f14u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127f18: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x127f18u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x127f1c: 0xfa4c0000  sqc2        $vf12, 0x0($s2)
    ctx->pc = 0x127f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x127f20: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x127f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x127f24: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x127f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x127f28: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x127f28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x127f2c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x127f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x127f30: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x127f30u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x127f34: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x127f34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x127f38: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x127f38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x127f3c: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x127f3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x127f40: 0x4a6503be  vrsqrt      $Q, $vf0w, $vf5x
    ctx->pc = 0x127f40u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x127f44: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x127f44u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x127f48: 0x4be43183  vaddw.xyzw  $vf6, $vf6, $vf4w
    ctx->pc = 0x127f48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x127f4c: 0x4a0003bf  vwaitq
    ctx->pc = 0x127f4cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x127f50: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x127f50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x127f54: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x127f54u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x127f58: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x127f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x127f5c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x127f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x127f60: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x127f60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x127f64: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x127f64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x127f68: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x127f68u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x127f6c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x127f6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x127f70: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x127f70u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x127f74: 0x26430240  addiu       $v1, $s2, 0x240
    ctx->pc = 0x127f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 576));
    // 0x127f78: 0xd8880000  lqc2        $vf8, 0x0($a0)
    ctx->pc = 0x127f78u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x127f7c: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x127f7cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127f80: 0xdba50010  lqc2        $vf5, 0x10($sp)
    ctx->pc = 0x127f80u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127f84: 0xdba60020  lqc2        $vf6, 0x20($sp)
    ctx->pc = 0x127f84u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127f88: 0xdba70030  lqc2        $vf7, 0x30($sp)
    ctx->pc = 0x127f88u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x127f8c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x127f8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127f90: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x127f90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127f94: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x127f94u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127f98: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x127f98u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x127f9c: 0xf86c0000  sqc2        $vf12, 0x0($v1)
    ctx->pc = 0x127f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x127fa0: 0x8603000a  lh          $v1, 0xA($s0)
    ctx->pc = 0x127fa0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
label_127fa4:
    // 0x127fa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x127fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127fa8: 0x54620031  bnel        $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x127FA8u;
    {
        const bool branch_taken_0x127fa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x127fa8) {
            ctx->pc = 0x127FACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127FA8u;
            // 0x127fac: 0x96040012  lhu         $a0, 0x12($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128070u;
            goto label_128070;
        }
    }
    ctx->pc = 0x127FB0u;
    // 0x127fb0: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x127fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x127fb4: 0x26450240  addiu       $a1, $s2, 0x240
    ctx->pc = 0x127fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 576));
    // 0x127fb8: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x127fb8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x127fbc: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x127fbcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x127fc0: 0x4bc521ac  vsub.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x127fc0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x127fc4: 0x4bc631ea  vmul.xyz    $vf7, $vf6, $vf6
    ctx->pc = 0x127fc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x127fc8: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x127fc8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x127fcc: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x127fccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x127fd0: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x127fd0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x127fd4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x127fd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x127fd8: 0x26430250  addiu       $v1, $s2, 0x250
    ctx->pc = 0x127fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 592));
    // 0x127fdc: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x127fdcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x127fe0: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x127fe0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x127fe4: 0x4bc521ac  vsub.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x127fe4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x127fe8: 0x4bc631ea  vmul.xyz    $vf7, $vf6, $vf6
    ctx->pc = 0x127fe8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x127fec: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x127fecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x127ff0: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x127ff0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x127ff4: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x127ff4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x127ff8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x127ff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x127ffc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x127ffcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x128000: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x128000u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x128004: 0x4bc521ac  vsub.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x128004u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x128008: 0x4bc631ea  vmul.xyz    $vf7, $vf6, $vf6
    ctx->pc = 0x128008u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x12800c: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x12800cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x128010: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x128010u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x128014: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x128014u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x128018: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x128018u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12801c: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x12801cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x128020: 0xc6010040  lwc1        $f1, 0x40($s0)
    ctx->pc = 0x128020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x128024: 0x46020080  add.s       $f2, $f0, $f2
    ctx->pc = 0x128024u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x128028: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x128028u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12802c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x12802Cu;
    {
        const bool branch_taken_0x12802c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12802c) {
            ctx->pc = 0x128048u;
            goto label_128048;
        }
    }
    ctx->pc = 0x128034u;
    // 0x128034: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x128034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x128038: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x128038u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12803c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x12803cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128040: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x128040u;
    {
        const bool branch_taken_0x128040 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x128040) {
            ctx->pc = 0x128044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128040u;
            // 0x128044: 0xe6020040  swc1        $f2, 0x40($s0) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x128068u;
            goto label_128068;
        }
    }
    ctx->pc = 0x128048u;
label_128048:
    // 0x128048: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x128048u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12804c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x12804cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x128050: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x128050u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x128054: 0xe6200068  swc1        $f0, 0x68($s1)
    ctx->pc = 0x128054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
    // 0x128058: 0xe6200070  swc1        $f0, 0x70($s1)
    ctx->pc = 0x128058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
    // 0x12805c: 0xe620006c  swc1        $f0, 0x6C($s1)
    ctx->pc = 0x12805cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
    // 0x128060: 0xa600000a  sh          $zero, 0xA($s0)
    ctx->pc = 0x128060u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x128064: 0xe6020040  swc1        $f2, 0x40($s0)
    ctx->pc = 0x128064u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
label_128068:
    // 0x128068: 0x96040012  lhu         $a0, 0x12($s0)
    ctx->pc = 0x128068u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x12806c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12806cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_128070:
    // 0x128070: 0x1482002b  bne         $a0, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x128070u;
    {
        const bool branch_taken_0x128070 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x128074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128070u;
        // 0x128074: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128070) {
            ctx->pc = 0x128120u;
            goto label_128120;
        }
    }
    ctx->pc = 0x128078u;
    // 0x128078: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x128078u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12807c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12807cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x128080: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x128080u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x128084: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x128084u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x128088: 0x2863000e  slti        $v1, $v1, 0xE
    ctx->pc = 0x128088u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x12808c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12808Cu;
    {
        const bool branch_taken_0x12808c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x128090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12808Cu;
        // 0x128090: 0xa6020004  sh          $v0, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12808c) {
            ctx->pc = 0x12809Cu;
            goto label_12809c;
        }
    }
    ctx->pc = 0x128094u;
    // 0x128094: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x128094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x128098: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x128098u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
label_12809c:
    // 0x12809c: 0x96050044  lhu         $a1, 0x44($s0)
    ctx->pc = 0x12809cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1280a0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1280a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1280a4: 0x86070008  lh          $a3, 0x8($s0)
    ctx->pc = 0x1280a4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1280a8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1280a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1280ac: 0x86060004  lh          $a2, 0x4($s0)
    ctx->pc = 0x1280acu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1280b0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1280b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1280b4: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x1280b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1280b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1280b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1280bc: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x1280bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1280c0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1280c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1280c4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x1280c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1280c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1280c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1280cc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1280ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1280d0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1280d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1280d4: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x1280d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x1280d8: 0x24217e60  addiu       $at, $at, 0x7E60
    ctx->pc = 0x1280d8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 32352));
    // 0x1280dc: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x1280dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x1280e0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1280e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1280e4: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1280e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x1280e8: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1280e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1280ec: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1280ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1280f0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1280f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1280f4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1280f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1280f8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1280f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1280fc: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1280fcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x128100: 0x26230080  addiu       $v1, $s1, 0x80
    ctx->pc = 0x128100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x128104: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x128104u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x128108: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x128108u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12810c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x12810cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x128110: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x128110u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x128114: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x128114u;
    {
        const bool branch_taken_0x128114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128114u;
        // 0x128118: 0xc6010020  lwc1        $f1, 0x20($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x128114) {
            ctx->pc = 0x1281C0u;
            goto label_1281c0;
        }
    }
    ctx->pc = 0x12811Cu;
    // 0x12811c: 0x0  nop
    ctx->pc = 0x12811cu;
    // NOP
label_128120:
    // 0x128120: 0x54820027  bnel        $a0, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x128120u;
    {
        const bool branch_taken_0x128120 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x128120) {
            ctx->pc = 0x128124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128120u;
            // 0x128124: 0xc6010020  lwc1        $f1, 0x20($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1281C0u;
            goto label_1281c0;
        }
    }
    ctx->pc = 0x128128u;
    // 0x128128: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x128128u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12812c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12812cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x128130: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x128130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x128134: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x128134u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x128138: 0x2863000e  slti        $v1, $v1, 0xE
    ctx->pc = 0x128138u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x12813c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x12813Cu;
    {
        const bool branch_taken_0x12813c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x128140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12813Cu;
        // 0x128140: 0xa6020004  sh          $v0, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12813c) {
            ctx->pc = 0x128148u;
            goto label_128148;
        }
    }
    ctx->pc = 0x128144u;
    // 0x128144: 0xa6040004  sh          $a0, 0x4($s0)
    ctx->pc = 0x128144u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 4));
label_128148:
    // 0x128148: 0x96040044  lhu         $a0, 0x44($s0)
    ctx->pc = 0x128148u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x12814c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x12814cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x128150: 0x86070008  lh          $a3, 0x8($s0)
    ctx->pc = 0x128150u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x128154: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x128154u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x128158: 0x86050004  lh          $a1, 0x4($s0)
    ctx->pc = 0x128158u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12815c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x12815cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x128160: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x128160u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x128164: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x128164u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x128168: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x128168u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x12816c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x12816cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x128170: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x128170u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x128174: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x128174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x128178: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x128178u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x12817c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x12817cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x128180: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x128180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x128184: 0x24217e60  addiu       $at, $at, 0x7E60
    ctx->pc = 0x128184u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 32352));
    // 0x128188: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x128188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x12818c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x12818cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x128190: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x128190u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x128194: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x128194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128198: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x128198u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12819c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x12819cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1281a0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1281a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1281a4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1281a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1281a8: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1281a8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1281ac: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x1281acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1281b0: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x1281b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1281b4: 0xe6210090  swc1        $f1, 0x90($s1)
    ctx->pc = 0x1281b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
    // 0x1281b8: 0xe6200094  swc1        $f0, 0x94($s1)
    ctx->pc = 0x1281b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
    // 0x1281bc: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x1281bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1281c0:
    // 0x1281c0: 0xc7808104  lwc1        $f0, -0x7EFC($gp)
    ctx->pc = 0x1281c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1281c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1281c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1281c8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1281c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1281cc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1281ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1281d0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1281d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1281d4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1281D4u;
    {
        const bool branch_taken_0x1281d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1281D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1281D4u;
        // 0x1281d8: 0xe6000020  swc1        $f0, 0x20($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1281d4) {
            ctx->pc = 0x1281E4u;
            goto label_1281e4;
        }
    }
    ctx->pc = 0x1281DCu;
    // 0x1281dc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1281dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1281e0: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1281e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_1281e4:
    // 0x1281e4: 0x8e430480  lw          $v1, 0x480($s2)
    ctx->pc = 0x1281e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1152)));
label_1281e8:
    // 0x1281e8: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x1281e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1281ec: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1281ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1281f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1281F0u;
    {
        const bool branch_taken_0x1281f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1281F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1281F0u;
        // 0x1281f4: 0x96040006  lhu         $a0, 0x6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1281f0) {
            ctx->pc = 0x128200u;
            goto label_128200;
        }
    }
    ctx->pc = 0x1281F8u;
    // 0x1281f8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1281f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1281fc: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x1281fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
label_128200:
    // 0x128200: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x128200u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x128204: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x128204u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x128208: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x128208u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12820c: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x12820cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x128210: 0x3e00008  jr          $ra
    ctx->pc = 0x128210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128210u;
        // 0x128214: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128218u;
}
