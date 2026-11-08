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

// Function: entry_001bf2c0
// Address: 0x1bf2c0 - 0x1bf2d0
void entry_001bf2c0_0x1bf2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf2c0_0x1bf2c0");
#endif

    switch (ctx->pc) {
        case 0x1bf2c8u: goto label_1bf2c8;
        default: break;
    }

    ctx->pc = 0x1bf2c0u;

    // 0x1bf2c0: 0xc06fd42  jal         func_1BF508
    ctx->pc = 0x1BF2C0u;
    SET_GPR_U32(ctx, 31, 0x1BF2C8u);
    ctx->pc = 0x1BF2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF2C0u;
    // 0x1bf2c4: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF508u, 0x1BF2C0u, 0x1BF2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF2C8u;
label_1bf2c8:
    // 0x1bf2c8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BF2C8u;
    {
        const bool branch_taken_0x1bf2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF2C8u;
        // 0x1bf2cc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf2c8) {
            ctx->pc = 0x1BF2E4u;
            return;
        }
    }
    ctx->pc = 0x1BF2D0u;
}
