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

// Function: entry_00183860
// Address: 0x183860 - 0x183874
void entry_00183860_0x183860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183860_0x183860");
#endif

    ctx->pc = 0x183860u;

    // 0x183860: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x183860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x183864: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x183864u;
    {
        const bool branch_taken_0x183864 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x183864) {
            ctx->pc = 0x183874u;
            return;
        }
    }
    ctx->pc = 0x18386Cu;
    // 0x18386c: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x18386Cu;
    SET_GPR_U32(ctx, 31, 0x183874u);
    ctx->pc = 0x183870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18386Cu;
    // 0x183870: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x18386Cu, 0x183874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183874u;
}
