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

// Function: entry_0018c078
// Address: 0x18c078 - 0x18c08c
void entry_0018c078_0x18c078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c078_0x18c078");
#endif

    ctx->pc = 0x18c078u;

    // 0x18c078: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x18c078u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18c07c: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x18c07cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18c080: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x18c080u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x18c084: 0xf9c20000  sqc2        $vf2, 0x0($t6)
    ctx->pc = 0x18c084u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x18c088: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18c088u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18c08cu;
}
