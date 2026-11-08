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

// Function: entry_001a39c0
// Address: 0x1a39c0 - 0x1a3a00
void entry_001a39c0_0x1a39c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a39c0_0x1a39c0");
#endif

    ctx->pc = 0x1a39c0u;

    // 0x1a39c0: 0x38620011  xori        $v0, $v1, 0x11
    ctx->pc = 0x1a39c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)17);
    // 0x1a39c4: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1A39C4u;
    {
        const bool branch_taken_0x1a39c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a39c4) {
            ctx->pc = 0x1A39C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A39C4u;
            // 0x1a39c8: 0x38620012  xori        $v0, $v1, 0x12 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)18);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3A00u;
            return;
        }
    }
    ctx->pc = 0x1A39CCu;
    // 0x1a39cc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1a39ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1a39d0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1a39d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a39d4: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1a39d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1a39d8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1a39d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1a39dc: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1a39dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1a39e0: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1a39e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1a39e4: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1a39e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x1a39e8: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1a39e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a39ec: 0x4bc2113c  vitof0.xyz  $vf2, $vf2
    ctx->pc = 0x1a39ecu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1a39f0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1a39f0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a39f4: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1a39f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1a39f8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1A39F8u;
    {
        const bool branch_taken_0x1a39f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A39FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A39F8u;
        // 0x1a39fc: 0x86620014  lh          $v0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a39f8) {
            ctx->pc = 0x1A3A38u;
            return;
        }
    }
    ctx->pc = 0x1A3A00u;
}
