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

// Function: entry_001b1f60
// Address: 0x1b1f60 - 0x1b1f80
void entry_001b1f60_0x1b1f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1f60_0x1b1f60");
#endif

    switch (ctx->pc) {
        case 0x1b1f68u: goto label_1b1f68;
        case 0x1b1f78u: goto label_1b1f78;
        default: break;
    }

    ctx->pc = 0x1b1f60u;

label_1b1f60:
    // 0x1b1f60: 0xc06c748  jal         func_1B1D20
    ctx->pc = 0x1B1F60u;
    SET_GPR_U32(ctx, 31, 0x1B1F68u);
    ctx->pc = 0x1B1F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1F60u;
    // 0x1b1f64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1D20u, 0x1B1F60u, 0x1B1F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1F68u;
label_1b1f68:
    // 0x1b1f68: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1B1F68u;
    {
        const bool branch_taken_0x1b1f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1F68u;
        // 0x1b1f6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1f68) {
            ctx->pc = 0x1B1F58u;
            return;
        }
    }
    ctx->pc = 0x1B1F70u;
    // 0x1b1f70: 0xc06bce0  jal         func_1AF380
    ctx->pc = 0x1B1F70u;
    SET_GPR_U32(ctx, 31, 0x1B1F78u);
    ctx->pc = 0x1AF380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF380u, 0x1B1F70u, 0x1B1F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1F78u;
label_1b1f78:
    // 0x1b1f78: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B1F78u;
    {
        const bool branch_taken_0x1b1f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1f78) {
            ctx->pc = 0x1B1F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1f60;
        }
    }
    ctx->pc = 0x1B1F80u;
}
