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

// Function: entry_001dd9f8
// Address: 0x1dd9f8 - 0x1dda1c
void entry_001dd9f8_0x1dd9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dd9f8_0x1dd9f8");
#endif

    ctx->pc = 0x1dd9f8u;

label_1dd9f8:
    // 0x1dd9f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1dd9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1dd9fc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1dd9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1dda00: 0x0  nop
    ctx->pc = 0x1dda00u;
    // NOP
    // 0x1dda04: 0x0  nop
    ctx->pc = 0x1dda04u;
    // NOP
    // 0x1dda08: 0x0  nop
    ctx->pc = 0x1dda08u;
    // NOP
    // 0x1dda0c: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DDA0Cu;
    {
        const bool branch_taken_0x1dda0c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1DDA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA0Cu;
        // 0x1dda10: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dda0c) {
            ctx->pc = 0x1DD9F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd9f8;
        }
    }
    ctx->pc = 0x1DDA14u;
    // 0x1dda14: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDA14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDA1Cu;
}
