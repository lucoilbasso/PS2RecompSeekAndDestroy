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

// Function: entry_00187de0
// Address: 0x187de0 - 0x187e40
void entry_00187de0_0x187de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187de0_0x187de0");
#endif

    ctx->pc = 0x187de0u;

    // 0x187de0: 0x26020220  addiu       $v0, $s0, 0x220
    ctx->pc = 0x187de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x187de4: 0x260401e0  addiu       $a0, $s0, 0x1E0
    ctx->pc = 0x187de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
    // 0x187de8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x187de8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187dec: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x187decu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x187df0: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x187df0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x187df4: 0xd8870000  lqc2        $vf7, 0x0($a0)
    ctx->pc = 0x187df4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x187df8: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x187df8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x187dfc: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x187dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x187e00: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x187e00u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x187e04: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x187e04u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x187e08: 0x260201f0  addiu       $v0, $s0, 0x1F0
    ctx->pc = 0x187e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
    // 0x187e0c: 0x260301a0  addiu       $v1, $s0, 0x1A0
    ctx->pc = 0x187e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x187e10: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x187e10u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187e14: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x187e14u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x187e18: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x187e18u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x187e1c: 0x4a24033c  vmove.w     $vf4, $vf0
    ctx->pc = 0x187e1cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x187e20: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x187e20u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x187e24: 0x4a26033c  vmove.w     $vf6, $vf0
    ctx->pc = 0x187e24u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x187e28: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x187e28u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x187e2c: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x187e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x187e30: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x187e30u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x187e34: 0xf8600030  sqc2        $vf0, 0x30($v1)
    ctx->pc = 0x187e34u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x187e38: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x187E38u;
    {
        const bool branch_taken_0x187e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187E38u;
        // 0x187e3c: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187e38) {
            ctx->pc = 0x187E80u;
            return;
        }
    }
    ctx->pc = 0x187E40u;
}
