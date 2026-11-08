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

// Function: entry_00186100
// Address: 0x186100 - 0x186118
void entry_00186100_0x186100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186100_0x186100");
#endif

    switch (ctx->pc) {
        case 0x18610cu: goto label_18610c;
        default: break;
    }

    ctx->pc = 0x186100u;

    // 0x186100: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x186100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186104: 0xc06182a  jal         func_1860A8
    ctx->pc = 0x186104u;
    SET_GPR_U32(ctx, 31, 0x18610Cu);
    ctx->pc = 0x186108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186104u;
    // 0x186108: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1860A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1860A8u, 0x186104u, 0x18610Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18610Cu;
label_18610c:
    // 0x18610c: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x18610Cu;
    {
        const bool branch_taken_0x18610c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18610c) {
            ctx->pc = 0x1860D0u;
            return;
        }
    }
    ctx->pc = 0x186114u;
    // 0x186114: 0x0  nop
    ctx->pc = 0x186114u;
    // NOP
    ctx->pc = 0x186118u;
}
