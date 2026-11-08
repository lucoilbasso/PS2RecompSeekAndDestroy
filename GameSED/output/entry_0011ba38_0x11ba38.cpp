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

// Function: entry_0011ba38
// Address: 0x11ba38 - 0x11ba40
void entry_0011ba38_0x11ba38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ba38_0x11ba38");
#endif

    ctx->pc = 0x11ba38u;

    // 0x11ba38: 0xc044d30  jal         func_1134C0
    ctx->pc = 0x11BA38u;
    SET_GPR_U32(ctx, 31, 0x11BA40u);
    ctx->pc = 0x11BA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA38u;
    // 0x11ba3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1134C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1134C0u, 0x11BA38u, 0x11BA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BA40u;
}
