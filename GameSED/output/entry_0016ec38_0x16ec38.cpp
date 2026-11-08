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

// Function: entry_0016ec38
// Address: 0x16ec38 - 0x16ecdc
void entry_0016ec38_0x16ec38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ec38_0x16ec38");
#endif

    ctx->pc = 0x16ec38u;

    // 0x16ec38: 0x8e230260  lw          $v1, 0x260($s1)
    ctx->pc = 0x16ec38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x16ec3c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x16ec3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16ec40: 0x10620037  beq         $v1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x16EC40u;
    {
        const bool branch_taken_0x16ec40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16EC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EC40u;
        // 0x16ec44: 0x26230280  addiu       $v1, $s1, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ec40) {
            ctx->pc = 0x16ED20u;
            return;
        }
    }
    ctx->pc = 0x16EC48u;
    // 0x16ec48: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x16ec48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16ec4c: 0x4bc00868  vadd.xyz    $vf1, $vf1, $vf0
    ctx->pc = 0x16ec4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16ec50: 0x4a0002ff  vnop
    ctx->pc = 0x16ec50u;
    // NOP operation, no action needed for VU0
    // 0x16ec54: 0x4a0002ff  vnop
    ctx->pc = 0x16ec54u;
    // NOP operation, no action needed for VU0
    // 0x16ec58: 0x4a0002ff  vnop
    ctx->pc = 0x16ec58u;
    // NOP operation, no action needed for VU0
    // 0x16ec5c: 0x4a0002ff  vnop
    ctx->pc = 0x16ec5cu;
    // NOP operation, no action needed for VU0
    // 0x16ec60: 0x4a0002ff  vnop
    ctx->pc = 0x16ec60u;
    // NOP operation, no action needed for VU0
    // 0x16ec64: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x16ec64u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x16ec68: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x16ec68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x16ec6c: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x16ec6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x16ec70: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x16EC70u;
    {
        const bool branch_taken_0x16ec70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ec70) {
            ctx->pc = 0x16EC74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16EC70u;
            // 0x16ec74: 0x8e230260  lw          $v1, 0x260($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16ECDCu;
            return;
        }
    }
    ctx->pc = 0x16EC78u;
    // 0x16ec78: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x16ec78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16ec7c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x16ec7cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16ec80: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x16ec80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16ec84: 0x4a852942  vaddz.y     $vf5, $vf5, $vf5z
    ctx->pc = 0x16ec84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16ec88: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x16ec88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16ec8c: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x16ec8cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x16ec90: 0x4a0003bf  vwaitq
    ctx->pc = 0x16ec90u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16ec94: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x16ec94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16ec98: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x16ec98u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x16ec9c: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x16ec9cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16eca0: 0x4be43183  vaddw.xyzw  $vf6, $vf6, $vf4w
    ctx->pc = 0x16eca0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16eca4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x16eca4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16eca8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16eca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ecac: 0x4a0003bf  vwaitq
    ctx->pc = 0x16ecacu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16ecb0: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x16ecb0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16ecb4: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x16ecb4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16ecb8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x16ecb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16ecbc: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x16ECBCu;
    {
        const bool branch_taken_0x16ecbc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16ecbc) {
            ctx->pc = 0x16ECC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16ECBCu;
            // 0x16ecc0: 0x8e230260  lw          $v1, 0x260($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16ECDCu;
            return;
        }
    }
    ctx->pc = 0x16ECC4u;
    // 0x16ecc4: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x16ecc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16ecc8: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x16ecc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16eccc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x16ecccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x16ecd0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x16ecd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16ecd4: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x16ecd4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16ecd8: 0x8e230260  lw          $v1, 0x260($s1)
    ctx->pc = 0x16ecd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
    ctx->pc = 0x16ecdcu;
}
