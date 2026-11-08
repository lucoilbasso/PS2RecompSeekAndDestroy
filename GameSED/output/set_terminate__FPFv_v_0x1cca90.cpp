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

// Function: set_terminate__FPFv_v
// Address: 0x1cca90 - 0x1ccaa4
void set_terminate__FPFv_v_0x1cca90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("set_terminate__FPFv_v_0x1cca90");
#endif

    ctx->pc = 0x1cca90u;

    // 0x1cca90: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1cca90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1cca94: 0x2463de10  addiu       $v1, $v1, -0x21F0
    ctx->pc = 0x1cca94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958608));
    // 0x1cca98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cca98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x24DE10u));
    // 0x1cca9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCA9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA9Cu;
        // 0x1ccaa0: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCA9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCAA4u;
}
