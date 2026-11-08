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

// Function: entry_001198e8
// Address: 0x1198e8 - 0x119908
void entry_001198e8_0x1198e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001198e8_0x1198e8");
#endif

    ctx->pc = 0x1198e8u;

    // 0x1198e8: 0x0  nop
    ctx->pc = 0x1198e8u;
    // NOP
    // 0x1198ec: 0x0  nop
    ctx->pc = 0x1198ecu;
    // NOP
    // 0x1198f0: 0x0  nop
    ctx->pc = 0x1198f0u;
    // NOP
    // 0x1198f4: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1198F4u;
    {
        const bool branch_taken_0x1198f4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1198F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1198F4u;
        // 0x1198f8: 0x2442fffe  addiu       $v0, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1198f4) {
            ctx->pc = 0x1198E0u;
            return;
        }
    }
    ctx->pc = 0x1198FCu;
    // 0x1198fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1198fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119900: 0x3e00008  jr          $ra
    ctx->pc = 0x119900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119900u;
        // 0x119904: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119908u;
}
