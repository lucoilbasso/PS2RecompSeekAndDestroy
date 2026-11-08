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

// Function: entry_001a26f8
// Address: 0x1a26f8 - 0x1a2700
void entry_001a26f8_0x1a26f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a26f8_0x1a26f8");
#endif

    ctx->pc = 0x1a26f8u;

    // 0x1a26f8: 0xc06881e  jal         func_1A2078
    ctx->pc = 0x1A26F8u;
    SET_GPR_U32(ctx, 31, 0x1A2700u);
    ctx->pc = 0x1A26FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A26F8u;
    // 0x1a26fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2078u, 0x1A26F8u, 0x1A2700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2700u;
}
