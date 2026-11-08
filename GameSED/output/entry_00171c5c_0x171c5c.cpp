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

// Function: entry_00171c5c
// Address: 0x171c5c - 0x171c68
void entry_00171c5c_0x171c5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171c5c_0x171c5c");
#endif

    ctx->pc = 0x171c5cu;

    // 0x171c5c: 0x2484d470  addiu       $a0, $a0, -0x2B90
    ctx->pc = 0x171c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956144));
    // 0x171c60: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x171C60u;
    SET_GPR_U32(ctx, 31, 0x171C68u);
    ctx->pc = 0x171C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171C60u;
    // 0x171c64: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x171C60u, 0x171C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171C68u;
}
