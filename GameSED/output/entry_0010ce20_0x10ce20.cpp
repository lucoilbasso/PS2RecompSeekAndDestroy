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

// Function: entry_0010ce20
// Address: 0x10ce20 - 0x10ce34
void entry_0010ce20_0x10ce20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ce20_0x10ce20");
#endif

    switch (ctx->pc) {
        case 0x10ce28u: goto label_10ce28;
        default: break;
    }

    ctx->pc = 0x10ce20u;

    // 0x10ce20: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10CE20u;
    SET_GPR_U32(ctx, 31, 0x10CE28u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10CE20u, 0x10CE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CE28u;
label_10ce28:
    // 0x10ce28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10ce28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ce2c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10CE2Cu;
    {
        const bool branch_taken_0x10ce2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x10CE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CE2Cu;
        // 0x10ce30: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ce2c) {
            ctx->pc = 0x10CE40u;
            return;
        }
    }
    ctx->pc = 0x10CE34u;
}
