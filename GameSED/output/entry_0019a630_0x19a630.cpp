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

// Function: entry_0019a630
// Address: 0x19a630 - 0x19a63c
void entry_0019a630_0x19a630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a630_0x19a630");
#endif

    ctx->pc = 0x19a630u;

    // 0x19a630: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19a630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a634: 0xc0685b8  jal         func_1A16E0
    ctx->pc = 0x19A634u;
    SET_GPR_U32(ctx, 31, 0x19A63Cu);
    ctx->pc = 0x19A638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A634u;
    // 0x19a638: 0x2484deb0  addiu       $a0, $a0, -0x2150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x19A634u, 0x19A63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A63Cu;
}
