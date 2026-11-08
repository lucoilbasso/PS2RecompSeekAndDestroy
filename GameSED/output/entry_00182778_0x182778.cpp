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

// Function: entry_00182778
// Address: 0x182778 - 0x182788
void entry_00182778_0x182778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182778_0x182778");
#endif

    switch (ctx->pc) {
        case 0x182780u: goto label_182780;
        default: break;
    }

    ctx->pc = 0x182778u;

    // 0x182778: 0xc06084e  jal         func_182138
    ctx->pc = 0x182778u;
    SET_GPR_U32(ctx, 31, 0x182780u);
    ctx->pc = 0x182138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182138u, 0x182778u, 0x182780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182780u;
label_182780:
    // 0x182780: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x182780u;
    {
        const bool branch_taken_0x182780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182780u;
        // 0x182784: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182780) {
            ctx->pc = 0x1827E0u;
            return;
        }
    }
    ctx->pc = 0x182788u;
}
