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

// Function: entry_00181d24
// Address: 0x181d24 - 0x181d80
void entry_00181d24_0x181d24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181d24_0x181d24");
#endif

    ctx->pc = 0x181d24u;

    // 0x181d24: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x181d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x181d28: 0x95640004  lhu         $a0, 0x4($t3)
    ctx->pc = 0x181d28u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x181d2c: 0x95650006  lhu         $a1, 0x6($t3)
    ctx->pc = 0x181d2cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x181d30: 0xf100b  movn        $v0, $zero, $t7
    ctx->pc = 0x181d30u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x181d34: 0x9563000a  lhu         $v1, 0xA($t3)
    ctx->pc = 0x181d34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 10)));
    // 0x181d38: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x181d38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x181d3c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x181d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x181d40: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x181d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x181d44: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x181d44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x181d48: 0x2445021  addu        $t2, $s2, $a0
    ctx->pc = 0x181d48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x181d4c: 0x2454021  addu        $t0, $s2, $a1
    ctx->pc = 0x181d4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x181d50: 0x15e0000b  bnez        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x181D50u;
    {
        const bool branch_taken_0x181d50 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x181D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181D50u;
        // 0x181d54: 0x2633021  addu        $a2, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181d50) {
            ctx->pc = 0x181D80u;
            return;
        }
    }
    ctx->pc = 0x181D58u;
    // 0x181d58: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x181d58u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x181d5c: 0xd9a50000  lqc2        $vf5, 0x0($t5)
    ctx->pc = 0x181d5cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x181d60: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x181d60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x181d64: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x181d64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x181d68: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x181d68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x181d6c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x181d6cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x181d70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x181d70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181d74: 0x46004834  c.lt.s      $f9, $f0
    ctx->pc = 0x181d74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181d78: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x181D78u;
    {
        const bool branch_taken_0x181d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x181d78) {
            ctx->pc = 0x181DA4u;
            return;
        }
    }
    ctx->pc = 0x181D80u;
}
