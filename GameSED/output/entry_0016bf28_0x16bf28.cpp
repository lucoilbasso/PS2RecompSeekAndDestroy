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

// Function: entry_0016bf28
// Address: 0x16bf28 - 0x16bf50
void entry_0016bf28_0x16bf28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016bf28_0x16bf28");
#endif

    ctx->pc = 0x16bf28u;

    // 0x16bf28: 0x131140  sll         $v0, $s3, 5
    ctx->pc = 0x16bf28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x16bf2c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x16bf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16bf30: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x16bf30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x16bf34: 0x24420160  addiu       $v0, $v0, 0x160
    ctx->pc = 0x16bf34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 352));
    // 0x16bf38: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x16bf38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bf3c: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x16bf3cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x16bf40: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x16bf40u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16bf44: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x16bf44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x16bf48: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x16BF48u;
    {
        const bool branch_taken_0x16bf48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BF48u;
        // 0x16bf4c: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bf48) {
            ctx->pc = 0x16C0E0u;
            return;
        }
    }
    ctx->pc = 0x16BF50u;
}
