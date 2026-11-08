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

// Function: entry_001ccd50
// Address: 0x1ccd50 - 0x1ccd58
void entry_001ccd50_0x1ccd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ccd50_0x1ccd50");
#endif

    ctx->pc = 0x1ccd50u;

    // 0x1ccd50: 0xc0735c6  jal         func_1CD718
    ctx->pc = 0x1CCD50u;
    SET_GPR_U32(ctx, 31, 0x1CCD58u);
    ctx->pc = 0x1CCD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCD50u;
    // 0x1ccd54: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD718u, 0x1CCD50u, 0x1CCD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCD58u;
}
