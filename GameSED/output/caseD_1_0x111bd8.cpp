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

// Function: caseD_1
// Address: 0x111bd8 - 0x111bf0
void caseD_1_0x111bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x111bd8");
#endif

    ctx->pc = 0x111bd8u;

    // 0x111bd8: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x111bd8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x111bdc: 0x4be2117f  vftoi15.xyzw $vf2, $vf2
    ctx->pc = 0x111bdcu;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x111be0: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x111be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x111be4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x111BE4u;
    {
        const bool branch_taken_0x111be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111BE4u;
        // 0x111be8: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111be4) {
            ctx->pc = 0x111C30u;
            return;
        }
    }
    ctx->pc = 0x111BECu;
    // 0x111bec: 0x0  nop
    ctx->pc = 0x111becu;
    // NOP
    ctx->pc = 0x111bf0u;
}
