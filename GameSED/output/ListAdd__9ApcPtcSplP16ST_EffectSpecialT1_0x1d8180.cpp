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

// Function: ListAdd__9ApcPtcSplP16ST_EffectSpecialT1
// Address: 0x1d8180 - 0x1d818c
void ListAdd__9ApcPtcSplP16ST_EffectSpecialT1_0x1d8180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ListAdd__9ApcPtcSplP16ST_EffectSpecialT1_0x1d8180");
#endif

    ctx->pc = 0x1d8180u;

    // 0x1d8180: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x1d8180u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x1d8184: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8184u;
        // 0x1d8188: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D818Cu;
}
