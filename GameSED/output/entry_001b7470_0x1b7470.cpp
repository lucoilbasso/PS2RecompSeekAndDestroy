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

// Function: entry_001b7470
// Address: 0x1b7470 - 0x1b7480
void entry_001b7470_0x1b7470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7470_0x1b7470");
#endif

    switch (ctx->pc) {
        case 0x1b7478u: goto label_1b7478;
        default: break;
    }

    ctx->pc = 0x1b7470u;

    // 0x1b7470: 0xc06bcc4  jal         func_1AF310
    ctx->pc = 0x1B7470u;
    SET_GPR_U32(ctx, 31, 0x1B7478u);
    ctx->pc = 0x1B7474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7470u;
    // 0x1b7474: 0x90c40000  lbu         $a0, 0x0($a2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF310u, 0x1B7470u, 0x1B7478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7478u;
label_1b7478:
    // 0x1b7478: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x1B7478u;
    {
        const bool branch_taken_0x1b7478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7478) {
            ctx->pc = 0x1B7408u;
            return;
        }
    }
    ctx->pc = 0x1B7480u;
}
