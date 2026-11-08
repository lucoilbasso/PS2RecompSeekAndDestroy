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

// Function: entry_001328a8
// Address: 0x1328a8 - 0x1328b0
void entry_001328a8_0x1328a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001328a8_0x1328a8");
#endif

    ctx->pc = 0x1328a8u;

    // 0x1328a8: 0xc04c308  jal         func_130C20
    ctx->pc = 0x1328A8u;
    SET_GPR_U32(ctx, 31, 0x1328B0u);
    ctx->pc = 0x1328ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1328A8u;
    // 0x1328ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130C20u, 0x1328A8u, 0x1328B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1328B0u;
}
