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

// Function: entry_001522e8
// Address: 0x1522e8 - 0x152300
void entry_001522e8_0x1522e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001522e8_0x1522e8");
#endif

    ctx->pc = 0x1522e8u;

    // 0x1522e8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1522e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1522ec: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x1522ecu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1522f0: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1522f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1522f4: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1522f4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1522f8: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1522F8u;
    {
        const bool branch_taken_0x1522f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1522f8) {
            ctx->pc = 0x1523ACu;
            return;
        }
    }
    ctx->pc = 0x152300u;
}
