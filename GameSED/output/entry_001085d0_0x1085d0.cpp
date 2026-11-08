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

// Function: entry_001085d0
// Address: 0x1085d0 - 0x108610
void entry_001085d0_0x1085d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001085d0_0x1085d0");
#endif

    ctx->pc = 0x1085d0u;

    // 0x1085d0: 0x10e00015  beqz        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x1085D0u;
    {
        const bool branch_taken_0x1085d0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1085D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1085D0u;
        // 0x1085d4: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1085d0) {
            ctx->pc = 0x108628u;
            return;
        }
    }
    ctx->pc = 0x1085D8u;
    // 0x1085d8: 0x94820008  lhu         $v0, 0x8($a0)
    ctx->pc = 0x1085d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1085dc: 0x38420012  xori        $v0, $v0, 0x12
    ctx->pc = 0x1085dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)18);
    // 0x1085e0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1085E0u;
    {
        const bool branch_taken_0x1085e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1085E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1085E0u;
        // 0x1085e4: 0x3c040020  lui         $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1085e0) {
            ctx->pc = 0x108610u;
            return;
        }
    }
    ctx->pc = 0x1085E8u;
    // 0x1085e8: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1085e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1085ec: 0x8c62b830  lw          $v0, -0x47D0($v1)
    ctx->pc = 0x1085ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FB830u));
    // 0x1085f0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1085f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1085f4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1085f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1085f8: 0x4bc2113c  vitof0.xyz  $vf2, $vf2
    ctx->pc = 0x1085f8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1085fc: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1085fcu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x108600: 0xfa220000  sqc2        $vf2, 0x0($s1)
    ctx->pc = 0x108600u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x108604: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x108604u;
    {
        const bool branch_taken_0x108604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108604u;
        // 0x108608: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108604) {
            ctx->pc = 0x1086C4u;
            return;
        }
    }
    ctx->pc = 0x10860Cu;
    // 0x10860c: 0x0  nop
    ctx->pc = 0x10860cu;
    // NOP
    ctx->pc = 0x108610u;
}
