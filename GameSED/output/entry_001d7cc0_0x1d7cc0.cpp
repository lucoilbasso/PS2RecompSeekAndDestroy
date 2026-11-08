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

// Function: entry_001d7cc0
// Address: 0x1d7cc0 - 0x1d7ce4
void entry_001d7cc0_0x1d7cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7cc0_0x1d7cc0");
#endif

    ctx->pc = 0x1d7cc0u;

label_1d7cc0:
    // 0x1d7cc0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1d7cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1d7cc4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1d7cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1d7cc8: 0x0  nop
    ctx->pc = 0x1d7cc8u;
    // NOP
    // 0x1d7ccc: 0x0  nop
    ctx->pc = 0x1d7cccu;
    // NOP
    // 0x1d7cd0: 0x0  nop
    ctx->pc = 0x1d7cd0u;
    // NOP
    // 0x1d7cd4: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D7CD4u;
    {
        const bool branch_taken_0x1d7cd4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1D7CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7CD4u;
        // 0x1d7cd8: 0x24a5fffc  addiu       $a1, $a1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7cd4) {
            ctx->pc = 0x1D7CC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7cc0;
        }
    }
    ctx->pc = 0x1D7CDCu;
    // 0x1d7cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7CE4u;
}
