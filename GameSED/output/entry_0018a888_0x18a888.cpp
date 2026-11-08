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

// Function: entry_0018a888
// Address: 0x18a888 - 0x18a890
void entry_0018a888_0x18a888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a888_0x18a888");
#endif

    ctx->pc = 0x18a888u;

    // 0x18a888: 0xc0629a2  jal         func_18A688
    ctx->pc = 0x18A888u;
    SET_GPR_U32(ctx, 31, 0x18A890u);
    ctx->pc = 0x18A88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A888u;
    // 0x18a88c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A688u, 0x18A888u, 0x18A890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A890u;
}
