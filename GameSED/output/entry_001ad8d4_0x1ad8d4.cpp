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

// Function: entry_001ad8d4
// Address: 0x1ad8d4 - 0x1ad8e4
void entry_001ad8d4_0x1ad8d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad8d4_0x1ad8d4");
#endif

    switch (ctx->pc) {
        case 0x1ad8dcu: goto label_1ad8dc;
        default: break;
    }

    ctx->pc = 0x1ad8d4u;

    // 0x1ad8d4: 0xc06b820  jal         func_1AE080
    ctx->pc = 0x1AD8D4u;
    SET_GPR_U32(ctx, 31, 0x1AD8DCu);
    ctx->pc = 0x1AE080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE080u, 0x1AD8D4u, 0x1AD8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD8DCu;
label_1ad8dc:
    // 0x1ad8dc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1AD8DCu;
    {
        const bool branch_taken_0x1ad8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD8DCu;
        // 0x1ad8e0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad8dc) {
            ctx->pc = 0x1AD914u;
            return;
        }
    }
    ctx->pc = 0x1AD8E4u;
}
