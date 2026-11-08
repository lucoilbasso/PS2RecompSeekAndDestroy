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

// Function: entry_00118744
// Address: 0x118744 - 0x11874c
void entry_00118744_0x118744(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118744_0x118744");
#endif

    ctx->pc = 0x118744u;

    // 0x118744: 0xc0461ea  jal         func_1187A8
    ctx->pc = 0x118744u;
    SET_GPR_U32(ctx, 31, 0x11874Cu);
    ctx->pc = 0x118748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118744u;
    // 0x118748: 0x2118021  addu        $s0, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187A8u, 0x118744u, 0x11874Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11874Cu;
}
