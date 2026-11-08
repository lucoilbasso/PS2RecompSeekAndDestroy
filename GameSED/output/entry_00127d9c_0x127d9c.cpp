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

// Function: entry_00127d9c
// Address: 0x127d9c - 0x127de8
void entry_00127d9c_0x127d9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127d9c_0x127d9c");
#endif

    ctx->pc = 0x127d9cu;

    // 0x127d9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x127d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127da0: 0x54620111  bnel        $v1, $v0, . + 4 + (0x111 << 2)
    ctx->pc = 0x127DA0u;
    {
        const bool branch_taken_0x127da0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x127da0) {
            ctx->pc = 0x127DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127DA0u;
            // 0x127da4: 0x8e430480  lw          $v1, 0x480($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1281E8u;
            return;
        }
    }
    ctx->pc = 0x127DA8u;
    // 0x127da8: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x127da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x127dac: 0x26430240  addiu       $v1, $s2, 0x240
    ctx->pc = 0x127dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 576));
    // 0x127db0: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x127db0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x127db4: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x127db4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x127db8: 0x4bc521ac  vsub.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x127db8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x127dbc: 0x4bc631ea  vmul.xyz    $vf7, $vf6, $vf6
    ctx->pc = 0x127dbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x127dc0: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x127dc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x127dc4: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x127dc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x127dc8: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x127dc8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x127dcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x127dccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x127dd0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x127dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x127dd4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x127dd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x127dd8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x127dd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x127ddc: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x127ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x127de0: 0x10000100  b           . + 4 + (0x100 << 2)
    ctx->pc = 0x127DE0u;
    {
        const bool branch_taken_0x127de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127DE0u;
        // 0x127de4: 0xe6210068  swc1        $f1, 0x68($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x127de0) {
            ctx->pc = 0x1281E4u;
            return;
        }
    }
    ctx->pc = 0x127DE8u;
}
