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

// Function: entry_001524c0
// Address: 0x1524c0 - 0x152520
void entry_001524c0_0x1524c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001524c0_0x1524c0");
#endif

    ctx->pc = 0x1524c0u;

    // 0x1524c0: 0x26020220  addiu       $v0, $s0, 0x220
    ctx->pc = 0x1524c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x1524c4: 0x260401e0  addiu       $a0, $s0, 0x1E0
    ctx->pc = 0x1524c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
    // 0x1524c8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1524c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1524cc: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x1524ccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1524d0: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x1524d0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1524d4: 0xd8870000  lqc2        $vf7, 0x0($a0)
    ctx->pc = 0x1524d4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1524d8: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1524d8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1524dc: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x1524dcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1524e0: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x1524e0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1524e4: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x1524e4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1524e8: 0x260201f0  addiu       $v0, $s0, 0x1F0
    ctx->pc = 0x1524e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
    // 0x1524ec: 0x260301a0  addiu       $v1, $s0, 0x1A0
    ctx->pc = 0x1524ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x1524f0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1524f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1524f4: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x1524f4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1524f8: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x1524f8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1524fc: 0x4a24033c  vmove.w     $vf4, $vf0
    ctx->pc = 0x1524fcu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x152500: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x152500u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x152504: 0x4a26033c  vmove.w     $vf6, $vf0
    ctx->pc = 0x152504u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x152508: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x152508u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15250c: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x15250cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x152510: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x152510u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x152514: 0xf8600030  sqc2        $vf0, 0x30($v1)
    ctx->pc = 0x152514u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x152518: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x152518u;
    {
        const bool branch_taken_0x152518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15251Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152518u;
        // 0x15251c: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152518) {
            ctx->pc = 0x152560u;
            return;
        }
    }
    ctx->pc = 0x152520u;
}
