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

// Function: entry_00104074
// Address: 0x104074 - 0x10407c
void entry_00104074_0x104074(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104074_0x104074");
#endif

    ctx->pc = 0x104074u;

    // 0x104074: 0xc06a324  jal         func_1A8C90
    ctx->pc = 0x104074u;
    SET_GPR_U32(ctx, 31, 0x10407Cu);
    ctx->pc = 0x104078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104074u;
    // 0x104078: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8C90u, 0x104074u, 0x10407Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10407Cu;
}
