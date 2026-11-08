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

// Function: entry_001cb2c0
// Address: 0x1cb2c0 - 0x1cb2e4
void entry_001cb2c0_0x1cb2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb2c0_0x1cb2c0");
#endif

    switch (ctx->pc) {
        case 0x1cb2dcu: goto label_1cb2dc;
        default: break;
    }

    ctx->pc = 0x1cb2c0u;

    // 0x1cb2c0: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CB2C0u;
    {
        const bool branch_taken_0x1cb2c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb2c0) {
            ctx->pc = 0x1CB308u;
            return;
        }
    }
    ctx->pc = 0x1CB2C8u;
    // 0x1cb2c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cb2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cb2cc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CB2CCu;
    {
        const bool branch_taken_0x1cb2cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB2CCu;
        // 0x1cb2d0: 0x242102b  sltu        $v0, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb2cc) {
            ctx->pc = 0x1CB2E4u;
            return;
        }
    }
    ctx->pc = 0x1CB2D4u;
    // 0x1cb2d4: 0xc072c48  jal         func_1CB120
    ctx->pc = 0x1CB2D4u;
    SET_GPR_U32(ctx, 31, 0x1CB2DCu);
    ctx->pc = 0x1CB2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB2D4u;
    // 0x1cb2d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB120u, 0x1CB2D4u, 0x1CB2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB2DCu;
label_1cb2dc:
    // 0x1cb2dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cb2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cb2e0: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1cb2e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->pc = 0x1cb2e4u;
}
