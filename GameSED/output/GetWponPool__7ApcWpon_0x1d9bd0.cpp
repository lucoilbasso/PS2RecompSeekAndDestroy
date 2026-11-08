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

// Function: GetWponPool__7ApcWpon
// Address: 0x1d9bd0 - 0x1d9bf8
void GetWponPool__7ApcWpon_0x1d9bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetWponPool__7ApcWpon_0x1d9bd0");
#endif

    ctx->pc = 0x1d9bd0u;

    // 0x1d9bd0: 0x8f848b2c  lw          $a0, -0x74D4($gp)
    ctx->pc = 0x1d9bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x1d9bd4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D9BD4u;
    {
        const bool branch_taken_0x1d9bd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9BD4u;
        // 0x1d9bd8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9bd4) {
            ctx->pc = 0x1D9BF0u;
            goto label_1d9bf0;
        }
    }
    ctx->pc = 0x1D9BDCu;
    // 0x1d9bdc: 0x8f838b30  lw          $v1, -0x74D0($gp)
    ctx->pc = 0x1d9bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x1d9be0: 0x8c84026c  lw          $a0, 0x26C($a0)
    ctx->pc = 0x1d9be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 620)));
    // 0x1d9be4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d9be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d9be8: 0xaf848b2c  sw          $a0, -0x74D4($gp)
    ctx->pc = 0x1d9be8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 4));
    // 0x1d9bec: 0xaf838b30  sw          $v1, -0x74D0($gp)
    ctx->pc = 0x1d9becu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 3));
label_1d9bf0:
    // 0x1d9bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9BF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9BF8u;
}
