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

// Function: entry_00174c14
// Address: 0x174c14 - 0x174c1c
void entry_00174c14_0x174c14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174c14_0x174c14");
#endif

    ctx->pc = 0x174c14u;

    // 0x174c14: 0x3e00008  jr          $ra
    ctx->pc = 0x174C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174C14u;
        // 0x174c18: 0xaf8091a0  sw          $zero, -0x6E60($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939040), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174C1Cu;
}
