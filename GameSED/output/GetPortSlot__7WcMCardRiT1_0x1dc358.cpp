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

// Function: GetPortSlot__7WcMCardRiT1
// Address: 0x1dc358 - 0x1dc36c
void GetPortSlot__7WcMCardRiT1_0x1dc358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPortSlot__7WcMCardRiT1_0x1dc358");
#endif

    ctx->pc = 0x1dc358u;

    // 0x1dc358: 0x8c824050  lw          $v0, 0x4050($a0)
    ctx->pc = 0x1dc358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16464)));
    // 0x1dc35c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1dc35cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1dc360: 0x8c834054  lw          $v1, 0x4054($a0)
    ctx->pc = 0x1dc360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16468)));
    // 0x1dc364: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC364u;
        // 0x1dc368: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC36Cu;
}
