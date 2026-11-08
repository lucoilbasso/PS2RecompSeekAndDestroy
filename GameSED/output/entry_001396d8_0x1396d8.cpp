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

// Function: entry_001396d8
// Address: 0x1396d8 - 0x139708
void entry_001396d8_0x1396d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001396d8_0x1396d8");
#endif

    ctx->pc = 0x1396d8u;

    // 0x1396d8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1396d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1396dc: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x1396dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x1396e0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1396e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1396e4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1396e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1396e8: 0xac920010  sw          $s2, 0x10($a0)
    ctx->pc = 0x1396e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 18));
    // 0x1396ec: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1396ECu;
    {
        const bool branch_taken_0x1396ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1396F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1396ECu;
        // 0x1396f0: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1396ec) {
            ctx->pc = 0x139708u;
            return;
        }
    }
    ctx->pc = 0x1396F4u;
    // 0x1396f4: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1396f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1396f8: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x1396f8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1396fc: 0xf8e10000  sqc2        $vf1, 0x0($a3)
    ctx->pc = 0x1396fcu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x139700: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x139700u;
    {
        const bool branch_taken_0x139700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139700u;
        // 0x139704: 0x24c20020  addiu       $v0, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139700) {
            ctx->pc = 0x139710u;
            return;
        }
    }
    ctx->pc = 0x139708u;
}
