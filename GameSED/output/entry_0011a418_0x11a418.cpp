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

// Function: entry_0011a418
// Address: 0x11a418 - 0x11a424
void entry_0011a418_0x11a418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a418_0x11a418");
#endif

    switch (ctx->pc) {
        case 0x11a420u: goto label_11a420;
        default: break;
    }

    ctx->pc = 0x11a418u;

    // 0x11a418: 0xc045ef0  jal         func_117BC0
    ctx->pc = 0x11A418u;
    SET_GPR_U32(ctx, 31, 0x11A420u);
    ctx->pc = 0x11A41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A418u;
    // 0x11a41c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117BC0u, 0x11A418u, 0x11A420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A420u;
label_11a420:
    // 0x11a420: 0x8f838968  lw          $v1, -0x7698($gp)
    ctx->pc = 0x11a420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
    ctx->pc = 0x11a424u;
}
