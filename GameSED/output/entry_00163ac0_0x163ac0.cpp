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

// Function: entry_00163ac0
// Address: 0x163ac0 - 0x163b34
void entry_00163ac0_0x163ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163ac0_0x163ac0");
#endif

    switch (ctx->pc) {
        case 0x163ac8u: goto label_163ac8;
        default: break;
    }

    ctx->pc = 0x163ac0u;

    // 0x163ac0: 0xc061422  jal         func_185088
    ctx->pc = 0x163AC0u;
    SET_GPR_U32(ctx, 31, 0x163AC8u);
    ctx->pc = 0x163AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163AC0u;
    // 0x163ac4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x163AC0u, 0x163AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163AC8u;
label_163ac8:
    // 0x163ac8: 0x26030110  addiu       $v1, $s0, 0x110
    ctx->pc = 0x163ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x163acc: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x163accu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163ad0: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x163ad0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x163ad4: 0x4bc521ac  vsub.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x163ad4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x163ad8: 0x4bc631ea  vmul.xyz    $vf7, $vf6, $vf6
    ctx->pc = 0x163ad8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x163adc: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x163adcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x163ae0: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x163ae0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x163ae4: 0x4a2703bd  .word       0x4A2703BD                   # vsqrt       $Q, $vf7x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x163ae4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x163ae8: 0x4a0003bf  vwaitq
    ctx->pc = 0x163ae8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x163aec: 0x4b0001e0  vaddq.x     $vf7, $vf0, $Q
    ctx->pc = 0x163aecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x163af0: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x163af0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x163af4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x163af4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x163af8: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x163af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x163afc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x163afcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163b00: 0x46000869  min.s       $f1, $f1, $f0
    ctx->pc = 0x163b00u;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[0]);
    // 0x163b04: 0x8e430254  lw          $v1, 0x254($s2)
    ctx->pc = 0x163b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 596)));
    // 0x163b08: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x163b08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x163b0c: 0x46140d02  mul.s       $f20, $f1, $f20
    ctx->pc = 0x163b0cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x163b10: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x163b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x163b14: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x163b14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x163b18: 0x26130020  addiu       $s3, $s0, 0x20
    ctx->pc = 0x163b18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x163b1c: 0x96620002  lhu         $v0, 0x2($s3)
    ctx->pc = 0x163b1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x163b20: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x163b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x163b24: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x163B24u;
    {
        const bool branch_taken_0x163b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163B24u;
        // 0x163b28: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163b24) {
            ctx->pc = 0x163B34u;
            return;
        }
    }
    ctx->pc = 0x163B2Cu;
    // 0x163b2c: 0xc061920  jal         func_186480
    ctx->pc = 0x163B2Cu;
    SET_GPR_U32(ctx, 31, 0x163B34u);
    ctx->pc = 0x163B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163B2Cu;
    // 0x163b30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x163B2Cu, 0x163B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163B34u;
}
