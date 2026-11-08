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

// Function: entry_001de028
// Address: 0x1de028 - 0x1de088
void entry_001de028_0x1de028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de028_0x1de028");
#endif

    ctx->pc = 0x1de028u;

    // 0x1de028: 0x26020220  addiu       $v0, $s0, 0x220
    ctx->pc = 0x1de028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x1de02c: 0x260401e0  addiu       $a0, $s0, 0x1E0
    ctx->pc = 0x1de02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
    // 0x1de030: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1de030u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1de034: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x1de034u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1de038: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x1de038u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1de03c: 0xd8870000  lqc2        $vf7, 0x0($a0)
    ctx->pc = 0x1de03cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1de040: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1de040u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1de044: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x1de044u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1de048: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x1de048u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1de04c: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x1de04cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1de050: 0x260201f0  addiu       $v0, $s0, 0x1F0
    ctx->pc = 0x1de050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
    // 0x1de054: 0x260301a0  addiu       $v1, $s0, 0x1A0
    ctx->pc = 0x1de054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x1de058: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1de058u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1de05c: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x1de05cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1de060: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x1de060u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1de064: 0x4a24033c  vmove.w     $vf4, $vf0
    ctx->pc = 0x1de064u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1de068: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x1de068u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1de06c: 0x4a26033c  vmove.w     $vf6, $vf0
    ctx->pc = 0x1de06cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1de070: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1de070u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1de074: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x1de074u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1de078: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x1de078u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1de07c: 0xf8600030  sqc2        $vf0, 0x30($v1)
    ctx->pc = 0x1de07cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1de080: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1DE080u;
    {
        const bool branch_taken_0x1de080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE080u;
        // 0x1de084: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de080) {
            ctx->pc = 0x1DE0C8u;
            return;
        }
    }
    ctx->pc = 0x1DE088u;
}
