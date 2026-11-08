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

// Function: entry_00180140
// Address: 0x180140 - 0x180164
void entry_00180140_0x180140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180140_0x180140");
#endif

    ctx->pc = 0x180140u;

label_180140:
    // 0x180140: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x180140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x180144: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x180144u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x180148: 0x4bc5086f  vmini.xyz   $vf1, $vf1, $vf5
    ctx->pc = 0x180148u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18014c: 0x4bc510ab  vmax.xyz    $vf2, $vf2, $vf5
    ctx->pc = 0x18014cu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x180150: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x180150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x180154: 0x0  nop
    ctx->pc = 0x180154u;
    // NOP
    // 0x180158: 0x0  nop
    ctx->pc = 0x180158u;
    // NOP
    // 0x18015c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x18015Cu;
    {
        const bool branch_taken_0x18015c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x180160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18015Cu;
        // 0x180160: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18015c) {
            ctx->pc = 0x180140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_180140;
        }
    }
    ctx->pc = 0x180164u;
}
