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

// Function: entry_0019a2a8
// Address: 0x19a2a8 - 0x19a2d8
void entry_0019a2a8_0x19a2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a2a8_0x19a2a8");
#endif

    ctx->pc = 0x19a2a8u;

    // 0x19a2a8: 0x50a00015  beql        $a1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x19A2A8u;
    {
        const bool branch_taken_0x19a2a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a2a8) {
            ctx->pc = 0x19A2ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A2A8u;
            // 0x19a2ac: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A300u;
            return;
        }
    }
    ctx->pc = 0x19A2B0u;
    // 0x19a2b0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19a2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19a2b4: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x19a2b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19a2b8: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x19a2b8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x19a2bc: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x19a2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19a2c0: 0x26040104  addiu       $a0, $s0, 0x104
    ctx->pc = 0x19a2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
    // 0x19a2c4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19a2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19a2c8: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x19A2C8u;
    {
        const bool branch_taken_0x19a2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a2c8) {
            ctx->pc = 0x19A2CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A2C8u;
            // 0x19a2cc: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A310u;
            return;
        }
    }
    ctx->pc = 0x19A2D0u;
    // 0x19a2d0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19a2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19a2d4: 0x0  nop
    ctx->pc = 0x19a2d4u;
    // NOP
    ctx->pc = 0x19a2d8u;
}
