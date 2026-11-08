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

// Function: entry_001a3cd0
// Address: 0x1a3cd0 - 0x1a3d10
void entry_001a3cd0_0x1a3cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3cd0_0x1a3cd0");
#endif

    ctx->pc = 0x1a3cd0u;

    // 0x1a3cd0: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1A3CD0u;
    {
        const bool branch_taken_0x1a3cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3cd0) {
            ctx->pc = 0x1A3CD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3CD0u;
            // 0x1a3cd4: 0x38620012  xori        $v0, $v1, 0x12 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)18);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3D10u;
            return;
        }
    }
    ctx->pc = 0x1A3CD8u;
    // 0x1a3cd8: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x1a3cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1a3cdc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1a3cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a3ce0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1a3ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a3ce4: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x1a3ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x1a3ce8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1a3ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1a3cec: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x1a3cecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x1a3cf0: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x1a3cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1a3cf4: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x1a3cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    // 0x1a3cf8: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1a3cf8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a3cfc: 0x4bc2113c  vitof0.xyz  $vf2, $vf2
    ctx->pc = 0x1a3cfcu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1a3d00: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1a3d00u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1a3d04: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1a3d04u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1a3d08: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1A3D08u;
    {
        const bool branch_taken_0x1a3d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D08u;
        // 0x1a3d0c: 0x86020014  lh          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3d08) {
            ctx->pc = 0x1A3D4Cu;
            return;
        }
    }
    ctx->pc = 0x1A3D10u;
}
