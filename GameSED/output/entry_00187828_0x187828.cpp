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

// Function: entry_00187828
// Address: 0x187828 - 0x187830
void entry_00187828_0x187828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187828_0x187828");
#endif

    ctx->pc = 0x187828u;

    // 0x187828: 0xc062218  jal         func_188860
    ctx->pc = 0x187828u;
    SET_GPR_U32(ctx, 31, 0x187830u);
    ctx->pc = 0x18782Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187828u;
    // 0x18782c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188860u, 0x187828u, 0x187830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187830u;
}
