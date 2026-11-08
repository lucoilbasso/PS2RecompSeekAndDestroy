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

// Function: entry_0017634c
// Address: 0x17634c - 0x176354
void entry_0017634c_0x17634c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017634c_0x17634c");
#endif

    ctx->pc = 0x17634cu;

    // 0x17634c: 0xc06bd24  jal         func_1AF490
    ctx->pc = 0x17634Cu;
    SET_GPR_U32(ctx, 31, 0x176354u);
    ctx->pc = 0x176350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17634Cu;
    // 0x176350: 0x8f848c6c  lw          $a0, -0x7394($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF490u, 0x17634Cu, 0x176354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176354u;
}
