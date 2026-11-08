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

// Function: entry_001a43d4
// Address: 0x1a43d4 - 0x1a43f4
void entry_001a43d4_0x1a43d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a43d4_0x1a43d4");
#endif

    switch (ctx->pc) {
        case 0x1a43e8u: goto label_1a43e8;
        case 0x1a43f0u: goto label_1a43f0;
        default: break;
    }

    ctx->pc = 0x1a43d4u;

    // 0x1a43d4: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x1a43d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1a43d8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A43D8u;
    {
        const bool branch_taken_0x1a43d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a43d8) {
            ctx->pc = 0x1A43DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A43D8u;
            // 0x1a43dc: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A43F4u;
            return;
        }
    }
    ctx->pc = 0x1A43E0u;
    // 0x1a43e0: 0xc0690e8  jal         func_1A43A0
    ctx->pc = 0x1A43E0u;
    SET_GPR_U32(ctx, 31, 0x1A43E8u);
    ctx->pc = 0x1A43A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A43A0u, 0x1A43E0u, 0x1A43E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A43E8u;
label_1a43e8:
    // 0x1a43e8: 0xc069612  jal         func_1A5848
    ctx->pc = 0x1A43E8u;
    SET_GPR_U32(ctx, 31, 0x1A43F0u);
    ctx->pc = 0x1A43ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A43E8u;
    // 0x1a43ec: 0x8e04002c  lw          $a0, 0x2C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5848u, 0x1A43E8u, 0x1A43F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A43F0u;
label_1a43f0:
    // 0x1a43f0: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1a43f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->pc = 0x1a43f4u;
}
