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

// Function: entry_0014cd60
// Address: 0x14cd60 - 0x14cd6c
void entry_0014cd60_0x14cd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014cd60_0x14cd60");
#endif

    ctx->pc = 0x14cd60u;

    // 0x14cd60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14cd60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cd64: 0xc041228  jal         func_1048A0
    ctx->pc = 0x14CD64u;
    SET_GPR_U32(ctx, 31, 0x14CD6Cu);
    ctx->pc = 0x14CD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CD64u;
    // 0x14cd68: 0x8ce801b4  lw          $t0, 0x1B4($a3) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1048A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1048A0u, 0x14CD64u, 0x14CD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CD6Cu;
}
