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

// Function: entry_00180e4c
// Address: 0x180e4c - 0x180eb8
void entry_00180e4c_0x180e4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180e4c_0x180e4c");
#endif

    ctx->pc = 0x180e4cu;

    // 0x180e4c: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x180e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x180e50: 0x97050004  lhu         $a1, 0x4($t8)
    ctx->pc = 0x180e50u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 4)));
    // 0x180e54: 0x97060006  lhu         $a2, 0x6($t8)
    ctx->pc = 0x180e54u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 6)));
    // 0x180e58: 0x7180b  movn        $v1, $zero, $a3
    ctx->pc = 0x180e58u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x180e5c: 0x97040008  lhu         $a0, 0x8($t8)
    ctx->pc = 0x180e5cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 8)));
    // 0x180e60: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x180e60u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x180e64: 0x9702000a  lhu         $v0, 0xA($t8)
    ctx->pc = 0x180e64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 10)));
    // 0x180e68: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x180e68u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x180e6c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x180e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x180e70: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x180e70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x180e74: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x180e74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x180e78: 0x1045021  addu        $t2, $t0, $a0
    ctx->pc = 0x180e78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x180e7c: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x180e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x180e80: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x180e80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x180e84: 0x14e0000c  bnez        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x180E84u;
    {
        const bool branch_taken_0x180e84 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x180E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180E84u;
        // 0x180e88: 0x2622021  addu        $a0, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180e84) {
            ctx->pc = 0x180EB8u;
            return;
        }
    }
    ctx->pc = 0x180E8Cu;
    // 0x180e8c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x180e8cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x180e90: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x180e90u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x180e94: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x180e94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x180e98: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x180e98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x180e9c: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x180e9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x180ea0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x180ea0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x180ea4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x180ea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180ea8: 0x46004034  c.lt.s      $f8, $f0
    ctx->pc = 0x180ea8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180eac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x180EACu;
    {
        const bool branch_taken_0x180eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x180eac) {
            ctx->pc = 0x180ED8u;
            return;
        }
    }
    ctx->pc = 0x180EB4u;
    // 0x180eb4: 0x0  nop
    ctx->pc = 0x180eb4u;
    // NOP
    ctx->pc = 0x180eb8u;
}
