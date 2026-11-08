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

// Function: entry_0016cefc
// Address: 0x16cefc - 0x16d004
void entry_0016cefc_0x16cefc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016cefc_0x16cefc");
#endif

    ctx->pc = 0x16cefcu;

    // 0x16cefc: 0x8e220260  lw          $v0, 0x260($s1)
    ctx->pc = 0x16cefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x16cf00: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x16cf00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16cf04: 0x10460053  beq         $v0, $a2, . + 4 + (0x53 << 2)
    ctx->pc = 0x16CF04u;
    {
        const bool branch_taken_0x16cf04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x16CF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CF04u;
        // 0x16cf08: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cf04) {
            ctx->pc = 0x16D054u;
            return;
        }
    }
    ctx->pc = 0x16CF0Cu;
    // 0x16cf0c: 0x8e230154  lw          $v1, 0x154($s1)
    ctx->pc = 0x16cf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x16cf10: 0x246300e0  addiu       $v1, $v1, 0xE0
    ctx->pc = 0x16cf10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x16cf14: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x16cf14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x16cf18: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x16cf18u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x16cf1c: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x16cf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x16cf20: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x16cf20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x16cf24: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x16cf24u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
    // 0x16cf28: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x16cf28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16cf2c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16cf2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16cf30: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x16cf30u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x16cf34: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x16cf34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16cf38: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x16cf38u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16cf3c: 0x26240290  addiu       $a0, $s1, 0x290
    ctx->pc = 0x16cf3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 656));
    // 0x16cf40: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x16cf40u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16cf44: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x16cf44u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16cf48: 0x4bc5212a  vmul.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x16cf48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16cf4c: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x16cf4cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x16cf50: 0x26240280  addiu       $a0, $s1, 0x280
    ctx->pc = 0x16cf50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 640));
    // 0x16cf54: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x16cf54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16cf58: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x16cf58u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16cf5c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x16cf5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16cf60: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x16cf60u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x16cf64: 0x8e220260  lw          $v0, 0x260($s1)
    ctx->pc = 0x16cf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x16cf68: 0x1046003b  beq         $v0, $a2, . + 4 + (0x3B << 2)
    ctx->pc = 0x16CF68u;
    {
        const bool branch_taken_0x16cf68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x16CF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CF68u;
        // 0x16cf6c: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cf68) {
            ctx->pc = 0x16D058u;
            return;
        }
    }
    ctx->pc = 0x16CF70u;
    // 0x16cf70: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x16cf70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16cf74: 0x4bc00868  vadd.xyz    $vf1, $vf1, $vf0
    ctx->pc = 0x16cf74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16cf78: 0x4a0002ff  vnop
    ctx->pc = 0x16cf78u;
    // NOP operation, no action needed for VU0
    // 0x16cf7c: 0x4a0002ff  vnop
    ctx->pc = 0x16cf7cu;
    // NOP operation, no action needed for VU0
    // 0x16cf80: 0x4a0002ff  vnop
    ctx->pc = 0x16cf80u;
    // NOP operation, no action needed for VU0
    // 0x16cf84: 0x4a0002ff  vnop
    ctx->pc = 0x16cf84u;
    // NOP operation, no action needed for VU0
    // 0x16cf88: 0x4a0002ff  vnop
    ctx->pc = 0x16cf88u;
    // NOP operation, no action needed for VU0
    // 0x16cf8c: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x16cf8cu;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x16cf90: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x16cf90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x16cf94: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x16cf94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x16cf98: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x16CF98u;
    {
        const bool branch_taken_0x16cf98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CF98u;
        // 0x16cf9c: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cf98) {
            ctx->pc = 0x16D058u;
            return;
        }
    }
    ctx->pc = 0x16CFA0u;
    // 0x16cfa0: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x16cfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x16cfa4: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x16cfa4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16cfa8: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x16cfa8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16cfac: 0x4a852942  vaddz.y     $vf5, $vf5, $vf5z
    ctx->pc = 0x16cfacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16cfb0: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x16cfb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16cfb4: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x16cfb4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x16cfb8: 0x4a0003bf  vwaitq
    ctx->pc = 0x16cfb8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16cfbc: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x16cfbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16cfc0: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x16cfc0u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x16cfc4: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x16cfc4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16cfc8: 0x4be43183  vaddw.xyzw  $vf6, $vf6, $vf4w
    ctx->pc = 0x16cfc8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16cfcc: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x16cfccu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16cfd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16cfd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16cfd4: 0x4a0003bf  vwaitq
    ctx->pc = 0x16cfd4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16cfd8: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x16cfd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16cfdc: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x16cfdcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16cfe0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x16cfe0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16cfe4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x16CFE4u;
    {
        const bool branch_taken_0x16cfe4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16CFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CFE4u;
        // 0x16cfe8: 0x27b00080  addiu       $s0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cfe4) {
            ctx->pc = 0x16D004u;
            return;
        }
    }
    ctx->pc = 0x16CFECu;
    // 0x16cfec: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x16cfecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16cff0: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x16cff0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16cff4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x16cff4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x16cff8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x16cff8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16cffc: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x16cffcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16d000: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x16d000u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->pc = 0x16d004u;
}
