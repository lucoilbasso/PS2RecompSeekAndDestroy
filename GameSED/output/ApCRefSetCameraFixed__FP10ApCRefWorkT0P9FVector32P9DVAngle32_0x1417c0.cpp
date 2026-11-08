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

// Function: ApCRefSetCameraFixed__FP10ApCRefWorkT0P9FVector32P9DVAngle32
// Address: 0x1417c0 - 0x141824
void ApCRefSetCameraFixed__FP10ApCRefWorkT0P9FVector32P9DVAngle32_0x1417c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCRefSetCameraFixed__FP10ApCRefWorkT0P9FVector32P9DVAngle32_0x1417c0");
#endif

    ctx->pc = 0x1417c0u;

    // 0x1417c0: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x1417c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1417c4: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1417C4u;
    {
        const bool branch_taken_0x1417c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1417C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1417C4u;
        // 0x1417c8: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1417c4) {
            ctx->pc = 0x1417E0u;
            goto label_1417e0;
        }
    }
    ctx->pc = 0x1417CCu;
    // 0x1417cc: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1417ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1417d0: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x1417d0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1417d4: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1417d4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1417d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1417D8u;
    {
        const bool branch_taken_0x1417d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1417DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1417D8u;
        // 0x1417dc: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1417d8) {
            ctx->pc = 0x1417E8u;
            goto label_1417e8;
        }
    }
    ctx->pc = 0x1417E0u;
label_1417e0:
    // 0x1417e0: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x1417e0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1417e4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1417e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_1417e8:
    // 0x1417e8: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x1417e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1417ec: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x1417ecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1417f0: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x1417f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x1417f4: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x1417f4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x1417f8: 0x25040010  addiu       $a0, $t0, 0x10
    ctx->pc = 0x1417f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x1417fc: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x1417fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x141800: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x141800u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x141804: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x141804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x141808: 0x25030020  addiu       $v1, $t0, 0x20
    ctx->pc = 0x141808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x14180c: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x14180cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x141810: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x141810u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x141814: 0x25020030  addiu       $v0, $t0, 0x30
    ctx->pc = 0x141814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
    // 0x141818: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x141818u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x14181c: 0x3e00008  jr          $ra
    ctx->pc = 0x14181Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14181Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141824u;
}
