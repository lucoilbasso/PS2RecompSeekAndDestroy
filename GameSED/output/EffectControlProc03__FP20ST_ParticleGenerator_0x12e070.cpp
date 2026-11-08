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

// Function: EffectControlProc03__FP20ST_ParticleGenerator
// Address: 0x12e070 - 0x12e10c
void EffectControlProc03__FP20ST_ParticleGenerator_0x12e070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectControlProc03__FP20ST_ParticleGenerator_0x12e070");
#endif

    switch (ctx->pc) {
        case 0x12e0b8u: goto label_12e0b8;
        default: break;
    }

    ctx->pc = 0x12e070u;

    // 0x12e070: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x12e070u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e074: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x12e074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x12e078: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12e078u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12e07c: 0x8ce20114  lw          $v0, 0x114($a3)
    ctx->pc = 0x12e07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 276)));
    // 0x12e080: 0x8ce60138  lw          $a2, 0x138($a3)
    ctx->pc = 0x12e080u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 312)));
    // 0x12e084: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x12e084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e088: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x12e088u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x12e08c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x12e08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x12e090: 0x0  nop
    ctx->pc = 0x12e090u;
    // NOP
    // 0x12e094: 0x0  nop
    ctx->pc = 0x12e094u;
    // NOP
    // 0x12e098: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x12e098u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x12e09c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12e09cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12e0a0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12e0a0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12e0a4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12e0a4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12e0a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12e0a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12e0ac: 0x50c00013  beql        $a2, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x12E0ACu;
    {
        const bool branch_taken_0x12e0ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e0ac) {
            ctx->pc = 0x12E0B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E0ACu;
            // 0x12e0b0: 0x8ce30114  lw          $v1, 0x114($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E0FCu;
            goto label_12e0fc;
        }
    }
    ctx->pc = 0x12E0B4u;
    // 0x12e0b4: 0x8cc2004c  lw          $v0, 0x4C($a2)
    ctx->pc = 0x12e0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
label_12e0b8:
    // 0x12e0b8: 0x5447000d  bnel        $v0, $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x12E0B8u;
    {
        const bool branch_taken_0x12e0b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x12e0b8) {
            ctx->pc = 0x12E0BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E0B8u;
            // 0x12e0bc: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E0F0u;
            goto label_12e0f0;
        }
    }
    ctx->pc = 0x12E0C0u;
    // 0x12e0c0: 0x24c40090  addiu       $a0, $a2, 0x90
    ctx->pc = 0x12e0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
    // 0x12e0c4: 0x24c30080  addiu       $v1, $a2, 0x80
    ctx->pc = 0x12e0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x12e0c8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x12e0c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12e0cc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x12e0ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12e0d0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x12e0d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x12e0d4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x12e0d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12e0d8: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x12e0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12e0dc: 0x8ce50114  lw          $a1, 0x114($a3)
    ctx->pc = 0x12e0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 276)));
    // 0x12e0e0: 0xe4c00068  swc1        $f0, 0x68($a2)
    ctx->pc = 0x12e0e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 104), bits); }
    // 0x12e0e4: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x12e0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x12e0e8: 0xacc2001c  sw          $v0, 0x1C($a2)
    ctx->pc = 0x12e0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 2));
    // 0x12e0ec: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x12e0ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_12e0f0:
    // 0x12e0f0: 0x54c0fff1  bnel        $a2, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x12E0F0u;
    {
        const bool branch_taken_0x12e0f0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e0f0) {
            ctx->pc = 0x12E0F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E0F0u;
            // 0x12e0f4: 0x8cc2004c  lw          $v0, 0x4C($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E0B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e0b8;
        }
    }
    ctx->pc = 0x12E0F8u;
    // 0x12e0f8: 0x8ce30114  lw          $v1, 0x114($a3)
    ctx->pc = 0x12e0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 276)));
label_12e0fc:
    // 0x12e0fc: 0xa4e00118  sh          $zero, 0x118($a3)
    ctx->pc = 0x12e0fcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 280), (uint16_t)GPR_U32(ctx, 0));
    // 0x12e100: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x12e100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x12e104: 0x3e00008  jr          $ra
    ctx->pc = 0x12E104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E104u;
        // 0x12e108: 0xace20134  sw          $v0, 0x134($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 308), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E10Cu;
}
