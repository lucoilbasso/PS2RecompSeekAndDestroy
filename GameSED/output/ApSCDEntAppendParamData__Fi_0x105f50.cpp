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

// Function: ApSCDEntAppendParamData__Fi
// Address: 0x105f50 - 0x105f74
void ApSCDEntAppendParamData__Fi_0x105f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApSCDEntAppendParamData__Fi_0x105f50");
#endif

    ctx->pc = 0x105f50u;

    // 0x105f50: 0x27828898  addiu       $v0, $gp, -0x7768
    ctx->pc = 0x105f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936728));
    // 0x105f54: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x105f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x105f58: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x105f58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x105f5c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x105f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x105f60: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x105f60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x105f64: 0x250821  addu        $at, $at, $a1
    ctx->pc = 0x105f64u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x105f68: 0xac24ec00  sw          $a0, -0x1400($at)
    ctx->pc = 0x105f68u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294962176), GPR_U32(ctx, 4));
    // 0x105f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x105F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105F6Cu;
        // 0x105f70: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105F74u;
}
