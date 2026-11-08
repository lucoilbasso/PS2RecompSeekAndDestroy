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

// Function: entry_001b8b18
// Address: 0x1b8b18 - 0x1b8b20
void entry_001b8b18_0x1b8b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8b18_0x1b8b18");
#endif

    ctx->pc = 0x1b8b18u;

    // 0x1b8b18: 0xc06e2ce  jal         func_1B8B38
    ctx->pc = 0x1B8B18u;
    SET_GPR_U32(ctx, 31, 0x1B8B20u);
    ctx->pc = 0x1B8B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8B18u;
    // 0x1b8b1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8B38u, 0x1B8B18u, 0x1B8B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8B20u;
}
