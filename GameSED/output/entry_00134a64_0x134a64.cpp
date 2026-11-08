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

// Function: entry_00134a64
// Address: 0x134a64 - 0x134a78
void entry_00134a64_0x134a64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134a64_0x134a64");
#endif

    switch (ctx->pc) {
        case 0x134a70u: goto label_134a70;
        default: break;
    }

    ctx->pc = 0x134a64u;

    // 0x134a64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x134a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134a68: 0xc04e592  jal         func_139648
    ctx->pc = 0x134A68u;
    SET_GPR_U32(ctx, 31, 0x134A70u);
    ctx->pc = 0x134A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134A68u;
    // 0x134a6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139648u, 0x134A68u, 0x134A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134A70u;
label_134a70:
    // 0x134a70: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x134A70u;
    {
        const bool branch_taken_0x134a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134A70u;
        // 0x134a74: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134a70) {
            ctx->pc = 0x134E48u;
            return;
        }
    }
    ctx->pc = 0x134A78u;
}
