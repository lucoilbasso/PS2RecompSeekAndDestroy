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

// Function: entry_001cf46c
// Address: 0x1cf46c - 0x1cf478
void entry_001cf46c_0x1cf46c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf46c_0x1cf46c");
#endif

    ctx->pc = 0x1cf46cu;

    // 0x1cf46c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cf46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cf470: 0xc07417c  jal         func_1D05F0
    ctx->pc = 0x1CF470u;
    SET_GPR_U32(ctx, 31, 0x1CF478u);
    ctx->pc = 0x1CF474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF470u;
    // 0x1cf474: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D05F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D05F0u, 0x1CF470u, 0x1CF478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF478u;
}
