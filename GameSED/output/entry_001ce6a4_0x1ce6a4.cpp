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

// Function: entry_001ce6a4
// Address: 0x1ce6a4 - 0x1ce6b0
void entry_001ce6a4_0x1ce6a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce6a4_0x1ce6a4");
#endif

    ctx->pc = 0x1ce6a4u;

    // 0x1ce6a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE6A4u;
        // 0x1ce6a8: 0xfcc30010  sd          $v1, 0x10($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE6A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE6ACu;
    // 0x1ce6ac: 0x0  nop
    ctx->pc = 0x1ce6acu;
    // NOP
    ctx->pc = 0x1ce6b0u;
}
