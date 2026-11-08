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

// Function: entry_00118708
// Address: 0x118708 - 0x118724
void entry_00118708_0x118708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118708_0x118708");
#endif

    ctx->pc = 0x118708u;

    // 0x118708: 0x0  nop
    ctx->pc = 0x118708u;
    // NOP
    // 0x11870c: 0x0  nop
    ctx->pc = 0x11870cu;
    // NOP
    // 0x118710: 0x0  nop
    ctx->pc = 0x118710u;
    // NOP
    // 0x118714: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x118714u;
    {
        const bool branch_taken_0x118714 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x118718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118714u;
        // 0x118718: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118714) {
            ctx->pc = 0x118700u;
            return;
        }
    }
    ctx->pc = 0x11871Cu;
    // 0x11871c: 0x3e00008  jr          $ra
    ctx->pc = 0x11871Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11871Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118724u;
}
