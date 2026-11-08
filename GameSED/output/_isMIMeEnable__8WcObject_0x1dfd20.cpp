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

// Function: _isMIMeEnable__8WcObject
// Address: 0x1dfd20 - 0x1dfd3c
void _isMIMeEnable__8WcObject_0x1dfd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_isMIMeEnable__8WcObject_0x1dfd20");
#endif

    ctx->pc = 0x1dfd20u;

    // 0x1dfd20: 0x8c8301a4  lw          $v1, 0x1A4($a0)
    ctx->pc = 0x1dfd20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 420)));
    // 0x1dfd24: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DFD24u;
    {
        const bool branch_taken_0x1dfd24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFD24u;
        // 0x1dfd28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfd24) {
            ctx->pc = 0x1DFD34u;
            goto label_1dfd34;
        }
    }
    ctx->pc = 0x1DFD2Cu;
    // 0x1dfd2c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1dfd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1dfd30: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1dfd30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1dfd34:
    // 0x1dfd34: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFD34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFD34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFD3Cu;
}
