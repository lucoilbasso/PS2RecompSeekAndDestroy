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

// Function: entry_00169e8c
// Address: 0x169e8c - 0x169ec8
void entry_00169e8c_0x169e8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169e8c_0x169e8c");
#endif

    ctx->pc = 0x169e8cu;

    // 0x169e8c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x169e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x169e90: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x169e90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x169e94: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x169e94u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x169e98: 0xf8e10000  sqc2        $vf1, 0x0($a3)
    ctx->pc = 0x169e98u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x169e9c: 0xace00018  sw          $zero, 0x18($a3)
    ctx->pc = 0x169e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 0));
    // 0x169ea0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x169ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x169ea4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x169ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x169ea8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x169ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x169eac: 0xace50014  sw          $a1, 0x14($a3)
    ctx->pc = 0x169eacu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
    // 0x169eb0: 0xace30018  sw          $v1, 0x18($a3)
    ctx->pc = 0x169eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
    // 0x169eb4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x169eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x169eb8: 0xae270008  sw          $a3, 0x8($s1)
    ctx->pc = 0x169eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 7));
    // 0x169ebc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x169ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x169ec0: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x169EC0u;
    {
        const bool branch_taken_0x169ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169EC0u;
        // 0x169ec4: 0xae270004  sw          $a3, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169ec0) {
            ctx->pc = 0x16A07Cu;
            return;
        }
    }
    ctx->pc = 0x169EC8u;
}
