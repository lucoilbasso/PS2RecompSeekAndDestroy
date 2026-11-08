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

// Function: SetBaseActor__7ApcWponP7WcActor
// Address: 0x1d9b50 - 0x1d9b78
void SetBaseActor__7ApcWponP7WcActor_0x1d9b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetBaseActor__7ApcWponP7WcActor_0x1d9b50");
#endif

    ctx->pc = 0x1d9b50u;

    // 0x1d9b50: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1d9b50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d9b54: 0x24032118  addiu       $v1, $zero, 0x2118
    ctx->pc = 0x1d9b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
    // 0x1d9b58: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D9B58u;
    {
        const bool branch_taken_0x1d9b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d9b58) {
            ctx->pc = 0x1D9B70u;
            goto label_1d9b70;
        }
    }
    ctx->pc = 0x1D9B60u;
    // 0x1d9b60: 0x8ca20260  lw          $v0, 0x260($a1)
    ctx->pc = 0x1d9b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 608)));
    // 0x1d9b64: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B64u;
        // 0x1d9b68: 0xac820260  sw          $v0, 0x260($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9B6Cu;
    // 0x1d9b6c: 0x0  nop
    ctx->pc = 0x1d9b6cu;
    // NOP
label_1d9b70:
    // 0x1d9b70: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B70u;
        // 0x1d9b74: 0xac850260  sw          $a1, 0x260($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 608), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9B78u;
}
