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

// Function: entry_00179b60
// Address: 0x179b60 - 0x179b6c
void entry_00179b60_0x179b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179b60_0x179b60");
#endif

    ctx->pc = 0x179b60u;

    // 0x179b60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x179b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179b64: 0xc071606  jal         func_1C5818
    ctx->pc = 0x179B64u;
    SET_GPR_U32(ctx, 31, 0x179B6Cu);
    ctx->pc = 0x179B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179B64u;
    // 0x179b68: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5818u, 0x179B64u, 0x179B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179B6Cu;
}
