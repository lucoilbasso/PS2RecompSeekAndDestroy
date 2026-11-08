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

// Function: entry_00178600
// Address: 0x178600 - 0x178610
void entry_00178600_0x178600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178600_0x178600");
#endif

    switch (ctx->pc) {
        case 0x178608u: goto label_178608;
        default: break;
    }

    ctx->pc = 0x178600u;

    // 0x178600: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x178600u;
    SET_GPR_U32(ctx, 31, 0x178608u);
    ctx->pc = 0x178604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178600u;
    // 0x178604: 0x8e041010  lw          $a0, 0x1010($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x178600u, 0x178608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178608u;
label_178608:
    // 0x178608: 0xc05e2e6  jal         func_178B98
    ctx->pc = 0x178608u;
    SET_GPR_U32(ctx, 31, 0x178610u);
    ctx->pc = 0x178B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178B98u, 0x178608u, 0x178610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178610u;
}
