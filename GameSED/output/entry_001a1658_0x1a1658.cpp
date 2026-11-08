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

// Function: entry_001a1658
// Address: 0x1a1658 - 0x1a1660
void entry_001a1658_0x1a1658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1658_0x1a1658");
#endif

    ctx->pc = 0x1a1658u;

label_1a1658:
    // 0x1a1658: 0x40f809  jalr        $v0
label_1a165c:
    if (ctx->pc == 0x1A165Cu) {
        ctx->pc = 0x1A165Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1658u;
        // 0x1a165c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1660u;
        goto label_fallthrough_0x1a1658;
    }
    ctx->pc = 0x1A1658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A1660u);
        ctx->pc = 0x1A165Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1658u;
        // 0x1a165c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1658u, 0x1A1660u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1a1658:
    ctx->pc = 0x1A1660u;
}
