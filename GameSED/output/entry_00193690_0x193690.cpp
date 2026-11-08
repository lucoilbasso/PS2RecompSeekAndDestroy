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

// Function: entry_00193690
// Address: 0x193690 - 0x1936ac
void entry_00193690_0x193690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193690_0x193690");
#endif

    ctx->pc = 0x193690u;

    // 0x193690: 0x0  nop
    ctx->pc = 0x193690u;
    // NOP
    // 0x193694: 0x0  nop
    ctx->pc = 0x193694u;
    // NOP
    // 0x193698: 0x0  nop
    ctx->pc = 0x193698u;
    // NOP
    // 0x19369c: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19369Cu;
    {
        const bool branch_taken_0x19369c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1936A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19369Cu;
        // 0x1936a0: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19369c) {
            ctx->pc = 0x193688u;
            return;
        }
    }
    ctx->pc = 0x1936A4u;
    // 0x1936a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1936A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1936A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1936ACu;
}
