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

// Function: entry_0017cf3c
// Address: 0x17cf3c - 0x17cf44
void entry_0017cf3c_0x17cf3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017cf3c_0x17cf3c");
#endif

    ctx->pc = 0x17cf3cu;

    // 0x17cf3c: 0xc068364  jal         func_1A0D90
    ctx->pc = 0x17CF3Cu;
    SET_GPR_U32(ctx, 31, 0x17CF44u);
    ctx->pc = 0x17CF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CF3Cu;
    // 0x17cf40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0D90u, 0x17CF3Cu, 0x17CF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CF44u;
}
