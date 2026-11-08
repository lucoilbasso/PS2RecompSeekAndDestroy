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

// Function: entry_001558cc
// Address: 0x1558cc - 0x1558e0
void entry_001558cc_0x1558cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001558cc_0x1558cc");
#endif

    ctx->pc = 0x1558ccu;

    // 0x1558cc: 0x8e02076c  lw          $v0, 0x76C($s0)
    ctx->pc = 0x1558ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1900)));
    // 0x1558d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1558D0u;
    {
        const bool branch_taken_0x1558d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1558D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1558D0u;
        // 0x1558d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1558d0) {
            ctx->pc = 0x1558E0u;
            return;
        }
    }
    ctx->pc = 0x1558D8u;
    // 0x1558d8: 0xc061944  jal         func_186510
    ctx->pc = 0x1558D8u;
    SET_GPR_U32(ctx, 31, 0x1558E0u);
    ctx->pc = 0x186510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186510u, 0x1558D8u, 0x1558E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1558E0u;
}
