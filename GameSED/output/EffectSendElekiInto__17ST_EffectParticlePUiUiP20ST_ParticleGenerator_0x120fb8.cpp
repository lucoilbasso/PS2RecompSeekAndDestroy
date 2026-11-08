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

// Function: EffectSendElekiInto__17ST_EffectParticlePUiUiP20ST_ParticleGenerator
// Address: 0x120fb8 - 0x12108c
void EffectSendElekiInto__17ST_EffectParticlePUiUiP20ST_ParticleGenerator_0x120fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectSendElekiInto__17ST_EffectParticlePUiUiP20ST_ParticleGenerator_0x120fb8");
#endif

    switch (ctx->pc) {
        case 0x121018u: goto label_121018;
        default: break;
    }

    ctx->pc = 0x120fb8u;

    // 0x120fb8: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x120fb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120fbc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x120fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x120fc0: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x120fc0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x120fc4: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x120fc4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x120fc8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x120fc8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x120fcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x120fccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x120fd0: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x120fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x120fd4: 0x24840790  addiu       $a0, $a0, 0x790
    ctx->pc = 0x120fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1936));
    // 0x120fd8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x120fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x410790u));
    // 0x120fdc: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x120FDCu;
    {
        const bool branch_taken_0x120fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120FDCu;
        // 0x120fe0: 0x2d030009  sltiu       $v1, $t0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x120fdc) {
            ctx->pc = 0x121084u;
            goto label_121084;
        }
    }
    ctx->pc = 0x120FE4u;
    // 0x120fe4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x120fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x120fe8: 0x43400a  movz        $t0, $v0, $v1
    ctx->pc = 0x120fe8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
    // 0x120fec: 0x11000025  beqz        $t0, . + 4 + (0x25 << 2)
    ctx->pc = 0x120FECu;
    {
        const bool branch_taken_0x120fec = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x120FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120FECu;
        // 0x120ff0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120fec) {
            ctx->pc = 0x121084u;
            goto label_121084;
        }
    }
    ctx->pc = 0x120FF4u;
    // 0x120ff4: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x120ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x120ff8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x120ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x120ffc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x120ffcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x121000: 0x244b7a00  addiu       $t3, $v0, 0x7A00
    ctx->pc = 0x121000u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 31232));
    // 0x121004: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x121004u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121008: 0x256d0010  addiu       $t5, $t3, 0x10
    ctx->pc = 0x121008u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x12100c: 0x256c0020  addiu       $t4, $t3, 0x20
    ctx->pc = 0x12100cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
    // 0x121010: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x121010u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121014: 0x0  nop
    ctx->pc = 0x121014u;
    // NOP
label_121018:
    // 0x121018: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x121018u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x12101c: 0xeb2021  addu        $a0, $a3, $t3
    ctx->pc = 0x12101cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x121020: 0x24c30070  addiu       $v1, $a2, 0x70
    ctx->pc = 0x121020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    // 0x121024: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x121024u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x121028: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x121028u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12102c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x12102cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x121030: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x121030u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x121034: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x121034u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x121038: 0x24c50080  addiu       $a1, $a2, 0x80
    ctx->pc = 0x121038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x12103c: 0xed1821  addu        $v1, $a3, $t5
    ctx->pc = 0x12103cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x121040: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x121040u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x121044: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x121044u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x121048: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x121048u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x12104c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x12104cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x121050: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x121050u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x121054: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x121054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x121058: 0xec1821  addu        $v1, $a3, $t4
    ctx->pc = 0x121058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x12105c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x12105cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x121060: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x121060u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x121064: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x121064u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x121068: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x121068u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12106c: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x12106cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x121070: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x121070u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x121074: 0x24e70030  addiu       $a3, $a3, 0x30
    ctx->pc = 0x121074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x121078: 0x148102b  sltu        $v0, $t2, $t0
    ctx->pc = 0x121078u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x12107c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x12107Cu;
    {
        const bool branch_taken_0x12107c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x121080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12107Cu;
        // 0x121080: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12107c) {
            ctx->pc = 0x121018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_121018;
        }
    }
    ctx->pc = 0x121084u;
label_121084:
    // 0x121084: 0x3e00008  jr          $ra
    ctx->pc = 0x121084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12108Cu;
}
