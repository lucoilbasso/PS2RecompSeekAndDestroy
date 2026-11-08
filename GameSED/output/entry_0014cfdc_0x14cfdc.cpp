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

// Function: entry_0014cfdc
// Address: 0x14cfdc - 0x14cfe8
void entry_0014cfdc_0x14cfdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014cfdc_0x14cfdc");
#endif

    ctx->pc = 0x14cfdcu;

    // 0x14cfdc: 0x3e00008  jr          $ra
    ctx->pc = 0x14CFDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CFDCu;
        // 0x14cfe0: 0x8c820160  lw          $v0, 0x160($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CFDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14CFE4u;
    // 0x14cfe4: 0x0  nop
    ctx->pc = 0x14cfe4u;
    // NOP
    ctx->pc = 0x14cfe8u;
}
