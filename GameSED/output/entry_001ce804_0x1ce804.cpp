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

// Function: entry_001ce804
// Address: 0x1ce804 - 0x1ce80c
void entry_001ce804_0x1ce804(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce804_0x1ce804");
#endif

    ctx->pc = 0x1ce804u;

    // 0x1ce804: 0xc074266  jal         func_1D0998
    ctx->pc = 0x1CE804u;
    SET_GPR_U32(ctx, 31, 0x1CE80Cu);
    ctx->pc = 0x1CE808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE804u;
    // 0x1ce808: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0998u, 0x1CE804u, 0x1CE80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE80Cu;
}
