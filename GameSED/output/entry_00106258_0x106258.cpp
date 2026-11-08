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

// Function: entry_00106258
// Address: 0x106258 - 0x106268
void entry_00106258_0x106258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106258_0x106258");
#endif

    ctx->pc = 0x106258u;

    // 0x106258: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x106258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10625c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10625cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106260: 0xc06a19a  jal         func_1A8668
    ctx->pc = 0x106260u;
    SET_GPR_U32(ctx, 31, 0x106268u);
    ctx->pc = 0x106264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106260u;
    // 0x106264: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8668u, 0x106260u, 0x106268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106268u;
}
