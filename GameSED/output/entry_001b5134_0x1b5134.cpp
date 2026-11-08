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

// Function: entry_001b5134
// Address: 0x1b5134 - 0x1b5144
void entry_001b5134_0x1b5134(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5134_0x1b5134");
#endif

    switch (ctx->pc) {
        case 0x1b513cu: goto label_1b513c;
        default: break;
    }

    ctx->pc = 0x1b5134u;

    // 0x1b5134: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B5134u;
    SET_GPR_U32(ctx, 31, 0x1B513Cu);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B5134u, 0x1B513Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B513Cu;
label_1b513c:
    // 0x1b513c: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x1B513Cu;
    {
        const bool branch_taken_0x1b513c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B513Cu;
        // 0x1b5140: 0x2402ffea  addiu       $v0, $zero, -0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b513c) {
            ctx->pc = 0x1B5268u;
            return;
        }
    }
    ctx->pc = 0x1B5144u;
}
