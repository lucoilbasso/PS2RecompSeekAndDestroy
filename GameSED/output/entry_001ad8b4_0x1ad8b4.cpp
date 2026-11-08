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

// Function: entry_001ad8b4
// Address: 0x1ad8b4 - 0x1ad8c4
void entry_001ad8b4_0x1ad8b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad8b4_0x1ad8b4");
#endif

    switch (ctx->pc) {
        case 0x1ad8bcu: goto label_1ad8bc;
        default: break;
    }

    ctx->pc = 0x1ad8b4u;

    // 0x1ad8b4: 0xc06b81c  jal         func_1AE070
    ctx->pc = 0x1AD8B4u;
    SET_GPR_U32(ctx, 31, 0x1AD8BCu);
    ctx->pc = 0x1AD8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD8B4u;
    // 0x1ad8b8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE070u, 0x1AD8B4u, 0x1AD8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD8BCu;
label_1ad8bc:
    // 0x1ad8bc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1AD8BCu;
    {
        const bool branch_taken_0x1ad8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD8BCu;
        // 0x1ad8c0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad8bc) {
            ctx->pc = 0x1AD914u;
            return;
        }
    }
    ctx->pc = 0x1AD8C4u;
}
