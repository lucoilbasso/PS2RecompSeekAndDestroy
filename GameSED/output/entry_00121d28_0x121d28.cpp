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

// Function: entry_00121d28
// Address: 0x121d28 - 0x121d40
void entry_00121d28_0x121d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121d28_0x121d28");
#endif

    switch (ctx->pc) {
        case 0x121d38u: goto label_121d38;
        default: break;
    }

    ctx->pc = 0x121d28u;

    // 0x121d28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x121D28u;
    {
        const bool branch_taken_0x121d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D28u;
        // 0x121d2c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121d28) {
            ctx->pc = 0x121D40u;
            return;
        }
    }
    ctx->pc = 0x121D30u;
    // 0x121d30: 0xc047a1a  jal         func_11E868
    ctx->pc = 0x121D30u;
    SET_GPR_U32(ctx, 31, 0x121D38u);
    ctx->pc = 0x121D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121D30u;
    // 0x121d34: 0x26050150  addiu       $a1, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E868u, 0x121D30u, 0x121D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121D38u;
label_121d38:
    // 0x121d38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x121D38u;
    {
        const bool branch_taken_0x121d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D38u;
        // 0x121d3c: 0x8e0200f4  lw          $v0, 0xF4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121d38) {
            ctx->pc = 0x121D4Cu;
            return;
        }
    }
    ctx->pc = 0x121D40u;
}
