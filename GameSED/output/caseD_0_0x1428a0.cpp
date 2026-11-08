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

// Function: caseD_0
// Address: 0x1428a0 - 0x1428c0
void caseD_0_0x1428a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1428a0");
#endif

    ctx->pc = 0x1428a0u;

    // 0x1428a0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1428A0u;
    {
        const bool branch_taken_0x1428a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1428A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1428A0u;
        // 0x1428a4: 0x24820010  addiu       $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1428a0) {
            ctx->pc = 0x1428C0u;
            return;
        }
    }
    ctx->pc = 0x1428A8u;
    // 0x1428a8: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1428a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1428ac: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x1428acu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1428b0: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1428b0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1428b4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1428B4u;
    {
        const bool branch_taken_0x1428b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1428B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1428B4u;
        // 0x1428b8: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1428b4) {
            ctx->pc = 0x1428F0u;
            return;
        }
    }
    ctx->pc = 0x1428BCu;
    // 0x1428bc: 0x0  nop
    ctx->pc = 0x1428bcu;
    // NOP
    ctx->pc = 0x1428c0u;
}
