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

// Function: entry_001b30cc
// Address: 0x1b30cc - 0x1b30e4
void entry_001b30cc_0x1b30cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b30cc_0x1b30cc");
#endif

    switch (ctx->pc) {
        case 0x1b30dcu: goto label_1b30dc;
        default: break;
    }

    ctx->pc = 0x1b30ccu;

    // 0x1b30cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B30CCu;
    {
        const bool branch_taken_0x1b30cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b30cc) {
            ctx->pc = 0x1B30E4u;
            return;
        }
    }
    ctx->pc = 0x1B30D4u;
    // 0x1b30d4: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B30D4u;
    SET_GPR_U32(ctx, 31, 0x1B30DCu);
    ctx->pc = 0x1B30D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B30D4u;
    // 0x1b30d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B30D4u, 0x1B30DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B30DCu;
label_1b30dc:
    // 0x1b30dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B30DCu;
    {
        const bool branch_taken_0x1b30dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B30E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B30DCu;
        // 0x1b30e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b30dc) {
            ctx->pc = 0x1B30F8u;
            return;
        }
    }
    ctx->pc = 0x1B30E4u;
}
