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

// Function: entry_00130d48
// Address: 0x130d48 - 0x130d64
void entry_00130d48_0x130d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130d48_0x130d48");
#endif

    ctx->pc = 0x130d48u;

    // 0x130d48: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x130D48u;
    {
        const bool branch_taken_0x130d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x130d48) {
            ctx->pc = 0x130D4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130D48u;
            // 0x130d4c: 0x8e020138  lw          $v0, 0x138($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130D64u;
            return;
        }
    }
    ctx->pc = 0x130D50u;
    // 0x130d50: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x130d50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x130d54: 0xda230000  lqc2        $vf3, 0x0($s1)
    ctx->pc = 0x130d54u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x130d58: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x130d58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x130d5c: 0xfa020000  sqc2        $vf2, 0x0($s0)
    ctx->pc = 0x130d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x130d60: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x130d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    ctx->pc = 0x130d64u;
}
