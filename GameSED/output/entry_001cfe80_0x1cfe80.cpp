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

// Function: entry_001cfe80
// Address: 0x1cfe80 - 0x1cfe90
void entry_001cfe80_0x1cfe80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfe80_0x1cfe80");
#endif

    switch (ctx->pc) {
        case 0x1cfe88u: goto label_1cfe88;
        default: break;
    }

    ctx->pc = 0x1cfe80u;

    // 0x1cfe80: 0xc074086  jal         func_1D0218
    ctx->pc = 0x1CFE80u;
    SET_GPR_U32(ctx, 31, 0x1CFE88u);
    ctx->pc = 0x1CFE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE80u;
    // 0x1cfe84: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0218u, 0x1CFE80u, 0x1CFE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE88u;
label_1cfe88:
    // 0x1cfe88: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1CFE88u;
    {
        const bool branch_taken_0x1cfe88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFE88u;
        // 0x1cfe8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfe88) {
            ctx->pc = 0x1CFF70u;
            return;
        }
    }
    ctx->pc = 0x1CFE90u;
}
