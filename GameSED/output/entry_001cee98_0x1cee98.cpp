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

// Function: entry_001cee98
// Address: 0x1cee98 - 0x1ceea8
void entry_001cee98_0x1cee98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cee98_0x1cee98");
#endif

    ctx->pc = 0x1cee98u;

    // 0x1cee98: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CEE98u;
    {
        const bool branch_taken_0x1cee98 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CEE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEE98u;
        // 0x1cee9c: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cee98) {
            ctx->pc = 0x1CEEA8u;
            return;
        }
    }
    ctx->pc = 0x1CEEA0u;
    // 0x1ceea0: 0xc073d1a  jal         func_1CF468
    ctx->pc = 0x1CEEA0u;
    SET_GPR_U32(ctx, 31, 0x1CEEA8u);
    ctx->pc = 0x1CF468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF468u, 0x1CEEA0u, 0x1CEEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEEA8u;
}
