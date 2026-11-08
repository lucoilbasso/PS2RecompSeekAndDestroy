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

// Function: MoverMotionReset__8ApcMover
// Address: 0x1db510 - 0x1db538
void MoverMotionReset__8ApcMover_0x1db510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MoverMotionReset__8ApcMover_0x1db510");
#endif

    ctx->pc = 0x1db510u;

    // 0x1db510: 0xac8001e0  sw          $zero, 0x1E0($a0)
    ctx->pc = 0x1db510u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 480), GPR_U32(ctx, 0));
    // 0x1db514: 0x24830220  addiu       $v1, $a0, 0x220
    ctx->pc = 0x1db514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 544));
    // 0x1db518: 0xac800260  sw          $zero, 0x260($a0)
    ctx->pc = 0x1db518u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 608), GPR_U32(ctx, 0));
    // 0x1db51c: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x1db51cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1db520: 0x24820280  addiu       $v0, $a0, 0x280
    ctx->pc = 0x1db520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 640));
    // 0x1db524: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x1db524u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1db528: 0x24840250  addiu       $a0, $a0, 0x250
    ctx->pc = 0x1db528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 592));
    // 0x1db52c: 0xf8800000  sqc2        $vf0, 0x0($a0)
    ctx->pc = 0x1db52cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1db530: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB538u;
}
