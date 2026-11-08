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

// Function: entry_001e08e0
// Address: 0x1e08e0 - 0x1e0900
void entry_001e08e0_0x1e08e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e08e0_0x1e08e0");
#endif

    ctx->pc = 0x1e08e0u;

    // 0x1e08e0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1e08e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e08e4: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1e08e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1e08e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e08e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e08ec: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1e08ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1e08f0: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1e08f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x1e08f4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1e08f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1e08f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E08F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E08FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E08F8u;
        // 0x1e08fc: 0xacc50008  sw          $a1, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E08F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0900u;
}
