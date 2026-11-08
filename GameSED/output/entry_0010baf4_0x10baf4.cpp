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

// Function: entry_0010baf4
// Address: 0x10baf4 - 0x10bafc
void entry_0010baf4_0x10baf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010baf4_0x10baf4");
#endif

    ctx->pc = 0x10baf4u;

    // 0x10baf4: 0xc0637a8  jal         func_18DEA0
    ctx->pc = 0x10BAF4u;
    SET_GPR_U32(ctx, 31, 0x10BAFCu);
    ctx->pc = 0x10BAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BAF4u;
    // 0x10baf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DEA0u, 0x10BAF4u, 0x10BAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BAFCu;
}
