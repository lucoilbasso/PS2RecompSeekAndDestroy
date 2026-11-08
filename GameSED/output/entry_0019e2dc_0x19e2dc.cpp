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

// Function: entry_0019e2dc
// Address: 0x19e2dc - 0x19e314
void entry_0019e2dc_0x19e2dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e2dc_0x19e2dc");
#endif

    ctx->pc = 0x19e2dcu;

    // 0x19e2dc: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x19e2dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19e2e0: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x19e2e0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19e2e4: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x19e2e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19e2e8: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x19e2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19e2ec: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x19e2ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19e2f0: 0x4bc00868  vadd.xyz    $vf1, $vf1, $vf0
    ctx->pc = 0x19e2f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19e2f4: 0x4a0002ff  vnop
    ctx->pc = 0x19e2f4u;
    // NOP operation, no action needed for VU0
    // 0x19e2f8: 0x4a0002ff  vnop
    ctx->pc = 0x19e2f8u;
    // NOP operation, no action needed for VU0
    // 0x19e2fc: 0x4a0002ff  vnop
    ctx->pc = 0x19e2fcu;
    // NOP operation, no action needed for VU0
    // 0x19e300: 0x4a0002ff  vnop
    ctx->pc = 0x19e300u;
    // NOP operation, no action needed for VU0
    // 0x19e304: 0x4a0002ff  vnop
    ctx->pc = 0x19e304u;
    // NOP operation, no action needed for VU0
    // 0x19e308: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x19e308u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x19e30c: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x19e30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x19e310: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x19e310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    ctx->pc = 0x19e314u;
}
