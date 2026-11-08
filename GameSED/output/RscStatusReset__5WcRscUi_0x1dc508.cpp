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

// Function: RscStatusReset__5WcRscUi
// Address: 0x1dc508 - 0x1dc51c
void RscStatusReset__5WcRscUi_0x1dc508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RscStatusReset__5WcRscUi_0x1dc508");
#endif

    ctx->pc = 0x1dc508u;

    // 0x1dc508: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1dc508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1dc50c: 0x52827  nor         $a1, $zero, $a1
    ctx->pc = 0x1dc50cu;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x1dc510: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1dc510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1dc514: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC514u;
        // 0x1dc518: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC51Cu;
}
