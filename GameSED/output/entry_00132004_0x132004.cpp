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

// Function: entry_00132004
// Address: 0x132004 - 0x13200c
void entry_00132004_0x132004(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132004_0x132004");
#endif

    ctx->pc = 0x132004u;

    // 0x132004: 0xc0612a4  jal         func_184A90
    ctx->pc = 0x132004u;
    SET_GPR_U32(ctx, 31, 0x13200Cu);
    ctx->pc = 0x132008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132004u;
    // 0x132008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184A90u, 0x132004u, 0x13200Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13200Cu;
}
