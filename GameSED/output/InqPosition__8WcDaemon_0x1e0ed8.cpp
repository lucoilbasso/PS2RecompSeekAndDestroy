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

// Function: InqPosition__8WcDaemon
// Address: 0x1e0ed8 - 0x1e0ee8
void InqPosition__8WcDaemon_0x1e0ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InqPosition__8WcDaemon_0x1e0ed8");
#endif

    ctx->pc = 0x1e0ed8u;

    // 0x1e0ed8: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x1e0ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1e0edc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e0edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e0ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0EE0u;
        // 0x1e0ee4: 0x244200d0  addiu       $v0, $v0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0EE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0EE8u;
}
