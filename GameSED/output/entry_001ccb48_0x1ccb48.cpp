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

// Function: entry_001ccb48
// Address: 0x1ccb48 - 0x1ccb58
void entry_001ccb48_0x1ccb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ccb48_0x1ccb48");
#endif

    ctx->pc = 0x1ccb48u;

    // 0x1ccb48: 0x64a50001  daddiu      $a1, $a1, 0x1
    ctx->pc = 0x1ccb48u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
    // 0x1ccb4c: 0xfc850020  sd          $a1, 0x20($a0)
    ctx->pc = 0x1ccb4cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 5));
    // 0x1ccb50: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB50u;
        // 0x1ccb54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCB50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCB58u;
}
