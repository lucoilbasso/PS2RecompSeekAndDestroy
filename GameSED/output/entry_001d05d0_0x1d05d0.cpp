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

// Function: entry_001d05d0
// Address: 0x1d05d0 - 0x1d05d8
void entry_001d05d0_0x1d05d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d05d0_0x1d05d0");
#endif

    ctx->pc = 0x1d05d0u;

label_1d05d0:
    // 0x1d05d0: 0xa0f809  jalr        $a1
label_1d05d4:
    if (ctx->pc == 0x1D05D4u) {
        ctx->pc = 0x1D05D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D05D0u;
        // 0x1d05d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D05D8u;
        goto label_fallthrough_0x1d05d0;
    }
    ctx->pc = 0x1D05D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1D05D8u);
        ctx->pc = 0x1D05D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D05D0u;
        // 0x1d05d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D05D0u, 0x1D05D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1d05d0:
    ctx->pc = 0x1D05D8u;
}
