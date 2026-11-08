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

// Function: entry_001587ec
// Address: 0x1587ec - 0x158804
void entry_001587ec_0x1587ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001587ec_0x1587ec");
#endif

    ctx->pc = 0x1587ecu;

    // 0x1587ec: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1587ECu;
    {
        const bool branch_taken_0x1587ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1587ec) {
            ctx->pc = 0x1587F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1587ECu;
            // 0x1587f0: 0x8d420004  lw          $v0, 0x4($t2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158804u;
            return;
        }
    }
    ctx->pc = 0x1587F4u;
    // 0x1587f4: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1587f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1587f8: 0x4bc200ac  vsub.xyz    $vf2, $vf0, $vf2
    ctx->pc = 0x1587f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1587fc: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1587fcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x158800: 0x8d420004  lw          $v0, 0x4($t2)
    ctx->pc = 0x158800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    ctx->pc = 0x158804u;
}
