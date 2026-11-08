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

// Function: ApCRefSetCameraRefer__FP10ApCRefWorkT0P9FVector32T2
// Address: 0x141828 - 0x1418a0
void ApCRefSetCameraRefer__FP10ApCRefWorkT0P9FVector32T2_0x141828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCRefSetCameraRefer__FP10ApCRefWorkT0P9FVector32T2_0x141828");
#endif

    ctx->pc = 0x141828u;

    // 0x141828: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x141828u;
    {
        const bool branch_taken_0x141828 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x14182Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141828u;
        // 0x14182c: 0x24820010  addiu       $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141828) {
            ctx->pc = 0x141848u;
            goto label_141848;
        }
    }
    ctx->pc = 0x141830u;
    // 0x141830: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x141830u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x141834: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x141834u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x141838: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x141838u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x14183c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14183Cu;
    {
        const bool branch_taken_0x14183c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14183Cu;
        // 0x141840: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14183c) {
            ctx->pc = 0x141850u;
            goto label_141850;
        }
    }
    ctx->pc = 0x141844u;
    // 0x141844: 0x0  nop
    ctx->pc = 0x141844u;
    // NOP
label_141848:
    // 0x141848: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x141848u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14184c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x14184cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_141850:
    // 0x141850: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x141850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x141854: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x141854u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x141858: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x141858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x14185c: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x14185cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x141860: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x141860u;
    {
        const bool branch_taken_0x141860 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x141864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141860u;
        // 0x141864: 0x24a20010  addiu       $v0, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141860) {
            ctx->pc = 0x141880u;
            goto label_141880;
        }
    }
    ctx->pc = 0x141868u;
    // 0x141868: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x141868u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14186c: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x14186cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x141870: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x141870u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x141874: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x141874u;
    {
        const bool branch_taken_0x141874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141874u;
        // 0x141878: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141874) {
            ctx->pc = 0x141888u;
            goto label_141888;
        }
    }
    ctx->pc = 0x14187Cu;
    // 0x14187c: 0x0  nop
    ctx->pc = 0x14187cu;
    // NOP
label_141880:
    // 0x141880: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x141880u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x141884: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x141884u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_141888:
    // 0x141888: 0x24a20020  addiu       $v0, $a1, 0x20
    ctx->pc = 0x141888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x14188c: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x14188cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x141890: 0x24a30030  addiu       $v1, $a1, 0x30
    ctx->pc = 0x141890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x141894: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x141894u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x141898: 0x3e00008  jr          $ra
    ctx->pc = 0x141898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1418A0u;
}
