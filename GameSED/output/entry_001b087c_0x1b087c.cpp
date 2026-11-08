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

// Function: entry_001b087c
// Address: 0x1b087c - 0x1b08a0
void entry_001b087c_0x1b087c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b087c_0x1b087c");
#endif

    switch (ctx->pc) {
        case 0x1b088cu: goto label_1b088c;
        default: break;
    }

    ctx->pc = 0x1b087cu;

    // 0x1b087c: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1b087cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1b0880: 0xdc25aad8  ld          $a1, -0x5528($at)
    ctx->pc = 0x1b0880u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x25AAD8u));
    // 0x1b0884: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1B0884u;
    SET_GPR_U32(ctx, 31, 0x1B088Cu);
    ctx->pc = 0x1B0888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0884u;
    // 0x1b0888: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1B0884u, 0x1B088Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B088Cu;
label_1b088c:
    // 0x1b088c: 0x4410011  bgez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B088Cu;
    {
        const bool branch_taken_0x1b088c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B0890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B088Cu;
        // 0x1b0890: 0x3c120026  lui         $s2, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b088c) {
            ctx->pc = 0x1B08D4u;
            return;
        }
    }
    ctx->pc = 0x1B0894u;
    // 0x1b0894: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B0894u;
    {
        const bool branch_taken_0x1b0894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0894) {
            ctx->pc = 0x1B08B4u;
            return;
        }
    }
    ctx->pc = 0x1B089Cu;
    // 0x1b089c: 0x0  nop
    ctx->pc = 0x1b089cu;
    // NOP
    ctx->pc = 0x1b08a0u;
}
