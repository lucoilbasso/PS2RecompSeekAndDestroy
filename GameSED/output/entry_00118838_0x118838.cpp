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

// Function: entry_00118838
// Address: 0x118838 - 0x118854
void entry_00118838_0x118838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118838_0x118838");
#endif

    ctx->pc = 0x118838u;

    // 0x118838: 0x0  nop
    ctx->pc = 0x118838u;
    // NOP
    // 0x11883c: 0x0  nop
    ctx->pc = 0x11883cu;
    // NOP
    // 0x118840: 0x0  nop
    ctx->pc = 0x118840u;
    // NOP
    // 0x118844: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x118844u;
    {
        const bool branch_taken_0x118844 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x118848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118844u;
        // 0x118848: 0x2484fffe  addiu       $a0, $a0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118844) {
            ctx->pc = 0x118830u;
            return;
        }
    }
    ctx->pc = 0x11884Cu;
    // 0x11884c: 0x3e00008  jr          $ra
    ctx->pc = 0x11884Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11884Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118854u;
}
