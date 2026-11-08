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

// Function: entry_00198dbc
// Address: 0x198dbc - 0x198dc8
void entry_00198dbc_0x198dbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198dbc_0x198dbc");
#endif

    ctx->pc = 0x198dbcu;

    // 0x198dbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x198dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198dc0: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x198DC0u;
    SET_GPR_U32(ctx, 31, 0x198DC8u);
    ctx->pc = 0x198DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198DC0u;
    // 0x198dc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x198DC0u, 0x198DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198DC8u;
}
