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

// Function: StEffectSpecialDataReset__16ST_EffectSpecial
// Address: 0x12bc88 - 0x12bd60
void StEffectSpecialDataReset__16ST_EffectSpecial_0x12bc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StEffectSpecialDataReset__16ST_EffectSpecial_0x12bc88");
#endif

    switch (ctx->pc) {
        case 0x12bca8u: goto label_12bca8;
        default: break;
    }

    ctx->pc = 0x12bc88u;

    // 0x12bc88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12bc88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12bc8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12bc8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12bc90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12bc90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bc94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12bc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12bc98: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x12bc98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x12bc9c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12bc9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12bca0: 0xc048424  jal         func_121090
    ctx->pc = 0x12BCA0u;
    SET_GPR_U32(ctx, 31, 0x12BCA8u);
    ctx->pc = 0x12BCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BCA0u;
    // 0x12bca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121090u, 0x12BCA0u, 0x12BCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BCA8u;
label_12bca8:
    // 0x12bca8: 0xae3000b4  sw          $s0, 0xB4($s1)
    ctx->pc = 0x12bca8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 16));
    // 0x12bcac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12bcacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12bcb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12bcb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12bcb4: 0x26030120  addiu       $v1, $s0, 0x120
    ctx->pc = 0x12bcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x12bcb8: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x12bcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x12bcbc: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x12bcbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x12bcc0: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x12bcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x12bcc4: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x12bcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x12bcc8: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x12bcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
    // 0x12bccc: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x12bcccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x12bcd0: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x12bcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x12bcd4: 0xae0000ec  sw          $zero, 0xEC($s0)
    ctx->pc = 0x12bcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
    // 0x12bcd8: 0xae0000f4  sw          $zero, 0xF4($s0)
    ctx->pc = 0x12bcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
    // 0x12bcdc: 0xae0000f8  sw          $zero, 0xF8($s0)
    ctx->pc = 0x12bcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
    // 0x12bce0: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x12bce0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
    // 0x12bce4: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x12bce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x12bce8: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x12bce8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
    // 0x12bcec: 0xae000118  sw          $zero, 0x118($s0)
    ctx->pc = 0x12bcecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
    // 0x12bcf0: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x12bcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
    // 0x12bcf4: 0xae00010c  sw          $zero, 0x10C($s0)
    ctx->pc = 0x12bcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
    // 0x12bcf8: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x12bcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
    // 0x12bcfc: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x12bcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
    // 0x12bd00: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x12bd00u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x12bd04: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x12bd04u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12bd08: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x12bd08u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x12bd0c: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x12bd0cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x12bd10: 0xf8640030  sqc2        $vf4, 0x30($v1)
    ctx->pc = 0x12bd10u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12bd14: 0xf8650020  sqc2        $vf5, 0x20($v1)
    ctx->pc = 0x12bd14u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12bd18: 0xf8660010  sqc2        $vf6, 0x10($v1)
    ctx->pc = 0x12bd18u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x12bd1c: 0xf8670000  sqc2        $vf7, 0x0($v1)
    ctx->pc = 0x12bd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x12bd20: 0x26020160  addiu       $v0, $s0, 0x160
    ctx->pc = 0x12bd20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    // 0x12bd24: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x12bd24u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x12bd28: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x12bd28u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12bd2c: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x12bd2cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x12bd30: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x12bd30u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x12bd34: 0xf8440030  sqc2        $vf4, 0x30($v0)
    ctx->pc = 0x12bd34u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12bd38: 0xf8450020  sqc2        $vf5, 0x20($v0)
    ctx->pc = 0x12bd38u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12bd3c: 0xf8460010  sqc2        $vf6, 0x10($v0)
    ctx->pc = 0x12bd3cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x12bd40: 0xf8470000  sqc2        $vf7, 0x0($v0)
    ctx->pc = 0x12bd40u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x12bd44: 0xae0001a0  sw          $zero, 0x1A0($s0)
    ctx->pc = 0x12bd44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 0));
    // 0x12bd48: 0xae0001a4  sw          $zero, 0x1A4($s0)
    ctx->pc = 0x12bd48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 0));
    // 0x12bd4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12bd4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12bd50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12bd50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bd54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12bd54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12bd58: 0x3e00008  jr          $ra
    ctx->pc = 0x12BD58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD58u;
        // 0x12bd5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BD58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BD60u;
}
