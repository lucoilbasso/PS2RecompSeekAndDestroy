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

// Function: entry_001d075c
// Address: 0x1d075c - 0x1d0764
void entry_001d075c_0x1d075c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d075c_0x1d075c");
#endif

    ctx->pc = 0x1d075cu;

    // 0x1d075c: 0xc074494  jal         func_1D1250
    ctx->pc = 0x1D075Cu;
    SET_GPR_U32(ctx, 31, 0x1D0764u);
    ctx->pc = 0x1D0760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D075Cu;
    // 0x1d0760: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1250u, 0x1D075Cu, 0x1D0764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0764u;
}
