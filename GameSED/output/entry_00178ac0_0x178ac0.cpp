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

// Function: entry_00178ac0
// Address: 0x178ac0 - 0x178ad4
void entry_00178ac0_0x178ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178ac0_0x178ac0");
#endif

    ctx->pc = 0x178ac0u;

    // 0x178ac0: 0x0  nop
    ctx->pc = 0x178ac0u;
    // NOP
    // 0x178ac4: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x178AC4u;
    {
        const bool branch_taken_0x178ac4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x178AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178AC4u;
        // 0x178ac8: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178ac4) {
            ctx->pc = 0x178AB0u;
            return;
        }
    }
    ctx->pc = 0x178ACCu;
    // 0x178acc: 0x3e00008  jr          $ra
    ctx->pc = 0x178ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178AD4u;
}
