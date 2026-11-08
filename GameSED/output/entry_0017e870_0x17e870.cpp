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

// Function: entry_0017e870
// Address: 0x17e870 - 0x17e878
void entry_0017e870_0x17e870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e870_0x17e870");
#endif

    ctx->pc = 0x17e870u;

    // 0x17e870: 0xc05f820  jal         func_17E080
    ctx->pc = 0x17E870u;
    SET_GPR_U32(ctx, 31, 0x17E878u);
    ctx->pc = 0x17E874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E870u;
    // 0x17e874: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E080u, 0x17E870u, 0x17E878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E878u;
}
