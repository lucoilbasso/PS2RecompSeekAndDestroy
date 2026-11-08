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

// Function: entry_001a2eb8
// Address: 0x1a2eb8 - 0x1a2edc
void entry_001a2eb8_0x1a2eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2eb8_0x1a2eb8");
#endif

    ctx->pc = 0x1a2eb8u;

    // 0x1a2eb8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1a2eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1a2ebc: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x1a2ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1a2ec0: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1a2ec0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a2ec4: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x1a2ec4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a2ec8: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1a2ec8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1a2ecc: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1a2eccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1a2ed0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1a2ed0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a2ed4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x1a2ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x1a2ed8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1a2ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->pc = 0x1a2edcu;
}
