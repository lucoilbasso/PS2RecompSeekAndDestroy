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

// Function: WEntityLoadLowerVector__FP8WcEntityP9FVector32f
// Address: 0x1865d0 - 0x18660c
void WEntityLoadLowerVector__FP8WcEntityP9FVector32f_0x1865d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WEntityLoadLowerVector__FP8WcEntityP9FVector32f_0x1865d0");
#endif

    ctx->pc = 0x1865d0u;

    // 0x1865d0: 0x248400a0  addiu       $a0, $a0, 0xA0
    ctx->pc = 0x1865d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x1865d4: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x1865d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1865d8: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x1865d8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x1865dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1865dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1865e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1865e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1865e4: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x1865e4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1865e8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1865E8u;
    {
        const bool branch_taken_0x1865e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1865e8) {
            ctx->pc = 0x186604u;
            goto label_186604;
        }
    }
    ctx->pc = 0x1865F0u;
    // 0x1865f0: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1865f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1865f4: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x1865f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1865f8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1865f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1865fc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1865fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x186600: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x186600u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_186604:
    // 0x186604: 0x3e00008  jr          $ra
    ctx->pc = 0x186604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186604u;
        // 0x186608: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18660Cu;
}
