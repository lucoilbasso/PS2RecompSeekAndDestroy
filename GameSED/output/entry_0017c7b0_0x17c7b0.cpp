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

// Function: entry_0017c7b0
// Address: 0x17c7b0 - 0x17c7cc
void entry_0017c7b0_0x17c7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c7b0_0x17c7b0");
#endif

    ctx->pc = 0x17c7b0u;

    // 0x17c7b0: 0x0  nop
    ctx->pc = 0x17c7b0u;
    // NOP
    // 0x17c7b4: 0x0  nop
    ctx->pc = 0x17c7b4u;
    // NOP
    // 0x17c7b8: 0x0  nop
    ctx->pc = 0x17c7b8u;
    // NOP
    // 0x17c7bc: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17C7BCu;
    {
        const bool branch_taken_0x17c7bc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x17C7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C7BCu;
        // 0x17c7c0: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c7bc) {
            ctx->pc = 0x17C7A8u;
            return;
        }
    }
    ctx->pc = 0x17C7C4u;
    // 0x17c7c4: 0x3e00008  jr          $ra
    ctx->pc = 0x17C7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C7C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C7CCu;
}
