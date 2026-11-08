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

// Function: entry_001cb250
// Address: 0x1cb250 - 0x1cb260
void entry_001cb250_0x1cb250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb250_0x1cb250");
#endif

    switch (ctx->pc) {
        case 0x1cb258u: goto label_1cb258;
        default: break;
    }

    ctx->pc = 0x1cb250u;

    // 0x1cb250: 0xc072a1c  jal         func_1CA870
    ctx->pc = 0x1CB250u;
    SET_GPR_U32(ctx, 31, 0x1CB258u);
    ctx->pc = 0x1CB254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB250u;
    // 0x1cb254: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA870u, 0x1CB250u, 0x1CB258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB258u;
label_1cb258:
    // 0x1cb258: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CB258u;
    {
        const bool branch_taken_0x1cb258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb258) {
            ctx->pc = 0x1CB25Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB258u;
            // 0x1cb25c: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB260u;
            return;
        }
    }
    ctx->pc = 0x1CB260u;
}
