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

// Function: entry_001b4ca8
// Address: 0x1b4ca8 - 0x1b4cc0
void entry_001b4ca8_0x1b4ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4ca8_0x1b4ca8");
#endif

    switch (ctx->pc) {
        case 0x1b4cb8u: goto label_1b4cb8;
        default: break;
    }

    ctx->pc = 0x1b4ca8u;

    // 0x1b4ca8: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4CA8u;
    {
        const bool branch_taken_0x1b4ca8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4ca8) {
            ctx->pc = 0x1B4CC0u;
            return;
        }
    }
    ctx->pc = 0x1B4CB0u;
    // 0x1b4cb0: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B4CB0u;
    SET_GPR_U32(ctx, 31, 0x1B4CB8u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B4CB0u, 0x1B4CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4CB8u;
label_1b4cb8:
    // 0x1b4cb8: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1B4CB8u;
    {
        const bool branch_taken_0x1b4cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4CB8u;
        // 0x1b4cbc: 0x2402fff9  addiu       $v0, $zero, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4cb8) {
            ctx->pc = 0x1B4DD4u;
            return;
        }
    }
    ctx->pc = 0x1B4CC0u;
}
