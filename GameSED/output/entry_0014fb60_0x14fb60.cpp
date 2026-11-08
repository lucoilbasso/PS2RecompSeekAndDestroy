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

// Function: entry_0014fb60
// Address: 0x14fb60 - 0x14fb70
void entry_0014fb60_0x14fb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014fb60_0x14fb60");
#endif

    switch (ctx->pc) {
        case 0x14fb68u: goto label_14fb68;
        default: break;
    }

    ctx->pc = 0x14fb60u;

    // 0x14fb60: 0xc053dee  jal         func_14F7B8
    ctx->pc = 0x14FB60u;
    SET_GPR_U32(ctx, 31, 0x14FB68u);
    ctx->pc = 0x14F7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F7B8u, 0x14FB60u, 0x14FB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FB68u;
label_14fb68:
    // 0x14fb68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14FB68u;
    {
        const bool branch_taken_0x14fb68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FB68u;
        // 0x14fb6c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fb68) {
            ctx->pc = 0x14FB7Cu;
            return;
        }
    }
    ctx->pc = 0x14FB70u;
}
