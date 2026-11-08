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

// Function: entry_001087dc
// Address: 0x1087dc - 0x1087f8
void entry_001087dc_0x1087dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001087dc_0x1087dc");
#endif

    ctx->pc = 0x1087dcu;

    // 0x1087dc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1087dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1087e0: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x1087e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1087e4: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x1087e4u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1087e8: 0x48262800  qmfc2.ni    $a2, $vf5
    ctx->pc = 0x1087e8u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1087ec: 0x63000  sll         $a2, $a2, 0
    ctx->pc = 0x1087ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 0));
    // 0x1087f0: 0x10000243  b           . + 4 + (0x243 << 2)
    ctx->pc = 0x1087F0u;
    {
        const bool branch_taken_0x1087f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1087F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1087F0u;
        // 0x1087f4: 0xae060000  sw          $a2, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1087f0) {
            ctx->pc = 0x109100u;
            return;
        }
    }
    ctx->pc = 0x1087F8u;
}
