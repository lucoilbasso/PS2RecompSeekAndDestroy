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

// Function: entry_001916e0
// Address: 0x1916e0 - 0x191728
void entry_001916e0_0x1916e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001916e0_0x1916e0");
#endif

    ctx->pc = 0x1916e0u;

    // 0x1916e0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1916e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1916e4: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1916e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1916e8: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x1916e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x1916ec: 0x24a60010  addiu       $a2, $a1, 0x10
    ctx->pc = 0x1916ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1916f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1916f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1916f4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1916f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1916f8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1916f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1916fc: 0x8c82d630  lw          $v0, -0x29D0($a0)
    ctx->pc = 0x1916fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x25D630u));
    // 0x191700: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x191700u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x191704: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x191704u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x191708: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x191708u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x19170c: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x19170cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x191710: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x191710u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x191714: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x191714u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x191718: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x191718u;
    {
        const bool branch_taken_0x191718 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x19171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191718u;
        // 0x19171c: 0xe4b40014  swc1        $f20, 0x14($a1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x191718) {
            ctx->pc = 0x191728u;
            return;
        }
    }
    ctx->pc = 0x191720u;
    // 0x191720: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x191720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x191724: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x191724u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x191728u;
}
