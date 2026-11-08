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

// Function: entry_00152710
// Address: 0x152710 - 0x152770
void entry_00152710_0x152710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152710_0x152710");
#endif

    ctx->pc = 0x152710u;

    // 0x152710: 0x26020220  addiu       $v0, $s0, 0x220
    ctx->pc = 0x152710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x152714: 0x260401e0  addiu       $a0, $s0, 0x1E0
    ctx->pc = 0x152714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
    // 0x152718: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x152718u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15271c: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x15271cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x152720: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x152720u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x152724: 0xd8870000  lqc2        $vf7, 0x0($a0)
    ctx->pc = 0x152724u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x152728: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x152728u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15272c: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x15272cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x152730: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x152730u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x152734: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x152734u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x152738: 0x260201f0  addiu       $v0, $s0, 0x1F0
    ctx->pc = 0x152738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
    // 0x15273c: 0x260301a0  addiu       $v1, $s0, 0x1A0
    ctx->pc = 0x15273cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x152740: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x152740u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152744: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x152744u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x152748: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x152748u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x15274c: 0x4a24033c  vmove.w     $vf4, $vf0
    ctx->pc = 0x15274cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x152750: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x152750u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x152754: 0x4a26033c  vmove.w     $vf6, $vf0
    ctx->pc = 0x152754u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x152758: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x152758u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15275c: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x15275cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x152760: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x152760u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x152764: 0xf8600030  sqc2        $vf0, 0x30($v1)
    ctx->pc = 0x152764u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x152768: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x152768u;
    {
        const bool branch_taken_0x152768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15276Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152768u;
        // 0x15276c: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152768) {
            ctx->pc = 0x1527B0u;
            return;
        }
    }
    ctx->pc = 0x152770u;
}
