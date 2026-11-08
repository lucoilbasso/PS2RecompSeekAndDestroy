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

// Function: entry_0013e878
// Address: 0x13e878 - 0x13e880
void entry_0013e878_0x13e878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e878_0x13e878");
#endif

    ctx->pc = 0x13e878u;

    // 0x13e878: 0xc05237a  jal         func_148DE8
    ctx->pc = 0x13E878u;
    SET_GPR_U32(ctx, 31, 0x13E880u);
    ctx->pc = 0x13E87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E878u;
    // 0x13e87c: 0xac8201e0  sw          $v0, 0x1E0($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 480), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148DE8u, 0x13E878u, 0x13E880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E880u;
}
