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

// Function: entry_00183d44
// Address: 0x183d44 - 0x183d4c
void entry_00183d44_0x183d44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183d44_0x183d44");
#endif

    ctx->pc = 0x183d44u;

    // 0x183d44: 0xc060f78  jal         func_183DE0
    ctx->pc = 0x183D44u;
    SET_GPR_U32(ctx, 31, 0x183D4Cu);
    ctx->pc = 0x183D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183D44u;
    // 0x183d48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183DE0u, 0x183D44u, 0x183D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183D4Cu;
}
