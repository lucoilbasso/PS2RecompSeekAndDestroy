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

// Function: entry_0018e250
// Address: 0x18e250 - 0x18e25c
void entry_0018e250_0x18e250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e250_0x18e250");
#endif

    ctx->pc = 0x18e250u;

    // 0x18e250: 0x8d020244  lw          $v0, 0x244($t0)
    ctx->pc = 0x18e250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 580)));
    // 0x18e254: 0x3e00008  jr          $ra
    ctx->pc = 0x18E254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E254u;
        // 0x18e258: 0xad020248  sw          $v0, 0x248($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E25Cu;
}
