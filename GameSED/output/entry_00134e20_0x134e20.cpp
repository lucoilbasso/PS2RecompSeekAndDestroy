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

// Function: entry_00134e20
// Address: 0x134e20 - 0x134e30
void entry_00134e20_0x134e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134e20_0x134e20");
#endif

    switch (ctx->pc) {
        case 0x134e28u: goto label_134e28;
        default: break;
    }

    ctx->pc = 0x134e20u;

    // 0x134e20: 0xc04eb56  jal         func_13AD58
    ctx->pc = 0x134E20u;
    SET_GPR_U32(ctx, 31, 0x134E28u);
    ctx->pc = 0x134E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134E20u;
    // 0x134e24: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AD58u, 0x134E20u, 0x134E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134E28u;
label_134e28:
    // 0x134e28: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x134E28u;
    {
        const bool branch_taken_0x134e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134E28u;
        // 0x134e2c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134e28) {
            ctx->pc = 0x134E44u;
            return;
        }
    }
    ctx->pc = 0x134E30u;
}
