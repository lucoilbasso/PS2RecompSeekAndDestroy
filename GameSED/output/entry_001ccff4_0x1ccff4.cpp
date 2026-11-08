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

// Function: entry_001ccff4
// Address: 0x1ccff4 - 0x1cd000
void entry_001ccff4_0x1ccff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ccff4_0x1ccff4");
#endif

    switch (ctx->pc) {
        case 0x1ccffcu: goto label_1ccffc;
        default: break;
    }

    ctx->pc = 0x1ccff4u;

    // 0x1ccff4: 0xc0738d4  jal         func_1CE350
    ctx->pc = 0x1CCFF4u;
    SET_GPR_U32(ctx, 31, 0x1CCFFCu);
    ctx->pc = 0x1CCFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCFF4u;
    // 0x1ccff8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE350u, 0x1CCFF4u, 0x1CCFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCFFCu;
label_1ccffc:
    // 0x1ccffc: 0x0  nop
    ctx->pc = 0x1ccffcu;
    // NOP
    ctx->pc = 0x1cd000u;
}
