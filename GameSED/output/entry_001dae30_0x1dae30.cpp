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

// Function: entry_001dae30
// Address: 0x1dae30 - 0x1dae54
void entry_001dae30_0x1dae30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dae30_0x1dae30");
#endif

    ctx->pc = 0x1dae30u;

label_1dae30:
    // 0x1dae30: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x1dae30u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x1dae34: 0xad400000  sw          $zero, 0x0($t2)
    ctx->pc = 0x1dae34u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
    // 0x1dae38: 0x0  nop
    ctx->pc = 0x1dae38u;
    // NOP
    // 0x1dae3c: 0x0  nop
    ctx->pc = 0x1dae3cu;
    // NOP
    // 0x1dae40: 0x0  nop
    ctx->pc = 0x1dae40u;
    // NOP
    // 0x1dae44: 0x561fffa  bgez        $t3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DAE44u;
    {
        const bool branch_taken_0x1dae44 = (GPR_S32(ctx, 11) >= 0);
        ctx->pc = 0x1DAE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE44u;
        // 0x1dae48: 0x254afffc  addiu       $t2, $t2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dae44) {
            ctx->pc = 0x1DAE30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dae30;
        }
    }
    ctx->pc = 0x1DAE4Cu;
    // 0x1dae4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DAE4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DAE4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DAE54u;
}
