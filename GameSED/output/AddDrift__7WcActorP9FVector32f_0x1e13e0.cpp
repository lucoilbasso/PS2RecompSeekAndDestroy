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

// Function: AddDrift__7WcActorP9FVector32f
// Address: 0x1e13e0 - 0x1e1450
void AddDrift__7WcActorP9FVector32f_0x1e13e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddDrift__7WcActorP9FVector32f_0x1e13e0");
#endif

    ctx->pc = 0x1e13e0u;

    // 0x1e13e0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1e13e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1e13e4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1e13e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1e13e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1e13e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1e13ec: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1E13ECu;
    {
        const bool branch_taken_0x1e13ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E13F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E13ECu;
        // 0x1e13f0: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e13ec) {
            ctx->pc = 0x1E1448u;
            goto label_1e1448;
        }
    }
    ctx->pc = 0x1E13F4u;
    // 0x1e13f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e13f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e13f8: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x1e13f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e13fc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1E13FCu;
    {
        const bool branch_taken_0x1e13fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E1400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E13FCu;
        // 0x1e1400: 0x248200c0  addiu       $v0, $a0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e13fc) {
            ctx->pc = 0x1E1420u;
            goto label_1e1420;
        }
    }
    ctx->pc = 0x1E1404u;
    // 0x1e1404: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1e1404u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e1408: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x1e1408u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e140c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1e140cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e1410: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1e1410u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e1414: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1E1414u;
    {
        const bool branch_taken_0x1e1414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1414) {
            ctx->pc = 0x1E1448u;
            goto label_1e1448;
        }
    }
    ctx->pc = 0x1E141Cu;
    // 0x1e141c: 0x0  nop
    ctx->pc = 0x1e141cu;
    // NOP
label_1e1420:
    // 0x1e1420: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1e1420u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e1424: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x1e1424u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1e1428: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e1428u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e142c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1e142cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e1430: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e1430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e1434: 0x248300c0  addiu       $v1, $a0, 0xC0
    ctx->pc = 0x1e1434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x1e1438: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1e1438u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e143c: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x1e143cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1440: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1e1440u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e1444: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1e1444u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_1e1448:
    // 0x1e1448: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E144Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1448u;
        // 0x1e144c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1450u;
}
