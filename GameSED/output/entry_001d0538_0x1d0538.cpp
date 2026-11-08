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

// Function: entry_001d0538
// Address: 0x1d0538 - 0x1d0540
void entry_001d0538_0x1d0538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0538_0x1d0538");
#endif

    ctx->pc = 0x1d0538u;

label_1d0538:
    // 0x1d0538: 0xa0f809  jalr        $a1
label_1d053c:
    if (ctx->pc == 0x1D053Cu) {
        ctx->pc = 0x1D053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0538u;
        // 0x1d053c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0540u;
        goto label_fallthrough_0x1d0538;
    }
    ctx->pc = 0x1D0538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1D0540u);
        ctx->pc = 0x1D053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0538u;
        // 0x1d053c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0538u, 0x1D0540u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1d0538:
    ctx->pc = 0x1D0540u;
}
