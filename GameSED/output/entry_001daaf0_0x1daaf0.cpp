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

// Function: entry_001daaf0
// Address: 0x1daaf0 - 0x1dab10
void entry_001daaf0_0x1daaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001daaf0_0x1daaf0");
#endif

    ctx->pc = 0x1daaf0u;

    // 0x1daaf0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1daaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1daaf4: 0x8c430c04  lw          $v1, 0xC04($v0)
    ctx->pc = 0x1daaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3076)));
    // 0x1daaf8: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DAAF8u;
    {
        const bool branch_taken_0x1daaf8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1DAAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAAF8u;
        // 0x1daafc: 0x32980  sll         $a1, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daaf8) {
            ctx->pc = 0x1DAB10u;
            return;
        }
    }
    ctx->pc = 0x1DAB00u;
    // 0x1dab00: 0x8c8201b4  lw          $v0, 0x1B4($a0)
    ctx->pc = 0x1dab00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 436)));
    // 0x1dab04: 0x3e00008  jr          $ra
    ctx->pc = 0x1DAB04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DAB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAB04u;
        // 0x1dab08: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DAB04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DAB0Cu;
    // 0x1dab0c: 0x0  nop
    ctx->pc = 0x1dab0cu;
    // NOP
    ctx->pc = 0x1dab10u;
}
