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

// Function: entry_00197a50
// Address: 0x197a50 - 0x197a68
void entry_00197a50_0x197a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197a50_0x197a50");
#endif

    switch (ctx->pc) {
        case 0x197a64u: goto label_197a64;
        default: break;
    }

    ctx->pc = 0x197a50u;

    // 0x197a50: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x197a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x197a54: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x197A54u;
    {
        const bool branch_taken_0x197a54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x197a54) {
            ctx->pc = 0x197A58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x197A54u;
            // 0x197a58: 0x8e2201b0  lw          $v0, 0x1B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x197A68u;
            return;
        }
    }
    ctx->pc = 0x197A5Cu;
    // 0x197a5c: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x197A5Cu;
    SET_GPR_U32(ctx, 31, 0x197A64u);
    ctx->pc = 0x197A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197A5Cu;
    // 0x197a60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x197A5Cu, 0x197A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197A64u;
label_197a64:
    // 0x197a64: 0x8e2201b0  lw          $v0, 0x1B0($s1)
    ctx->pc = 0x197a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
    ctx->pc = 0x197a68u;
}
