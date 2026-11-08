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

// Function: entry_00184eb0
// Address: 0x184eb0 - 0x184ee0
void entry_00184eb0_0x184eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184eb0_0x184eb0");
#endif

    ctx->pc = 0x184eb0u;

    // 0x184eb0: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x184eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x184eb4: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x184eb4u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x184eb8: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x184eb8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x184ebc: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x184ebcu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x184ec0: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x184ec0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x184ec4: 0xf8440030  sqc2        $vf4, 0x30($v0)
    ctx->pc = 0x184ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x184ec8: 0xf8450020  sqc2        $vf5, 0x20($v0)
    ctx->pc = 0x184ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x184ecc: 0xf8460010  sqc2        $vf6, 0x10($v0)
    ctx->pc = 0x184eccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x184ed0: 0xf8470000  sqc2        $vf7, 0x0($v0)
    ctx->pc = 0x184ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x184ed4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x184ED4u;
    {
        const bool branch_taken_0x184ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184ED4u;
        // 0x184ed8: 0x96030002  lhu         $v1, 0x2($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184ed4) {
            ctx->pc = 0x184EECu;
            return;
        }
    }
    ctx->pc = 0x184EDCu;
    // 0x184edc: 0x0  nop
    ctx->pc = 0x184edcu;
    // NOP
    ctx->pc = 0x184ee0u;
}
