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

// Function: entry_00157f08
// Address: 0x157f08 - 0x157f20
void entry_00157f08_0x157f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157f08_0x157f08");
#endif

    ctx->pc = 0x157f08u;

    // 0x157f08: 0x252303d0  addiu       $v1, $t1, 0x3D0
    ctx->pc = 0x157f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 976));
    // 0x157f0c: 0x252203b0  addiu       $v0, $t1, 0x3B0
    ctx->pc = 0x157f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 944));
    // 0x157f10: 0xd86e0000  lqc2        $vf14, 0x0($v1)
    ctx->pc = 0x157f10u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x157f14: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x157f14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x157f18: 0x4bc273ac  vsub.xyz    $vf14, $vf14, $vf2
    ctx->pc = 0x157f18u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[14], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x157f1c: 0x25270400  addiu       $a3, $t1, 0x400
    ctx->pc = 0x157f1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 1024));
    ctx->pc = 0x157f20u;
}
