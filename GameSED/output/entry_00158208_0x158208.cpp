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

// Function: entry_00158208
// Address: 0x158208 - 0x158220
void entry_00158208_0x158208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158208_0x158208");
#endif

    ctx->pc = 0x158208u;

    // 0x158208: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x158208u;
    {
        const bool branch_taken_0x158208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158208) {
            ctx->pc = 0x15820Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158208u;
            // 0x15820c: 0x8d420004  lw          $v0, 0x4($t2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158220u;
            return;
        }
    }
    ctx->pc = 0x158210u;
    // 0x158210: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x158210u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x158214: 0x4bc200ac  vsub.xyz    $vf2, $vf0, $vf2
    ctx->pc = 0x158214u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x158218: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x158218u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x15821c: 0x8d420004  lw          $v0, 0x4($t2)
    ctx->pc = 0x15821cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    ctx->pc = 0x158220u;
}
