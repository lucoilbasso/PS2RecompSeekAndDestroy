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

// Function: entry_001a4090
// Address: 0x1a4090 - 0x1a40a0
void entry_001a4090_0x1a4090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4090_0x1a4090");
#endif

    ctx->pc = 0x1a4090u;

    // 0x1a4090: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a4090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a4094: 0xaf829190  sw          $v0, -0x6E70($gp)
    ctx->pc = 0x1a4094u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939024), GPR_U32(ctx, 2));
    // 0x1a4098: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A409Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4098u;
        // 0x1a409c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A40A0u;
}
