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

// Function: entry_001b4f84
// Address: 0x1b4f84 - 0x1b4f94
void entry_001b4f84_0x1b4f84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4f84_0x1b4f84");
#endif

    switch (ctx->pc) {
        case 0x1b4f8cu: goto label_1b4f8c;
        default: break;
    }

    ctx->pc = 0x1b4f84u;

    // 0x1b4f84: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1B4F84u;
    SET_GPR_U32(ctx, 31, 0x1B4F8Cu);
    ctx->pc = 0x1B4F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4F84u;
    // 0x1b4f88: 0x8e84aa14  lw          $a0, -0x55EC($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294945300)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1B4F84u, 0x1B4F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4F8Cu;
label_1b4f8c:
    // 0x1b4f8c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B4F8Cu;
    {
        const bool branch_taken_0x1b4f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4F8Cu;
        // 0x1b4f90: 0x2610a6c0  addiu       $s0, $s0, -0x5940 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4f8c) {
            ctx->pc = 0x1B4FA0u;
            return;
        }
    }
    ctx->pc = 0x1B4F94u;
}
