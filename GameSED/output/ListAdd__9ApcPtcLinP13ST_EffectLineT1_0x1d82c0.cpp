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

// Function: ListAdd__9ApcPtcLinP13ST_EffectLineT1
// Address: 0x1d82c0 - 0x1d82cc
void ListAdd__9ApcPtcLinP13ST_EffectLineT1_0x1d82c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ListAdd__9ApcPtcLinP13ST_EffectLineT1_0x1d82c0");
#endif

    ctx->pc = 0x1d82c0u;

    // 0x1d82c0: 0xaca600c4  sw          $a2, 0xC4($a1)
    ctx->pc = 0x1d82c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 196), GPR_U32(ctx, 6));
    // 0x1d82c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D82C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D82C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D82C4u;
        // 0x1d82c8: 0xacc500c0  sw          $a1, 0xC0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 192), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D82C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D82CCu;
}
