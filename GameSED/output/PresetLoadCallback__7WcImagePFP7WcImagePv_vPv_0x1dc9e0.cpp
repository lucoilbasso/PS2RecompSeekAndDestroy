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

// Function: PresetLoadCallback__7WcImagePFP7WcImagePv_vPv
// Address: 0x1dc9e0 - 0x1dc9ec
void PresetLoadCallback__7WcImagePFP7WcImagePv_vPv_0x1dc9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PresetLoadCallback__7WcImagePFP7WcImagePv_vPv_0x1dc9e0");
#endif

    ctx->pc = 0x1dc9e0u;

    // 0x1dc9e0: 0xac860034  sw          $a2, 0x34($a0)
    ctx->pc = 0x1dc9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 6));
    // 0x1dc9e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC9E4u;
        // 0x1dc9e8: 0xac850030  sw          $a1, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC9E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC9ECu;
}
