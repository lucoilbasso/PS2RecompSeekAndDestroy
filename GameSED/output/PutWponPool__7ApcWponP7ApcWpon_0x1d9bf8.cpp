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

// Function: PutWponPool__7ApcWponP7ApcWpon
// Address: 0x1d9bf8 - 0x1d9c14
void PutWponPool__7ApcWponP7ApcWpon_0x1d9bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PutWponPool__7ApcWponP7ApcWpon_0x1d9bf8");
#endif

    ctx->pc = 0x1d9bf8u;

    // 0x1d9bf8: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x1d9bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x1d9bfc: 0x8f838b2c  lw          $v1, -0x74D4($gp)
    ctx->pc = 0x1d9bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x1d9c00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d9c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d9c04: 0xac83026c  sw          $v1, 0x26C($a0)
    ctx->pc = 0x1d9c04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 620), GPR_U32(ctx, 3));
    // 0x1d9c08: 0xaf848b2c  sw          $a0, -0x74D4($gp)
    ctx->pc = 0x1d9c08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 4));
    // 0x1d9c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9C0Cu;
        // 0x1d9c10: 0xaf828b30  sw          $v0, -0x74D0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9C14u;
}
