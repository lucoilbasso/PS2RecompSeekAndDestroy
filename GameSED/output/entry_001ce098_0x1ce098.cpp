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

// Function: entry_001ce098
// Address: 0x1ce098 - 0x1ce0a8
void entry_001ce098_0x1ce098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce098_0x1ce098");
#endif

    ctx->pc = 0x1ce098u;

    // 0x1ce098: 0x56800003  bnel        $s4, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE098u;
    {
        const bool branch_taken_0x1ce098 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce098) {
            ctx->pc = 0x1CE09Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE098u;
            // 0x1ce09c: 0xae540000  sw          $s4, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE0A8u;
            return;
        }
    }
    ctx->pc = 0x1CE0A0u;
    // 0x1ce0a0: 0xc073468  jal         func_1CD1A0
    ctx->pc = 0x1CE0A0u;
    SET_GPR_U32(ctx, 31, 0x1CE0A8u);
    ctx->pc = 0x1CD1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1A0u, 0x1CE0A0u, 0x1CE0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE0A8u;
}
