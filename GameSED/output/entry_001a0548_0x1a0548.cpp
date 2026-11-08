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

// Function: entry_001a0548
// Address: 0x1a0548 - 0x1a0558
void entry_001a0548_0x1a0548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0548_0x1a0548");
#endif

    ctx->pc = 0x1a0548u;

    // 0x1a0548: 0x5160ffc7  beql        $t3, $zero, . + 4 + (-0x39 << 2)
    ctx->pc = 0x1A0548u;
    {
        const bool branch_taken_0x1a0548 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0548) {
            ctx->pc = 0x1A054Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0548u;
            // 0x1a054c: 0x90c70000  lbu         $a3, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0468u;
            return;
        }
    }
    ctx->pc = 0x1A0550u;
    // 0x1a0550: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0558u;
}
