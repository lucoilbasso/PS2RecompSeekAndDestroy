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

// Function: entry_0016ec20
// Address: 0x16ec20 - 0x16ec38
void entry_0016ec20_0x16ec20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ec20_0x16ec20");
#endif

    ctx->pc = 0x16ec20u;

    // 0x16ec20: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x16ec20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16ec24: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x16ec24u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16ec28: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x16ec28u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16ec2c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x16ec2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16ec30: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x16ec30u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x16ec34: 0xae200284  sw          $zero, 0x284($s1)
    ctx->pc = 0x16ec34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 644), GPR_U32(ctx, 0));
    ctx->pc = 0x16ec38u;
}
