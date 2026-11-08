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

// Function: entry_0016c2d8
// Address: 0x16c2d8 - 0x16c300
void entry_0016c2d8_0x16c2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c2d8_0x16c2d8");
#endif

    ctx->pc = 0x16c2d8u;

    // 0x16c2d8: 0x26220250  addiu       $v0, $s1, 0x250
    ctx->pc = 0x16c2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 592));
    // 0x16c2dc: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x16c2dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x16c2e0: 0x4bc2113c  vitof0.xyz  $vf2, $vf2
    ctx->pc = 0x16c2e0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16c2e4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x16c2e4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x16c2e8: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x16c2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x16c2ec: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x16c2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x16c2f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c2f4: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x16c2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x16c2f8: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x16C2F8u;
    {
        const bool branch_taken_0x16c2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C2F8u;
        // 0x16c2fc: 0x34a50102  ori         $a1, $a1, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c2f8) {
            ctx->pc = 0x16C434u;
            return;
        }
    }
    ctx->pc = 0x16C300u;
}
