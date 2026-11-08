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

// Function: entry_001ce4f0
// Address: 0x1ce4f0 - 0x1ce50c
void entry_001ce4f0_0x1ce4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce4f0_0x1ce4f0");
#endif

    ctx->pc = 0x1ce4f0u;

    // 0x1ce4f0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ce4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1ce4f4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1ce4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ce4f8: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1ce4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1ce4fc: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x1ce4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
    // 0x1ce500: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1ce500u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1ce504: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE504u;
        // 0x1ce508: 0xacc2000c  sw          $v0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE50Cu;
}
