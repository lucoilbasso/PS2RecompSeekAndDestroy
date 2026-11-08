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

// Function: entry_001a8ae0
// Address: 0x1a8ae0 - 0x1a8af0
void entry_001a8ae0_0x1a8ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8ae0_0x1a8ae0");
#endif

    switch (ctx->pc) {
        case 0x1a8ae8u: goto label_1a8ae8;
        default: break;
    }

    ctx->pc = 0x1a8ae0u;

    // 0x1a8ae0: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A8AE0u;
    SET_GPR_U32(ctx, 31, 0x1A8AE8u);
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A8AE0u, 0x1A8AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8AE8u;
label_1a8ae8:
    // 0x1a8ae8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A8AE8u;
    {
        const bool branch_taken_0x1a8ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8AE8u;
        // 0x1a8aec: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8ae8) {
            ctx->pc = 0x1A8AF4u;
            return;
        }
    }
    ctx->pc = 0x1A8AF0u;
}
