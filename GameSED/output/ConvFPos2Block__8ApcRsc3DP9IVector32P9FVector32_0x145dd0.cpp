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

// Function: ConvFPos2Block__8ApcRsc3DP9IVector32P9FVector32
// Address: 0x145dd0 - 0x145e08
void ConvFPos2Block__8ApcRsc3DP9IVector32P9FVector32_0x145dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ConvFPos2Block__8ApcRsc3DP9IVector32P9FVector32_0x145dd0");
#endif

    ctx->pc = 0x145dd0u;

    // 0x145dd0: 0x8c870210  lw          $a3, 0x210($a0)
    ctx->pc = 0x145dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 528)));
    // 0x145dd4: 0x24840220  addiu       $a0, $a0, 0x220
    ctx->pc = 0x145dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 544));
    // 0x145dd8: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x145dd8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x145ddc: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x145ddcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x145de0: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x145de0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x145de4: 0x4be2117c  vftoi0.xyzw $vf2, $vf2
    ctx->pc = 0x145de4u;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x145de8: 0x70e71c88  pextlw      $v1, $a3, $a3
    ctx->pc = 0x145de8u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTLW(GPR_VEC(ctx, 7), GPR_VEC(ctx, 7)));
    // 0x145dec: 0x70631b89  pcpyld      $v1, $v1, $v1
    ctx->pc = 0x145decu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
    // 0x145df0: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x145df0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x145df4: 0x700211fe  psrlw       $v0, $v0, 7
    ctx->pc = 0x145df4u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi32(GPR_VEC(ctx, 2), 7));
    // 0x145df8: 0x70431048  psubw       $v0, $v0, $v1
    ctx->pc = 0x145df8u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x145dfc: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x145dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x145e00: 0x3e00008  jr          $ra
    ctx->pc = 0x145E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145E00u;
        // 0x145e04: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145E08u;
}
