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

// Function: entry_00189100
// Address: 0x189100 - 0x189160
void entry_00189100_0x189100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189100_0x189100");
#endif

    ctx->pc = 0x189100u;

    // 0x189100: 0x266200d0  addiu       $v0, $s3, 0xD0
    ctx->pc = 0x189100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
    // 0x189104: 0x26630090  addiu       $v1, $s3, 0x90
    ctx->pc = 0x189104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    // 0x189108: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x189108u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18910c: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x18910cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x189110: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x189110u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x189114: 0xd8670000  lqc2        $vf7, 0x0($v1)
    ctx->pc = 0x189114u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x189118: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x189118u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18911c: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x18911cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x189120: 0xf8860020  sqc2        $vf6, 0x20($a0)
    ctx->pc = 0x189120u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x189124: 0xf8870030  sqc2        $vf7, 0x30($a0)
    ctx->pc = 0x189124u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x189128: 0x26640050  addiu       $a0, $s3, 0x50
    ctx->pc = 0x189128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x18912c: 0x266200a0  addiu       $v0, $s3, 0xA0
    ctx->pc = 0x18912cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
    // 0x189130: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x189130u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189134: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x189134u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x189138: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x189138u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x18913c: 0x4a24033c  vmove.w     $vf4, $vf0
    ctx->pc = 0x18913cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x189140: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x189140u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x189144: 0x4a26033c  vmove.w     $vf6, $vf0
    ctx->pc = 0x189144u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x189148: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x189148u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18914c: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x18914cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x189150: 0xf8860020  sqc2        $vf6, 0x20($a0)
    ctx->pc = 0x189150u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x189154: 0xf8800030  sqc2        $vf0, 0x30($a0)
    ctx->pc = 0x189154u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x189158: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x189158u;
    {
        const bool branch_taken_0x189158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18915Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189158u;
        // 0x18915c: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189158) {
            ctx->pc = 0x1891A0u;
            return;
        }
    }
    ctx->pc = 0x189160u;
}
