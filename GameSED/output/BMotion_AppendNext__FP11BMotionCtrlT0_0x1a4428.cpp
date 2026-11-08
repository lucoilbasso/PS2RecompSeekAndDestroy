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

// Function: BMotion_AppendNext__FP11BMotionCtrlT0
// Address: 0x1a4428 - 0x1a4444
void BMotion_AppendNext__FP11BMotionCtrlT0_0x1a4428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMotion_AppendNext__FP11BMotionCtrlT0_0x1a4428");
#endif

    ctx->pc = 0x1a4428u;

    // 0x1a4428: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x1a4428u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1a442c: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x1a442cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1a4430: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1a4430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1a4434: 0xaca30028  sw          $v1, 0x28($a1)
    ctx->pc = 0x1a4434u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 3));
    // 0x1a4438: 0xa4820002  sh          $v0, 0x2($a0)
    ctx->pc = 0x1a4438u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a443c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A443Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A443Cu;
        // 0x1a4440: 0xac850028  sw          $a1, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A443Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4444u;
}
