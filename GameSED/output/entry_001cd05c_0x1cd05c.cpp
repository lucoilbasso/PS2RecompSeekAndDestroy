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

// Function: entry_001cd05c
// Address: 0x1cd05c - 0x1cd068
void entry_001cd05c_0x1cd05c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd05c_0x1cd05c");
#endif

    switch (ctx->pc) {
        case 0x1cd064u: goto label_1cd064;
        default: break;
    }

    ctx->pc = 0x1cd05cu;

    // 0x1cd05c: 0xc0738d4  jal         func_1CE350
    ctx->pc = 0x1CD05Cu;
    SET_GPR_U32(ctx, 31, 0x1CD064u);
    ctx->pc = 0x1CD060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD05Cu;
    // 0x1cd060: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE350u, 0x1CD05Cu, 0x1CD064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD064u;
label_1cd064:
    // 0x1cd064: 0x0  nop
    ctx->pc = 0x1cd064u;
    // NOP
    ctx->pc = 0x1cd068u;
}
