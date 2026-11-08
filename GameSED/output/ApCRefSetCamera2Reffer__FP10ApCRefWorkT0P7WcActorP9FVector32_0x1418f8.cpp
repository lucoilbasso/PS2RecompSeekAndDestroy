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

// Function: ApCRefSetCamera2Reffer__FP10ApCRefWorkT0P7WcActorP9FVector32
// Address: 0x1418f8 - 0x141950
void ApCRefSetCamera2Reffer__FP10ApCRefWorkT0P7WcActorP9FVector32_0x1418f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCRefSetCamera2Reffer__FP10ApCRefWorkT0P7WcActorP9FVector32_0x1418f8");
#endif

    ctx->pc = 0x1418f8u;

    // 0x1418f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1418f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1418fc: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x1418fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x141900: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x141900u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x141904: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x141904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x141908: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x141908u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14190c: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x14190cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x141910: 0x7c800000  sq          $zero, 0x0($a0)
    ctx->pc = 0x141910u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 0));
    // 0x141914: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x141914u;
    {
        const bool branch_taken_0x141914 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x141918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141914u;
        // 0x141918: 0x24a20010  addiu       $v0, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141914) {
            ctx->pc = 0x141930u;
            goto label_141930;
        }
    }
    ctx->pc = 0x14191Cu;
    // 0x14191c: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x14191cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x141920: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x141920u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x141924: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x141924u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x141928: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x141928u;
    {
        const bool branch_taken_0x141928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14192Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141928u;
        // 0x14192c: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141928) {
            ctx->pc = 0x141938u;
            goto label_141938;
        }
    }
    ctx->pc = 0x141930u;
label_141930:
    // 0x141930: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x141930u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x141934: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x141934u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_141938:
    // 0x141938: 0x24a20020  addiu       $v0, $a1, 0x20
    ctx->pc = 0x141938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x14193c: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x14193cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x141940: 0x24a30030  addiu       $v1, $a1, 0x30
    ctx->pc = 0x141940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x141944: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x141944u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x141948: 0x3e00008  jr          $ra
    ctx->pc = 0x141948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141950u;
}
