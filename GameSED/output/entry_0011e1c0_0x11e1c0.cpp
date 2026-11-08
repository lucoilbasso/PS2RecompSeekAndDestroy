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

// Function: entry_0011e1c0
// Address: 0x11e1c0 - 0x11e1d0
void entry_0011e1c0_0x11e1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e1c0_0x11e1c0");
#endif

    switch (ctx->pc) {
        case 0x11e1c8u: goto label_11e1c8;
        default: break;
    }

    ctx->pc = 0x11e1c0u;

    // 0x11e1c0: 0xc04780a  jal         func_11E028
    ctx->pc = 0x11E1C0u;
    SET_GPR_U32(ctx, 31, 0x11E1C8u);
    ctx->pc = 0x11E1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E1C0u;
    // 0x11e1c4: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E028u, 0x11E1C0u, 0x11E1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E1C8u;
label_11e1c8:
    // 0x11e1c8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x11E1C8u;
    {
        const bool branch_taken_0x11e1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E1C8u;
        // 0x11e1cc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e1c8) {
            ctx->pc = 0x11E23Cu;
            return;
        }
    }
    ctx->pc = 0x11E1D0u;
}
