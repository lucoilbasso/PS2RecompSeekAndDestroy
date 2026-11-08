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

// Function: entry_0019a680
// Address: 0x19a680 - 0x19a688
void entry_0019a680_0x19a680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a680_0x19a680");
#endif

    ctx->pc = 0x19a680u;

    // 0x19a680: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x19A680u;
    SET_GPR_U32(ctx, 31, 0x19A688u);
    ctx->pc = 0x19A684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A680u;
    // 0x19a684: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x19A680u, 0x19A688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A688u;
}
