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

// Function: entry_001a0604
// Address: 0x1a0604 - 0x1a0618
void entry_001a0604_0x1a0604(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0604_0x1a0604");
#endif

    ctx->pc = 0x1a0604u;

    // 0x1a0604: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a0604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a0608: 0x1443fff9  bne         $v0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1A0608u;
    {
        const bool branch_taken_0x1a0608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A060Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0608u;
        // 0x1a060c: 0xaf829170  sw          $v0, -0x6E90($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938992), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0608) {
            ctx->pc = 0x1A05F0u;
            return;
        }
    }
    ctx->pc = 0x1A0610u;
    // 0x1a0610: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0618u;
}
