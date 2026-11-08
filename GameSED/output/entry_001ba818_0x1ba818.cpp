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

// Function: entry_001ba818
// Address: 0x1ba818 - 0x1ba820
void entry_001ba818_0x1ba818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba818_0x1ba818");
#endif

    ctx->pc = 0x1ba818u;

    // 0x1ba818: 0xc06e728  jal         func_1B9CA0
    ctx->pc = 0x1BA818u;
    SET_GPR_U32(ctx, 31, 0x1BA820u);
    ctx->pc = 0x1BA81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA818u;
    // 0x1ba81c: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CA0u, 0x1BA818u, 0x1BA820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA820u;
}
