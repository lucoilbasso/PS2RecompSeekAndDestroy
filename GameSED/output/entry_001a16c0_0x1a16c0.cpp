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

// Function: entry_001a16c0
// Address: 0x1a16c0 - 0x1a16c8
void entry_001a16c0_0x1a16c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a16c0_0x1a16c0");
#endif

    ctx->pc = 0x1a16c0u;

label_1a16c0:
    // 0x1a16c0: 0x40f809  jalr        $v0
label_1a16c4:
    if (ctx->pc == 0x1A16C4u) {
        ctx->pc = 0x1A16C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A16C0u;
        // 0x1a16c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A16C8u;
        goto label_fallthrough_0x1a16c0;
    }
    ctx->pc = 0x1A16C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A16C8u);
        ctx->pc = 0x1A16C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A16C0u;
        // 0x1a16c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A16C0u, 0x1A16C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1a16c0:
    ctx->pc = 0x1A16C8u;
}
