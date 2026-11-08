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

// Function: entry_00191838
// Address: 0x191838 - 0x191880
void entry_00191838_0x191838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191838_0x191838");
#endif

    ctx->pc = 0x191838u;

    // 0x191838: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x191838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19183c: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x19183cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x191840: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x191840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x191844: 0x24a60010  addiu       $a2, $a1, 0x10
    ctx->pc = 0x191844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x191848: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x191848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19184c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x19184cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x191850: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x191850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x191854: 0x8c82d630  lw          $v0, -0x29D0($a0)
    ctx->pc = 0x191854u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x25D630u));
    // 0x191858: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x191858u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x19185c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x19185cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x191860: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x191860u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x191864: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x191864u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x191868: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x191868u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x19186c: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x19186cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x191870: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x191870u;
    {
        const bool branch_taken_0x191870 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x191874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191870u;
        // 0x191874: 0xe4b40014  swc1        $f20, 0x14($a1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x191870) {
            ctx->pc = 0x191880u;
            return;
        }
    }
    ctx->pc = 0x191878u;
    // 0x191878: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x191878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x19187c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x19187cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x191880u;
}
