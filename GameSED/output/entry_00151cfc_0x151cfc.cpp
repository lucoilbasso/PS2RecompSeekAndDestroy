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

// Function: entry_00151cfc
// Address: 0x151cfc - 0x151d5c
void entry_00151cfc_0x151cfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151cfc_0x151cfc");
#endif

    ctx->pc = 0x151cfcu;

    // 0x151cfc: 0x26420620  addiu       $v0, $s2, 0x620
    ctx->pc = 0x151cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1568));
    // 0x151d00: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x151d00u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151d04: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x151d04u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x151d08: 0x4bc5212a  vmul.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x151d08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x151d0c: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x151d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x151d10: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x151d10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x151d14: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x151d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x151d18: 0x24639d00  addiu       $v1, $v1, -0x6300
    ctx->pc = 0x151d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941952));
    // 0x151d1c: 0x26440650  addiu       $a0, $s2, 0x650
    ctx->pc = 0x151d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1616));
    // 0x151d20: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x151d20u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x151d24: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x151d24u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x209D00u));
    // 0x151d28: 0x4bc5212a  vmul.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x151d28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x151d2c: 0xf8a40000  sqc2        $vf4, 0x0($a1)
    ctx->pc = 0x151d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x151d30: 0x26420640  addiu       $v0, $s2, 0x640
    ctx->pc = 0x151d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1600));
    // 0x151d34: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x151d34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151d38: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x151d38u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x151d3c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x151d3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x151d40: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x151d40u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x151d44: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x151d44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x151d48: 0x24639d10  addiu       $v1, $v1, -0x62F0
    ctx->pc = 0x151d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941968));
    // 0x151d4c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x151d4cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x151d50: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x151d50u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x209D10u));
    // 0x151d54: 0x4bc5212a  vmul.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x151d54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x151d58: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x151d58u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    ctx->pc = 0x151d5cu;
}
