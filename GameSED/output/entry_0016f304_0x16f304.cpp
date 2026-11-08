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

// Function: entry_0016f304
// Address: 0x16f304 - 0x16f30c
void entry_0016f304_0x16f304(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f304_0x16f304");
#endif

    ctx->pc = 0x16f304u;

    // 0x16f304: 0xc066c26  jal         func_19B098
    ctx->pc = 0x16F304u;
    SET_GPR_U32(ctx, 31, 0x16F30Cu);
    ctx->pc = 0x16F308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F304u;
    // 0x16f308: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B098u, 0x16F304u, 0x16F30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F30Cu;
}
