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

// Function: entry_00132650
// Address: 0x132650 - 0x132658
void entry_00132650_0x132650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132650_0x132650");
#endif

    ctx->pc = 0x132650u;

    // 0x132650: 0xc04ca52  jal         func_132948
    ctx->pc = 0x132650u;
    SET_GPR_U32(ctx, 31, 0x132658u);
    ctx->pc = 0x132654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132650u;
    // 0x132654: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132948u, 0x132650u, 0x132658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132658u;
}
