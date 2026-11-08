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

// Function: entry_00171c88
// Address: 0x171c88 - 0x171c94
void entry_00171c88_0x171c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171c88_0x171c88");
#endif

    ctx->pc = 0x171c88u;

    // 0x171c88: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x171c88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x171c8c: 0xc05d510  jal         func_175440
    ctx->pc = 0x171C8Cu;
    SET_GPR_U32(ctx, 31, 0x171C94u);
    ctx->pc = 0x171C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171C8Cu;
    // 0x171c90: 0x248413b0  addiu       $a0, $a0, 0x13B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175440u, 0x171C8Cu, 0x171C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171C94u;
}
