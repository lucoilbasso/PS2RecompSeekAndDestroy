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

// Function: EffectApplyMat__17ST_EffectParticleUiUiP9FVector32P9DVAngle32
// Address: 0x11edf0 - 0x11ef8c
void EffectApplyMat__17ST_EffectParticleUiUiP9FVector32P9DVAngle32_0x11edf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectApplyMat__17ST_EffectParticleUiUiP9FVector32P9DVAngle32_0x11edf0");
#endif

    switch (ctx->pc) {
        case 0x11ee88u: goto label_11ee88;
        default: break;
    }

    ctx->pc = 0x11edf0u;

    // 0x11edf0: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11edf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x11edf4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11edf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11edf8: 0x24470790  addiu       $a3, $v0, 0x790
    ctx->pc = 0x11edf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1936));
    // 0x11edfc: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x11edfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x11ee00: 0x10a30060  beq         $a1, $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x11EE00u;
    {
        const bool branch_taken_0x11ee00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x11EE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EE00u;
        // 0x11ee04: 0x8ce60000  lw          $a2, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ee00) {
            ctx->pc = 0x11EF84u;
            goto label_11ef84;
        }
    }
    ctx->pc = 0x11EE08u;
    // 0x11ee08: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11EE08u;
    {
        const bool branch_taken_0x11ee08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EE08u;
        // 0x11ee0c: 0x27a30040  addiu       $v1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ee08) {
            ctx->pc = 0x11EE1Cu;
            goto label_11ee1c;
        }
    }
    ctx->pc = 0x11EE10u;
    // 0x11ee10: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11ee10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11ee14: 0x14a2005b  bne         $a1, $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x11EE14u;
    {
        const bool branch_taken_0x11ee14 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x11ee14) {
            ctx->pc = 0x11EF84u;
            goto label_11ef84;
        }
    }
    ctx->pc = 0x11EE1Cu;
label_11ee1c:
    // 0x11ee1c: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x11ee1cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x11ee20: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x11ee20u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11ee24: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x11ee24u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x11ee28: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x11ee28u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x11ee2c: 0xf8640030  sqc2        $vf4, 0x30($v1)
    ctx->pc = 0x11ee2cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x11ee30: 0xf8650020  sqc2        $vf5, 0x20($v1)
    ctx->pc = 0x11ee30u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11ee34: 0xf8660010  sqc2        $vf6, 0x10($v1)
    ctx->pc = 0x11ee34u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x11ee38: 0xf8670000  sqc2        $vf7, 0x0($v1)
    ctx->pc = 0x11ee38u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x11ee3c: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x11ee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x11ee40: 0x14400050  bnez        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x11EE40u;
    {
        const bool branch_taken_0x11ee40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11ee40) {
            ctx->pc = 0x11EF84u;
            goto label_11ef84;
        }
    }
    ctx->pc = 0x11EE48u;
    // 0x11ee48: 0x8cc20038  lw          $v0, 0x38($a2)
    ctx->pc = 0x11ee48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x11ee4c: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x11EE4Cu;
    {
        const bool branch_taken_0x11ee4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ee4c) {
            ctx->pc = 0x11EF84u;
            goto label_11ef84;
        }
    }
    ctx->pc = 0x11EE54u;
    // 0x11ee54: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x11ee54u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11ee58: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x11ee58u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x11ee5c: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x11ee5cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x11ee60: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x11ee60u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x11ee64: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x11ee64u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x11ee68: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x11ee68u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11ee6c: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x11ee6cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x11ee70: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x11ee70u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x11ee74: 0x10800043  beqz        $a0, . + 4 + (0x43 << 2)
    ctx->pc = 0x11EE74u;
    {
        const bool branch_taken_0x11ee74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EE74u;
        // 0x11ee78: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ee74) {
            ctx->pc = 0x11EF84u;
            goto label_11ef84;
        }
    }
    ctx->pc = 0x11EE7Cu;
    // 0x11ee7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11ee7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11ee80: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x11ee80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ee84: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11ee84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_11ee88:
    // 0x11ee88: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x11ee88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x11ee8c: 0x50c0003a  beql        $a2, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x11EE8Cu;
    {
        const bool branch_taken_0x11ee8c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ee8c) {
            ctx->pc = 0x11EE90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11EE8Cu;
            // 0x11ee90: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11EF78u;
            goto label_11ef78;
        }
    }
    ctx->pc = 0x11EE94u;
    // 0x11ee94: 0xd9240000  lqc2        $vf4, 0x0($t1)
    ctx->pc = 0x11ee94u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x11ee98: 0xd9250010  lqc2        $vf5, 0x10($t1)
    ctx->pc = 0x11ee98u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x11ee9c: 0xd9260020  lqc2        $vf6, 0x20($t1)
    ctx->pc = 0x11ee9cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x11eea0: 0xd9270030  lqc2        $vf7, 0x30($t1)
    ctx->pc = 0x11eea0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x11eea4: 0xf8a40000  sqc2        $vf4, 0x0($a1)
    ctx->pc = 0x11eea4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x11eea8: 0xf8a50010  sqc2        $vf5, 0x10($a1)
    ctx->pc = 0x11eea8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11eeac: 0xf8a60020  sqc2        $vf6, 0x20($a1)
    ctx->pc = 0x11eeacu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x11eeb0: 0xf8a70030  sqc2        $vf7, 0x30($a1)
    ctx->pc = 0x11eeb0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x11eeb4: 0x24c20070  addiu       $v0, $a2, 0x70
    ctx->pc = 0x11eeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    // 0x11eeb8: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x11eeb8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11eebc: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x11eebcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11eec0: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x11eec0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x11eec4: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x11eec4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x11eec8: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x11eec8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x11eecc: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x11eeccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x11eed0: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x11eed0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x11eed4: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x11eed4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x11eed8: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x11eed8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x11eedc: 0xf84c0000  sqc2        $vf12, 0x0($v0)
    ctx->pc = 0x11eedcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x11eee0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x11eee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x11eee4: 0x24c30080  addiu       $v1, $a2, 0x80
    ctx->pc = 0x11eee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x11eee8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x11eee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x11eeec: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x11eeecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x11eef0: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x11eef0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11eef4: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x11eef4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11eef8: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x11eef8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x11eefc: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x11eefcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x11ef00: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x11ef00u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x11ef04: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x11ef04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x11ef08: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x11ef08u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x11ef0c: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x11ef0cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x11ef10: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x11ef10u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x11ef14: 0xf86c0000  sqc2        $vf12, 0x0($v1)
    ctx->pc = 0x11ef14u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x11ef18: 0x24c20090  addiu       $v0, $a2, 0x90
    ctx->pc = 0x11ef18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
    // 0x11ef1c: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x11ef1cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11ef20: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x11ef20u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11ef24: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x11ef24u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x11ef28: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x11ef28u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x11ef2c: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x11ef2cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x11ef30: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x11ef30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x11ef34: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x11ef34u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x11ef38: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x11ef38u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x11ef3c: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x11ef3cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x11ef40: 0xf84c0000  sqc2        $vf12, 0x0($v0)
    ctx->pc = 0x11ef40u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x11ef44: 0x24c300a0  addiu       $v1, $a2, 0xA0
    ctx->pc = 0x11ef44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x11ef48: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x11ef48u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11ef4c: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x11ef4cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11ef50: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x11ef50u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x11ef54: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x11ef54u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x11ef58: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x11ef58u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x11ef5c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x11ef5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x11ef60: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x11ef60u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x11ef64: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x11ef64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x11ef68: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x11ef68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x11ef6c: 0xf86c0000  sqc2        $vf12, 0x0($v1)
    ctx->pc = 0x11ef6cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x11ef70: 0xacc00038  sw          $zero, 0x38($a2)
    ctx->pc = 0x11ef70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 0));
    // 0x11ef74: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x11ef74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_11ef78:
    // 0x11ef78: 0x104102b  sltu        $v0, $t0, $a0
    ctx->pc = 0x11ef78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x11ef7c: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x11EF7Cu;
    {
        const bool branch_taken_0x11ef7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EF7Cu;
        // 0x11ef80: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ef7c) {
            ctx->pc = 0x11EE88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11ee88;
        }
    }
    ctx->pc = 0x11EF84u;
label_11ef84:
    // 0x11ef84: 0x3e00008  jr          $ra
    ctx->pc = 0x11EF84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EF84u;
        // 0x11ef88: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EF84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11EF8Cu;
}
