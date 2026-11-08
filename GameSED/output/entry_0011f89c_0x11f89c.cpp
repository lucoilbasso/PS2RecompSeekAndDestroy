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

// Function: entry_0011f89c
// Address: 0x11f89c - 0x11f8ec
void entry_0011f89c_0x11f89c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f89c_0x11f89c");
#endif

    ctx->pc = 0x11f89cu;

    // 0x11f89c: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x11f89cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f8a0: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x11f8a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11f8a4: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x11f8a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11f8a8: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x11f8a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11f8ac: 0x4a6503be  vrsqrt      $Q, $vf0w, $vf5x
    ctx->pc = 0x11f8acu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x11f8b0: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x11f8b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x11f8b4: 0x4be43183  vaddw.xyzw  $vf6, $vf6, $vf4w
    ctx->pc = 0x11f8b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x11f8b8: 0x4a0003bf  vwaitq
    ctx->pc = 0x11f8b8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x11f8bc: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x11f8bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x11f8c0: 0xfba60000  sqc2        $vf6, 0x0($sp)
    ctx->pc = 0x11f8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x11f8c4: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x11f8c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f8c8: 0xfe020080  sd          $v0, 0x80($s0)
    ctx->pc = 0x11f8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 128), GPR_U64(ctx, 2));
    // 0x11f8cc: 0xdfa30008  ld          $v1, 0x8($sp)
    ctx->pc = 0x11f8ccu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11f8d0: 0xfe030088  sd          $v1, 0x88($s0)
    ctx->pc = 0x11f8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 136), GPR_U64(ctx, 3));
    // 0x11f8d4: 0x8e220120  lw          $v0, 0x120($s1)
    ctx->pc = 0x11f8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x11f8d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11f8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11f8dc: 0x2c430013  sltiu       $v1, $v0, 0x13
    ctx->pc = 0x11f8dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
    // 0x11f8e0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x11F8E0u;
    {
        const bool branch_taken_0x11f8e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F8E0u;
        // 0x11f8e4: 0xae220120  sw          $v0, 0x120($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f8e0) {
            ctx->pc = 0x11F8ECu;
            return;
        }
    }
    ctx->pc = 0x11F8E8u;
    // 0x11f8e8: 0xae200120  sw          $zero, 0x120($s1)
    ctx->pc = 0x11f8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 0));
    ctx->pc = 0x11f8ecu;
}
