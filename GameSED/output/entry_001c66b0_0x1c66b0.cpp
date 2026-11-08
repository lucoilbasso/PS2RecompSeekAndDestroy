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

// Function: entry_001c66b0
// Address: 0x1c66b0 - 0x1c66c8
void entry_001c66b0_0x1c66b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c66b0_0x1c66b0");
#endif

    switch (ctx->pc) {
        case 0x1c66c0u: goto label_1c66c0;
        default: break;
    }

    ctx->pc = 0x1c66b0u;

    // 0x1c66b0: 0xdfa40000  ld          $a0, 0x0($sp)
    ctx->pc = 0x1c66b0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c66b4: 0xdfa50008  ld          $a1, 0x8($sp)
    ctx->pc = 0x1c66b4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c66b8: 0xc071b36  jal         func_1C6CD8
    ctx->pc = 0x1C66B8u;
    SET_GPR_U32(ctx, 31, 0x1C66C0u);
    ctx->pc = 0x1C6CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6CD8u, 0x1C66B8u, 0x1C66C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C66C0u;
label_1c66c0:
    // 0x1c66c0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1C66C0u;
    {
        const bool branch_taken_0x1c66c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C66C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C66C0u;
        // 0x1c66c4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c66c0) {
            ctx->pc = 0x1C6714u;
            return;
        }
    }
    ctx->pc = 0x1C66C8u;
}
