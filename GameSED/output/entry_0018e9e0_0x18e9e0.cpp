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

// Function: entry_0018e9e0
// Address: 0x18e9e0 - 0x18e9e8
void entry_0018e9e0_0x18e9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e9e0_0x18e9e0");
#endif

    ctx->pc = 0x18e9e0u;

    // 0x18e9e0: 0xc063342  jal         func_18CD08
    ctx->pc = 0x18E9E0u;
    SET_GPR_U32(ctx, 31, 0x18E9E8u);
    ctx->pc = 0x18E9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E9E0u;
    // 0x18e9e4: 0xac620048  sw          $v0, 0x48($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CD08u, 0x18E9E0u, 0x18E9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E9E8u;
}
