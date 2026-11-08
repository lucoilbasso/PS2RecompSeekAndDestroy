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

// Function: entry_0014ffe8
// Address: 0x14ffe8 - 0x150010
void entry_0014ffe8_0x14ffe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ffe8_0x14ffe8");
#endif

    ctx->pc = 0x14ffe8u;

    // 0x14ffe8: 0x8e0203b0  lw          $v0, 0x3B0($s0)
    ctx->pc = 0x14ffe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
    // 0x14ffec: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x14ffecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x14fff0: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x14FFF0u;
    {
        const bool branch_taken_0x14fff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fff0) {
            ctx->pc = 0x14FFF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FFF0u;
            // 0x14fff4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150048u;
            return;
        }
    }
    ctx->pc = 0x14FFF8u;
    // 0x14fff8: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x14fff8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14fffc: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x14fffcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x150000: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x150000u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x150004: 0xf8a20000  sqc2        $vf2, 0x0($a1)
    ctx->pc = 0x150004u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x150008: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x150008u;
    {
        const bool branch_taken_0x150008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15000Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150008u;
        // 0x15000c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150008) {
            ctx->pc = 0x150048u;
            return;
        }
    }
    ctx->pc = 0x150010u;
}
