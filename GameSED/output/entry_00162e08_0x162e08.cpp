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

// Function: entry_00162e08
// Address: 0x162e08 - 0x162e30
void entry_00162e08_0x162e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162e08_0x162e08");
#endif

    ctx->pc = 0x162e08u;

    // 0x162e08: 0x131140  sll         $v0, $s3, 5
    ctx->pc = 0x162e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x162e0c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x162e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x162e10: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x162e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x162e14: 0x24420610  addiu       $v0, $v0, 0x610
    ctx->pc = 0x162e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1552));
    // 0x162e18: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x162e18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162e1c: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x162e1cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x162e20: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x162e20u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x162e24: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x162e24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x162e28: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x162E28u;
    {
        const bool branch_taken_0x162e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162E28u;
        // 0x162e2c: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162e28) {
            ctx->pc = 0x162E80u;
            return;
        }
    }
    ctx->pc = 0x162E30u;
}
