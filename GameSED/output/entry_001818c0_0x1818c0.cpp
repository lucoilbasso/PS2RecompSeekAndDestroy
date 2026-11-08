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

// Function: entry_001818c0
// Address: 0x1818c0 - 0x1818d0
void entry_001818c0_0x1818c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001818c0_0x1818c0");
#endif

    switch (ctx->pc) {
        case 0x1818c8u: goto label_1818c8;
        default: break;
    }

    ctx->pc = 0x1818c0u;

    // 0x1818c0: 0xc060550  jal         func_181540
    ctx->pc = 0x1818C0u;
    SET_GPR_U32(ctx, 31, 0x1818C8u);
    ctx->pc = 0x181540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181540u, 0x1818C0u, 0x1818C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1818C8u;
label_1818c8:
    // 0x1818c8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1818C8u;
    {
        const bool branch_taken_0x1818c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1818CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1818C8u;
        // 0x1818cc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1818c8) {
            ctx->pc = 0x181928u;
            return;
        }
    }
    ctx->pc = 0x1818D0u;
}
