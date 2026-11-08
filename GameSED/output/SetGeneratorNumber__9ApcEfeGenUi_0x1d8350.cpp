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

// Function: SetGeneratorNumber__9ApcEfeGenUi
// Address: 0x1d8350 - 0x1d8358
void SetGeneratorNumber__9ApcEfeGenUi_0x1d8350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetGeneratorNumber__9ApcEfeGenUi_0x1d8350");
#endif

    ctx->pc = 0x1d8350u;

    // 0x1d8350: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8350u;
        // 0x1d8354: 0xac85015c  sw          $a1, 0x15C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 348), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8358u;
}
