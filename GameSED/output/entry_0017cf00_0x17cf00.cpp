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

// Function: entry_0017cf00
// Address: 0x17cf00 - 0x17cf08
void entry_0017cf00_0x17cf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017cf00_0x17cf00");
#endif

    ctx->pc = 0x17cf00u;

    // 0x17cf00: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x17CF00u;
    SET_GPR_U32(ctx, 31, 0x17CF08u);
    ctx->pc = 0x17CF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CF00u;
    // 0x17cf04: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x17CF00u, 0x17CF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CF08u;
}
