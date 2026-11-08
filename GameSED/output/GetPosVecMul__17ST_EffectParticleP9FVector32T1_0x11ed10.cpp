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

// Function: GetPosVecMul__17ST_EffectParticleP9FVector32T1
// Address: 0x11ed10 - 0x11edf0
void GetPosVecMul__17ST_EffectParticleP9FVector32T1_0x11ed10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPosVecMul__17ST_EffectParticleP9FVector32T1_0x11ed10");
#endif

    ctx->pc = 0x11ed10u;

    // 0x11ed10: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x11ed10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ed14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11ed14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ed18: 0x8ce20024  lw          $v0, 0x24($a3)
    ctx->pc = 0x11ed18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x11ed1c: 0x1443002a  bne         $v0, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x11ED1Cu;
    {
        const bool branch_taken_0x11ed1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x11ED20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ED1Cu;
        // 0x11ed20: 0x27bdffc0  addiu       $sp, $sp, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ed1c) {
            ctx->pc = 0x11EDC8u;
            goto label_11edc8;
        }
    }
    ctx->pc = 0x11ED24u;
    // 0x11ed24: 0x8ce20038  lw          $v0, 0x38($a3)
    ctx->pc = 0x11ed24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x11ed28: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x11ED28u;
    {
        const bool branch_taken_0x11ed28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ed28) {
            ctx->pc = 0x11ED2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11ED28u;
            // 0x11ed2c: 0xdce20070  ld          $v0, 0x70($a3) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11EDCCu;
            goto label_11edcc;
        }
    }
    ctx->pc = 0x11ED30u;
    // 0x11ed30: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x11ed30u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11ed34: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x11ed34u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x11ed38: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x11ed38u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x11ed3c: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x11ed3cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x11ed40: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x11ed40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x11ed44: 0xfba50010  sqc2        $vf5, 0x10($sp)
    ctx->pc = 0x11ed44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11ed48: 0xfba60020  sqc2        $vf6, 0x20($sp)
    ctx->pc = 0x11ed48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x11ed4c: 0xfba70030  sqc2        $vf7, 0x30($sp)
    ctx->pc = 0x11ed4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x11ed50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11ed50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11ed54: 0x8ce40038  lw          $a0, 0x38($a3)
    ctx->pc = 0x11ed54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x11ed58: 0x24e30070  addiu       $v1, $a3, 0x70
    ctx->pc = 0x11ed58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 112));
    // 0x11ed5c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x11ed5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x11ed60: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x11ed60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x11ed64: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x11ed64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x11ed68: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x11ed68u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11ed6c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x11ed6cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11ed70: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x11ed70u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x11ed74: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x11ed74u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x11ed78: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x11ed78u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x11ed7c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x11ed7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x11ed80: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x11ed80u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x11ed84: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x11ed84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x11ed88: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x11ed88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x11ed8c: 0xf8ac0000  sqc2        $vf12, 0x0($a1)
    ctx->pc = 0x11ed8cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x11ed90: 0x24e20080  addiu       $v0, $a3, 0x80
    ctx->pc = 0x11ed90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
    // 0x11ed94: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x11ed94u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11ed98: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x11ed98u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ed9c: 0xdba50010  lqc2        $vf5, 0x10($sp)
    ctx->pc = 0x11ed9cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11eda0: 0xdba60020  lqc2        $vf6, 0x20($sp)
    ctx->pc = 0x11eda0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11eda4: 0xdba70030  lqc2        $vf7, 0x30($sp)
    ctx->pc = 0x11eda4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11eda8: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x11eda8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x11edac: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x11edacu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x11edb0: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x11edb0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x11edb4: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x11edb4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x11edb8: 0xf8cc0000  sqc2        $vf12, 0x0($a2)
    ctx->pc = 0x11edb8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x11edbc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11EDBCu;
    {
        const bool branch_taken_0x11edbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11edbc) {
            ctx->pc = 0x11EDE8u;
            goto label_11ede8;
        }
    }
    ctx->pc = 0x11EDC4u;
    // 0x11edc4: 0x0  nop
    ctx->pc = 0x11edc4u;
    // NOP
label_11edc8:
    // 0x11edc8: 0xdce20070  ld          $v0, 0x70($a3)
    ctx->pc = 0x11edc8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 112)));
label_11edcc:
    // 0x11edcc: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x11edccu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x11edd0: 0xdce30078  ld          $v1, 0x78($a3)
    ctx->pc = 0x11edd0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 120)));
    // 0x11edd4: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x11edd4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x11edd8: 0xdce20080  ld          $v0, 0x80($a3)
    ctx->pc = 0x11edd8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 128)));
    // 0x11eddc: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x11eddcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x11ede0: 0xdce30088  ld          $v1, 0x88($a3)
    ctx->pc = 0x11ede0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 136)));
    // 0x11ede4: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x11ede4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
label_11ede8:
    // 0x11ede8: 0x3e00008  jr          $ra
    ctx->pc = 0x11EDE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EDE8u;
        // 0x11edec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EDE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11EDF0u;
}
