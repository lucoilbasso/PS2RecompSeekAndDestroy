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

// Function: entry_0011b8c4
// Address: 0x11b8c4 - 0x11b8d4
void entry_0011b8c4_0x11b8c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b8c4_0x11b8c4");
#endif

    ctx->pc = 0x11b8c4u;

    // 0x11b8c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B8C4u;
    {
        const bool branch_taken_0x11b8c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8C4u;
        // 0x11b8c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8c4) {
            ctx->pc = 0x11B8D4u;
            return;
        }
    }
    ctx->pc = 0x11B8CCu;
    // 0x11b8cc: 0xc060e56  jal         func_183958
    ctx->pc = 0x11B8CCu;
    SET_GPR_U32(ctx, 31, 0x11B8D4u);
    ctx->pc = 0x11B8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B8CCu;
    // 0x11b8d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183958u, 0x11B8CCu, 0x11B8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B8D4u;
}
