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

// Function: entry_001b1dbc
// Address: 0x1b1dbc - 0x1b1dd0
void entry_001b1dbc_0x1b1dbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1dbc_0x1b1dbc");
#endif

    ctx->pc = 0x1b1dbcu;

    // 0x1b1dbc: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x1b1dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1b1dc0: 0x18a00003  blez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1DC0u;
    {
        const bool branch_taken_0x1b1dc0 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x1b1dc0) {
            ctx->pc = 0x1B1DD0u;
            return;
        }
    }
    ctx->pc = 0x1B1DC8u;
    // 0x1b1dc8: 0xc06dfe8  jal         func_1B7FA0
    ctx->pc = 0x1B1DC8u;
    SET_GPR_U32(ctx, 31, 0x1B1DD0u);
    ctx->pc = 0x1B1DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1DC8u;
    // 0x1b1dcc: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7FA0u, 0x1B1DC8u, 0x1B1DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1DD0u;
}
