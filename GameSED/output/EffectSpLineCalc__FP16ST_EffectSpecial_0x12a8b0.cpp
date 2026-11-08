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

// Function: EffectSpLineCalc__FP16ST_EffectSpecial
// Address: 0x12a8b0 - 0x12ad88
void EffectSpLineCalc__FP16ST_EffectSpecial_0x12a8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectSpLineCalc__FP16ST_EffectSpecial_0x12a8b0");
#endif

    switch (ctx->pc) {
        case 0x12a8e0u: goto label_12a8e0;
        case 0x12aa60u: goto label_12aa60;
        case 0x12ab10u: goto label_12ab10;
        default: break;
    }

    ctx->pc = 0x12a8b0u;

    // 0x12a8b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x12a8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x12a8b4: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x12a8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x12a8b8: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x12a8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x12a8bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12a8bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a8c0: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x12a8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x12a8c4: 0x265001b0  addiu       $s0, $s2, 0x1B0
    ctx->pc = 0x12a8c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 432));
    // 0x12a8c8: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x12a8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x12a8cc: 0x8e110010  lw          $s1, 0x10($s0)
    ctx->pc = 0x12a8ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x12a8d0: 0x12200127  beqz        $s1, . + 4 + (0x127 << 2)
    ctx->pc = 0x12A8D0u;
    {
        const bool branch_taken_0x12a8d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A8D0u;
        // 0x12a8d4: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a8d0) {
            ctx->pc = 0x12AD70u;
            goto label_12ad70;
        }
    }
    ctx->pc = 0x12A8D8u;
    // 0x12a8d8: 0xc047a1a  jal         func_11E868
    ctx->pc = 0x12A8D8u;
    SET_GPR_U32(ctx, 31, 0x12A8E0u);
    ctx->pc = 0x12A8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A8D8u;
    // 0x12a8dc: 0x264501bc  addiu       $a1, $s2, 0x1BC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 444));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E868u, 0x12A8D8u, 0x12A8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A8E0u;
label_12a8e0:
    // 0x12a8e0: 0x96020046  lhu         $v0, 0x46($s0)
    ctx->pc = 0x12a8e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x12a8e4: 0x5440006c  bnel        $v0, $zero, . + 4 + (0x6C << 2)
    ctx->pc = 0x12A8E4u;
    {
        const bool branch_taken_0x12a8e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a8e4) {
            ctx->pc = 0x12A8E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A8E4u;
            // 0x12a8e8: 0x86030008  lh          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12AA98u;
            goto label_12aa98;
        }
    }
    ctx->pc = 0x12A8ECu;
    // 0x12a8ec: 0x26420120  addiu       $v0, $s2, 0x120
    ctx->pc = 0x12a8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
    // 0x12a8f0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x12a8f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12a8f4: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x12a8f4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x12a8f8: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x12a8f8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x12a8fc: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x12a8fcu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x12a900: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x12a900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12a904: 0xfba50010  sqc2        $vf5, 0x10($sp)
    ctx->pc = 0x12a904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12a908: 0xfba60020  sqc2        $vf6, 0x20($sp)
    ctx->pc = 0x12a908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x12a90c: 0xfba70030  sqc2        $vf7, 0x30($sp)
    ctx->pc = 0x12a90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x12a910: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x12a910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x12a914: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x12A914u;
    {
        const bool branch_taken_0x12a914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a914) {
            ctx->pc = 0x12A918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A914u;
            // 0x12a918: 0x27a20040  addiu       $v0, $sp, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A990u;
            goto label_12a990;
        }
    }
    ctx->pc = 0x12A91Cu;
    // 0x12a91c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x12a91cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12a920: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x12a920u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x12a924: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x12a924u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x12a928: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x12a928u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x12a92c: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x12a92cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a930: 0xdba90010  lqc2        $vf9, 0x10($sp)
    ctx->pc = 0x12a930u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12a934: 0xdbaa0020  lqc2        $vf10, 0x20($sp)
    ctx->pc = 0x12a934u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12a938: 0xdbab0030  lqc2        $vf11, 0x30($sp)
    ctx->pc = 0x12a938u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12a93c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x12a93cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12a940: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x12a940u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12a944: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x12a944u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12a948: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x12a948u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x12a94c: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x12a94cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12a950: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x12a950u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12a954: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x12a954u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12a958: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x12a958u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x12a95c: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x12a95cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12a960: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x12a960u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12a964: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x12a964u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12a968: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x12a968u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x12a96c: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x12a96cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12a970: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x12a970u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12a974: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x12a974u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12a978: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x12a978u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x12a97c: 0xfbac0000  sqc2        $vf12, 0x0($sp)
    ctx->pc = 0x12a97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x12a980: 0xfbad0010  sqc2        $vf13, 0x10($sp)
    ctx->pc = 0x12a980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x12a984: 0xfbae0020  sqc2        $vf14, 0x20($sp)
    ctx->pc = 0x12a984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x12a988: 0xfbaf0030  sqc2        $vf15, 0x30($sp)
    ctx->pc = 0x12a988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x12a98c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x12a98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_12a990:
    // 0x12a990: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x12a990u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12a994: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x12a994u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12a998: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x12a998u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a99c: 0xdba50010  lqc2        $vf5, 0x10($sp)
    ctx->pc = 0x12a99cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12a9a0: 0xdba60020  lqc2        $vf6, 0x20($sp)
    ctx->pc = 0x12a9a0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12a9a4: 0xdba70030  lqc2        $vf7, 0x30($sp)
    ctx->pc = 0x12a9a4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12a9a8: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x12a9a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12a9ac: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x12a9acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12a9b0: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x12a9b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12a9b4: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x12a9b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x12a9b8: 0xfa2c0000  sqc2        $vf12, 0x0($s1)
    ctx->pc = 0x12a9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x12a9bc: 0x26440090  addiu       $a0, $s2, 0x90
    ctx->pc = 0x12a9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x12a9c0: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x12a9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x12a9c4: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x12a9c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12a9c8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x12a9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x12a9cc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x12a9ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12a9d0: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x12a9d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12a9d4: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x12a9d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12a9d8: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x12a9d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12a9dc: 0x4a6503be  vrsqrt      $Q, $vf0w, $vf5x
    ctx->pc = 0x12a9dcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x12a9e0: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x12a9e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x12a9e4: 0x4be43183  vaddw.xyzw  $vf6, $vf6, $vf4w
    ctx->pc = 0x12a9e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x12a9e8: 0x4a0003bf  vwaitq
    ctx->pc = 0x12a9e8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x12a9ec: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x12a9ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x12a9f0: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x12a9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x12a9f4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x12a9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x12a9f8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x12a9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12a9fc: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x12a9fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12aa00: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x12aa00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12aa04: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x12aa04u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x12aa08: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x12aa08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12aa0c: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x12aa0cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12aa10: 0x26230240  addiu       $v1, $s1, 0x240
    ctx->pc = 0x12aa10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 576));
    // 0x12aa14: 0xd8880000  lqc2        $vf8, 0x0($a0)
    ctx->pc = 0x12aa14u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12aa18: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x12aa18u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12aa1c: 0xdba50010  lqc2        $vf5, 0x10($sp)
    ctx->pc = 0x12aa1cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12aa20: 0xdba60020  lqc2        $vf6, 0x20($sp)
    ctx->pc = 0x12aa20u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12aa24: 0xdba70030  lqc2        $vf7, 0x30($sp)
    ctx->pc = 0x12aa24u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12aa28: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x12aa28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12aa2c: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x12aa2cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12aa30: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x12aa30u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12aa34: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x12aa34u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x12aa38: 0xf86c0000  sqc2        $vf12, 0x0($v1)
    ctx->pc = 0x12aa38u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x12aa3c: 0x8e220480  lw          $v0, 0x480($s1)
    ctx->pc = 0x12aa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1152)));
    // 0x12aa40: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x12aa40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12aa44: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x12aa44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x12aa48: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x12AA48u;
    {
        const bool branch_taken_0x12aa48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA48u;
        // 0x12aa4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aa48) {
            ctx->pc = 0x12AA8Cu;
            goto label_12aa8c;
        }
    }
    ctx->pc = 0x12AA50u;
    // 0x12aa50: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x12aa50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12aa54: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12aa54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12aa58: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x12aa58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x12aa5c: 0x0  nop
    ctx->pc = 0x12aa5cu;
    // NOP
label_12aa60:
    // 0x12aa60: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x12aa60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12aa64: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x12aa64u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x12aa68: 0x24a30240  addiu       $v1, $a1, 0x240
    ctx->pc = 0x12aa68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 576));
    // 0x12aa6c: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x12aa6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12aa70: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x12aa70u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x12aa74: 0x8e240480  lw          $a0, 0x480($s1)
    ctx->pc = 0x12aa74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1152)));
    // 0x12aa78: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x12aa78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x12aa7c: 0x104202a  slt         $a0, $t0, $a0
    ctx->pc = 0x12aa7cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x12aa80: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x12AA80u;
    {
        const bool branch_taken_0x12aa80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA80u;
        // 0x12aa84: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aa80) {
            ctx->pc = 0x12AA60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12aa60;
        }
    }
    ctx->pc = 0x12AA88u;
    // 0x12aa88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12aa88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12aa8c:
    // 0x12aa8c: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x12AA8Cu;
    {
        const bool branch_taken_0x12aa8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA8Cu;
        // 0x12aa90: 0xa6020046  sh          $v0, 0x46($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 70), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aa8c) {
            ctx->pc = 0x12AD70u;
            goto label_12ad70;
        }
    }
    ctx->pc = 0x12AA94u;
    // 0x12aa94: 0x0  nop
    ctx->pc = 0x12aa94u;
    // NOP
label_12aa98:
    // 0x12aa98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12aa98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12aa9c: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12AA9Cu;
    {
        const bool branch_taken_0x12aa9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x12aa9c) {
            ctx->pc = 0x12AAA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12AA9Cu;
            // 0x12aaa0: 0x8e4201a0  lw          $v0, 0x1A0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12AAB8u;
            goto label_12aab8;
        }
    }
    ctx->pc = 0x12AAA4u;
    // 0x12aaa4: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x12aaa4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x12aaa8: 0x8e220480  lw          $v0, 0x480($s1)
    ctx->pc = 0x12aaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1152)));
    // 0x12aaac: 0x506200b1  beql        $v1, $v0, . + 4 + (0xB1 << 2)
    ctx->pc = 0x12AAACu;
    {
        const bool branch_taken_0x12aaac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12aaac) {
            ctx->pc = 0x12AAB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12AAACu;
            // 0x12aab0: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12AD74u;
            goto label_12ad74;
        }
    }
    ctx->pc = 0x12AAB4u;
    // 0x12aab4: 0x8e4201a0  lw          $v0, 0x1A0($s2)
    ctx->pc = 0x12aab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 416)));
label_12aab8:
    // 0x12aab8: 0x8e4301a4  lw          $v1, 0x1A4($s2)
    ctx->pc = 0x12aab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 420)));
    // 0x12aabc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12aabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12aac0: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x12aac0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12aac4: 0x1060004f  beqz        $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x12AAC4u;
    {
        const bool branch_taken_0x12aac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AAC4u;
        // 0x12aac8: 0xae4201a0  sw          $v0, 0x1A0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aac4) {
            ctx->pc = 0x12AC04u;
            goto label_12ac04;
        }
    }
    ctx->pc = 0x12AACCu;
    // 0x12aacc: 0xae4001a0  sw          $zero, 0x1A0($s2)
    ctx->pc = 0x12aaccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 416), GPR_U32(ctx, 0));
    // 0x12aad0: 0x8e220480  lw          $v0, 0x480($s1)
    ctx->pc = 0x12aad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1152)));
    // 0x12aad4: 0x244affff  addiu       $t2, $v0, -0x1
    ctx->pc = 0x12aad4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12aad8: 0x5940004b  blezl       $t2, . + 4 + (0x4B << 2)
    ctx->pc = 0x12AAD8u;
    {
        const bool branch_taken_0x12aad8 = (GPR_S32(ctx, 10) <= 0);
        if (branch_taken_0x12aad8) {
            ctx->pc = 0x12AADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12AAD8u;
            // 0x12aadc: 0x8602000a  lh          $v0, 0xA($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12AC08u;
            goto label_12ac08;
        }
    }
    ctx->pc = 0x12AAE0u;
    // 0x12aae0: 0xa1100  sll         $v0, $t2, 4
    ctx->pc = 0x12aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x12aae4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x12aae4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x12aae8: 0x513821  addu        $a3, $v0, $s1
    ctx->pc = 0x12aae8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x12aaec: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x12aaecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x12aaf0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12aaf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12aaf4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x12aaf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x12aaf8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12aaf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12aafc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x12aafcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12ab00: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x12ab00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x12ab04: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x12ab04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12ab08: 0x24e80230  addiu       $t0, $a3, 0x230
    ctx->pc = 0x12ab08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 560));
    // 0x12ab0c: 0x0  nop
    ctx->pc = 0x12ab0cu;
    // NOP
label_12ab10:
    // 0x12ab10: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x12ab10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ab14: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x12ab14u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12ab18: 0x45010031  bc1t        . + 4 + (0x31 << 2)
    ctx->pc = 0x12AB18u;
    {
        const bool branch_taken_0x12ab18 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12AB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AB18u;
        // 0x12ab1c: 0x24e3fff0  addiu       $v1, $a3, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ab18) {
            ctx->pc = 0x12ABE0u;
            goto label_12abe0;
        }
    }
    ctx->pc = 0x12AB20u;
    // 0x12ab20: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x12ab20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12ab24: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x12ab24u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x12ab28: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x12ab28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12ab2c: 0xd9030000  lqc2        $vf3, 0x0($t0)
    ctx->pc = 0x12ab2cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x12ab30: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x12ab30u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12ab34: 0xf8a20000  sqc2        $vf2, 0x0($a1)
    ctx->pc = 0x12ab34u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12ab38: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x12ab38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12ab3c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x12ab3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12ab40: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x12ab40u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x12ab44: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x12ab44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12ab48: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x12ab48u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12ab4c: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x12ab4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x12ab50: 0x7d220000  sq          $v0, 0x0($t1)
    ctx->pc = 0x12ab50u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    // 0x12ab54: 0xd9220000  lqc2        $vf2, 0x0($t1)
    ctx->pc = 0x12ab54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x12ab58: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x12ab58u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12ab5c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x12ab5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12ab60: 0xf9220000  sqc2        $vf2, 0x0($t1)
    ctx->pc = 0x12ab60u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12ab64: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x12ab64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ab68: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x12ab68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12ab6c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x12ab6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12ab70: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x12ab70u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x12ab74: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x12ab74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12ab78: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x12ab78u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12ab7c: 0x79220000  lq          $v0, 0x0($t1)
    ctx->pc = 0x12ab7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x12ab80: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x12ab80u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x12ab84: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x12ab84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12ab88: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x12ab88u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12ab8c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x12ab8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12ab90: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x12ab90u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12ab94: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x12ab94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12ab98: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x12ab98u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x12ab9c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x12ab9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12aba0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x12aba0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12aba4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x12aba4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x12aba8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x12aba8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12abac: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x12abacu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12abb0: 0x79220000  lq          $v0, 0x0($t1)
    ctx->pc = 0x12abb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x12abb4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x12abb4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x12abb8: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x12abb8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12abbc: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x12abbcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12abc0: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x12abc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12abc4: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x12abc4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12abc8: 0x24e30240  addiu       $v1, $a3, 0x240
    ctx->pc = 0x12abc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 576));
    // 0x12abcc: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x12abccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12abd0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x12abd0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x12abd4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12ABD4u;
    {
        const bool branch_taken_0x12abd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ABD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ABD4u;
        // 0x12abd8: 0x254affff  addiu       $t2, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12abd4) {
            ctx->pc = 0x12ABF8u;
            goto label_12abf8;
        }
    }
    ctx->pc = 0x12ABDCu;
    // 0x12abdc: 0x0  nop
    ctx->pc = 0x12abdcu;
    // NOP
label_12abe0:
    // 0x12abe0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x12abe0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12abe4: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x12abe4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x12abe8: 0x24e40240  addiu       $a0, $a3, 0x240
    ctx->pc = 0x12abe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 576));
    // 0x12abec: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x12abecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x12abf0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x12abf0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x12abf4: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x12abf4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_12abf8:
    // 0x12abf8: 0x24e7fff0  addiu       $a3, $a3, -0x10
    ctx->pc = 0x12abf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
    // 0x12abfc: 0x1d40ffc4  bgtz        $t2, . + 4 + (-0x3C << 2)
    ctx->pc = 0x12ABFCu;
    {
        const bool branch_taken_0x12abfc = (GPR_S32(ctx, 10) > 0);
        ctx->pc = 0x12AC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ABFCu;
        // 0x12ac00: 0x2508fff0  addiu       $t0, $t0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12abfc) {
            ctx->pc = 0x12AB10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ab10;
        }
    }
    ctx->pc = 0x12AC04u;
label_12ac04:
    // 0x12ac04: 0x8602000a  lh          $v0, 0xA($s0)
    ctx->pc = 0x12ac04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
label_12ac08:
    // 0x12ac08: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x12ac08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x12ac0c: 0x5040004f  beql        $v0, $zero, . + 4 + (0x4F << 2)
    ctx->pc = 0x12AC0Cu;
    {
        const bool branch_taken_0x12ac0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ac0c) {
            ctx->pc = 0x12AC10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12AC0Cu;
            // 0x12ac10: 0xc6010024  lwc1        $f1, 0x24($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12AD4Cu;
            goto label_12ad4c;
        }
    }
    ctx->pc = 0x12AC14u;
    // 0x12ac14: 0x26420120  addiu       $v0, $s2, 0x120
    ctx->pc = 0x12ac14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
    // 0x12ac18: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x12ac18u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12ac1c: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x12ac1cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x12ac20: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x12ac20u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x12ac24: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x12ac24u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x12ac28: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x12ac28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12ac2c: 0xfba50010  sqc2        $vf5, 0x10($sp)
    ctx->pc = 0x12ac2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12ac30: 0xfba60020  sqc2        $vf6, 0x20($sp)
    ctx->pc = 0x12ac30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x12ac34: 0xfba70030  sqc2        $vf7, 0x30($sp)
    ctx->pc = 0x12ac34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x12ac38: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x12ac38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x12ac3c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x12AC3Cu;
    {
        const bool branch_taken_0x12ac3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AC3Cu;
        // 0x12ac40: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ac3c) {
            ctx->pc = 0x12ACB8u;
            goto label_12acb8;
        }
    }
    ctx->pc = 0x12AC44u;
    // 0x12ac44: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x12ac44u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12ac48: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x12ac48u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x12ac4c: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x12ac4cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x12ac50: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x12ac50u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x12ac54: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x12ac54u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ac58: 0xdba90010  lqc2        $vf9, 0x10($sp)
    ctx->pc = 0x12ac58u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ac5c: 0xdbaa0020  lqc2        $vf10, 0x20($sp)
    ctx->pc = 0x12ac5cu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12ac60: 0xdbab0030  lqc2        $vf11, 0x30($sp)
    ctx->pc = 0x12ac60u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12ac64: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x12ac64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12ac68: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x12ac68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12ac6c: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x12ac6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12ac70: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x12ac70u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x12ac74: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x12ac74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12ac78: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x12ac78u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12ac7c: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x12ac7cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12ac80: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x12ac80u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x12ac84: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x12ac84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12ac88: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x12ac88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12ac8c: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x12ac8cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12ac90: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x12ac90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x12ac94: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x12ac94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12ac98: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x12ac98u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12ac9c: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x12ac9cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12aca0: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x12aca0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x12aca4: 0xfbac0000  sqc2        $vf12, 0x0($sp)
    ctx->pc = 0x12aca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x12aca8: 0xfbad0010  sqc2        $vf13, 0x10($sp)
    ctx->pc = 0x12aca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x12acac: 0xfbae0020  sqc2        $vf14, 0x20($sp)
    ctx->pc = 0x12acacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x12acb0: 0xfbaf0030  sqc2        $vf15, 0x30($sp)
    ctx->pc = 0x12acb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x12acb4: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x12acb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_12acb8:
    // 0x12acb8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x12acb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12acbc: 0x24638f20  addiu       $v1, $v1, -0x70E0
    ctx->pc = 0x12acbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938400));
    // 0x12acc0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x12acc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12acc4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x12acc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12acc8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x12acc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12accc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x12acccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x12acd0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x12acd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12acd4: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x12acd4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12acd8: 0xd8880000  lqc2        $vf8, 0x0($a0)
    ctx->pc = 0x12acd8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12acdc: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x12acdcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ace0: 0xdba50010  lqc2        $vf5, 0x10($sp)
    ctx->pc = 0x12ace0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ace4: 0xdba60020  lqc2        $vf6, 0x20($sp)
    ctx->pc = 0x12ace4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12ace8: 0xdba70030  lqc2        $vf7, 0x30($sp)
    ctx->pc = 0x12ace8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12acec: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x12acecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12acf0: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x12acf0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12acf4: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x12acf4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12acf8: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x12acf8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x12acfc: 0xfa2c0000  sqc2        $vf12, 0x0($s1)
    ctx->pc = 0x12acfcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x12ad00: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x12ad00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x12ad04: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x12ad04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ad08: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x12ad08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12ad0c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x12ad0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12ad10: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x12ad10u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x12ad14: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x12ad14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12ad18: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x12ad18u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12ad1c: 0x26250240  addiu       $a1, $s1, 0x240
    ctx->pc = 0x12ad1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 576));
    // 0x12ad20: 0xd8880000  lqc2        $vf8, 0x0($a0)
    ctx->pc = 0x12ad20u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12ad24: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x12ad24u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ad28: 0xdba50010  lqc2        $vf5, 0x10($sp)
    ctx->pc = 0x12ad28u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ad2c: 0xdba60020  lqc2        $vf6, 0x20($sp)
    ctx->pc = 0x12ad2cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12ad30: 0xdba70030  lqc2        $vf7, 0x30($sp)
    ctx->pc = 0x12ad30u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12ad34: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x12ad34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12ad38: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x12ad38u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12ad3c: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x12ad3cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12ad40: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x12ad40u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x12ad44: 0xf8ac0000  sqc2        $vf12, 0x0($a1)
    ctx->pc = 0x12ad44u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x12ad48: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x12ad48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12ad4c:
    // 0x12ad4c: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x12ad4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ad50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12ad50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12ad54: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12ad54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12ad58: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x12ad58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x12ad5c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x12ad5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12ad60: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x12AD60u;
    {
        const bool branch_taken_0x12ad60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12AD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD60u;
        // 0x12ad64: 0xe6000024  swc1        $f0, 0x24($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ad60) {
            ctx->pc = 0x12AD70u;
            goto label_12ad70;
        }
    }
    ctx->pc = 0x12AD68u;
    // 0x12ad68: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x12ad68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x12ad6c: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x12ad6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_12ad70:
    // 0x12ad70: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x12ad70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_12ad74:
    // 0x12ad74: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x12ad74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x12ad78: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x12ad78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12ad7c: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x12ad7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12ad80: 0x3e00008  jr          $ra
    ctx->pc = 0x12AD80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12AD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD80u;
        // 0x12ad84: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12AD80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12AD88u;
}
