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

// Function: entry_0017187c
// Address: 0x17187c - 0x171884
void entry_0017187c_0x17187c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017187c_0x17187c");
#endif

    ctx->pc = 0x17187cu;

    // 0x17187c: 0xc05c5e0  jal         func_171780
    ctx->pc = 0x17187Cu;
    SET_GPR_U32(ctx, 31, 0x171884u);
    ctx->pc = 0x171880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17187Cu;
    // 0x171880: 0x27a8000c  addiu       $t0, $sp, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171780u, 0x17187Cu, 0x171884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171884u;
}
