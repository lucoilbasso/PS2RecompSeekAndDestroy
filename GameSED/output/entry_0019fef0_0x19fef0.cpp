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

// Function: entry_0019fef0
// Address: 0x19fef0 - 0x19ff00
void entry_0019fef0_0x19fef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fef0_0x19fef0");
#endif

    ctx->pc = 0x19fef0u;

    // 0x19fef0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19fef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19fef4: 0xaf828e08  sw          $v0, -0x71F8($gp)
    ctx->pc = 0x19fef4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938120), GPR_U32(ctx, 2));
    // 0x19fef8: 0x3e00008  jr          $ra
    ctx->pc = 0x19FEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FEF8u;
        // 0x19fefc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FEF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FF00u;
}
